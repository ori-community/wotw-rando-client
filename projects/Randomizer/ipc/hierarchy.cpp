#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/ipc/ipc.h>
#include <Core/utils/json_serializers.h>

#include <fstream>

#include <Modloader/app/methods/AK/Wwise/BaseType.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Quaternion.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/Quaternion.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Modloader/app/structs/ActivateBasedOnCondition.h>
#include <Modloader/app/structs/AmbienceZone.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/structs/ChangeStateOnCondition.h>
#include <Modloader/app/structs/DesiredUberStateGeneric.h>
#include <Modloader/app/structs/HasAbilityCondition.h>
#include <Modloader/app/structs/Int32__Boxed.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/QuestNodeSetup.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSet.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup.h>
#include <Modloader/app/structs/QuestNodeWisps.h>
#include <Modloader/app/structs/SeinAbilityCondition.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/SoundZoneTrigger.h>
#include <Modloader/app/structs/TranslatedMessageProvider.h>
#include <Modloader/app/structs/TranslatedMessageProvider_MessageItem.h>
#include <Modloader/app/structs/UberStateConditionWrapper.h>
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#include <Modloader/app/structs/WotwUberStateWwiseStateManager.h>

using namespace app::classes;
using namespace app::classes::UnityEngine;

using namespace core::ipc;

namespace randomizer::ipc {
    namespace {
        std::string get_klass_name(void* klass) {
            auto cast = reinterpret_cast<Il2CppClass*>(klass);
            if (std::string_view(cast->namespaze).empty()) {
                return cast->name;
            }

            return std::format("{}.{}", cast->namespaze, cast->name);
        }

        using visualizer = void (*)(nlohmann::json& j, void* obj, bool verbose);
        extern nlohmann::json visualize(void* obj, std::string name, bool verbose);

        template <class...>
        constexpr bool always_false = false;

        template <typename T>
        nlohmann::json visualize_struct(std::string_view name, T const& value) {
            static_assert(always_false<T>, "visualize struct not implemented for this type.");
            return {};
        }

        template <>
        nlohmann::json visualize_struct(std::string_view name, app::Vector3 const& value) {
            return {
                { "name", name },
                { "type", "vector_3" },
                {
                    "value",
                    {
                        { "x", value.x },
                        { "y", value.y },
                        { "z", value.z },
                    },
                },
            };
        }

        template <>
        nlohmann::json visualize_struct(std::string_view name, app::Vector2 const& value) {
            return {
                { "name", name },
                { "type", "vector_2" },
                {
                    "value",
                    {
                        { "x", value.x },
                        { "y", value.y },
                    },
                },
            };
        }

        template <typename T>
        nlohmann::json create_variable(std::string_view name, std::string_view type, T value) {
            return {
                { "name", name },
                { "type", type },
                { "value", value }
            };
        }

        template <typename T>
        nlohmann::json create_list(std::string_view name, std::string_view element_type, T& list) {
            auto arr = nlohmann::json::array();
            if (il2cpp::unity::is_valid(list))
                for (auto i = 0; i < list->fields._size; ++i)
                    arr.push_back(create_variable(std::to_string(i), element_type, list->fields._items->vector[i]));

            return create_variable(name, "array", arr);
        }

        template <typename T>
        nlohmann::json visualize_list_struct(std::string_view name, T& list) {
            auto arr = nlohmann::json::array();
            if (il2cpp::unity::is_valid(list))
                for (auto i = 0; i < list->fields._size; ++i)
                    arr.push_back(visualize_struct(std::to_string(i), list->fields._items->vector[i]));

            return create_variable(name, "array", arr);
        }

        template <typename T>
        nlohmann::json visualize_list(std::string_view name, T& list, bool verbose) {
            auto arr = nlohmann::json::array();
            if (il2cpp::unity::is_valid(list)) {
                for (auto i = 0; i < list->fields._size; ++i) {
                    arr.push_back(visualize(list->fields._items->vector[i], std::to_string(i), verbose));
                }
            }

            return create_variable(name, "array", arr);
        }

        template <typename T>
        nlohmann::json visualize_array(std::string_view name, T& list, bool verbose) {
            auto arr = nlohmann::json::array();
            if (list != nullptr) {
                for (auto i = 0; i < list->max_length; ++i) {
                    arr.push_back(visualize(list->vector[i], std::to_string(i), verbose));
                }
            }

            return create_variable(name, "array", arr);
        }

        void visualize_visible_on_world_map(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::VisibleOnWorldMap*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("icon", "scalar", cast->fields.Icon),
                create_variable("is_secret", "scalar", cast->fields.IsSecret),
                create_variable("always_add_to_all", "scalar", cast->fields.m_alwaysAddToAll),
                visualize_struct("offset", cast->fields.Offset),
                visualize(cast->fields.RevealCondition, "reveal_condition", verbose),
                create_variable("reveal_when_on_screen", "scalar", cast->fields.RevealWhenOnScreen),
                visualize(cast->fields.VisibilityOverrideCondition, "visibility_override_condition", verbose),
                visualize(cast->fields.VisibilityOverrideUberState, "visibility_override_uber_state", verbose),
                visualize(cast->fields._.MoonGuid, "guid", verbose),
            });
        }

        void visualize_translated_message_provider_message_item(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::TranslatedMessageProvider_MessageItem*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("english", "scalar", il2cpp::convert_csstring(cast->fields.English)),
            });
        }

        void visualize_translated_message_provider(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::TranslatedMessageProvider*>(obj);
            auto arr = nlohmann::json::array();

            j["value"] = nlohmann::json::array({
                visualize_list("messages", cast->fields.Messages, verbose),
            });
        }

        void visualize_desired_uberstate_generic(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::DesiredUberStateGeneric*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("desired", "scalar", cast->fields.DesiredValue),
                create_variable("previous_state", "scalar", cast->fields.m_previousState),
                visualize(cast->fields.State, "state", verbose),
            });
        }

        void visualize_desired_uberstate_bool(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::DesiredUberStateBool*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("desired", "scalar", cast->fields.DesiredValue),
                create_variable("previous_state", "scalar", cast->fields._.m_previousState),
                visualize(cast->fields._.Descriptor, "state", verbose),
            });
        }

        void visualize_desired_uberstate_byte(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::DesiredUberStateByte*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("desired", "scalar", cast->fields.DesiredStateValue),
                create_variable("previous_state", "scalar", cast->fields.m_previousState),
                visualize(cast->fields.State, "state", verbose),
            });
        }

        void visualize_desired_uberstate_int(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::DesiredUberStateInt*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("desired", "scalar", cast->fields.DesiredValue),
                create_variable("previous_state", "scalar", cast->fields.m_previousState),
                visualize(cast->fields.Descriptor, "state", verbose),
            });
        }

        void visualize_desired_uberstate_float(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::DesiredUberStateFloat*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("desired", "scalar", cast->fields.DesiredValue),
                create_variable("previous_state", "scalar", cast->fields.m_previousState),
                visualize(cast->fields.Descriptor, "state", verbose),
            });
        }

        void visualize_desired_uberstate_composite(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::DesiredUberStateComposite*>(obj);
            j["value"] = nlohmann::json::array({
                visualize_list("bool_requirements", cast->fields.BoolRequirements, verbose),
                visualize_list("byte_requirements", cast->fields.ByteRequirements, verbose),
                visualize_list("int_requirements", cast->fields.IntRequirements, verbose),
                visualize_list("float_requirements", cast->fields.FloatRequirements, verbose),
                visualize_list("all_descriptors", cast->fields.m_allDescriptors, verbose),
            });
        }

        void visualize_generic_data_container(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::GenericDataContainer*>(obj);
            j["value"] = nlohmann::json::array({
                create_list("booleans", "scalar", cast->fields.Booleans),
                create_list("bytes", "scalar", cast->fields.Bytes),
                create_list("ints", "scalar", cast->fields.Ints),
                create_list("floats", "scalar", cast->fields.Floats),
                visualize_list_struct("vectors", cast->fields.Vectors),
            });
        }

        void visualize_quest_interaction(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::QuestNodeSetup_QuestInteraction*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("autocontinue", "scalar", cast->fields.Autocontinue),
                visualize(cast->fields.Condition, "condition", verbose),
                create_variable("increment_quest_uberstate", "scalar", cast->fields.IncrementQuestUberState),
                create_variable("invert_condition", "scalar", cast->fields.InvertCondition),
                create_variable("location_independant", "scalar", cast->fields.LocationIndependent),
                visualize(cast->fields.MessageProvider, "message_provider", verbose),
                create_variable("reward", "scalar", cast->fields.Reward),
                visualize(cast->fields.StateChange, "state_change", verbose),
                create_variable("top_priority", "scalar", cast->fields.TopPriority),
            });
        }

        void visualize_quest_interaction_set(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::QuestNodeSetup_QuestInteractionSet*>(obj);
            j["value"] = nlohmann::json::array({
                visualize_list("interactions", cast->fields.Interactions, verbose),
                create_variable("quest_uber_state_value", "scalar", cast->fields.QuestUberStateValue),
            });
        }

        void visualize_quest_interaction_setup(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::QuestNodeSetup_QuestInteractionSetup*>(obj);
            j["value"] = nlohmann::json::array({
                visualize_list("interaction_sets", cast->fields.InteractionSets, verbose),
                visualize(cast->fields.QuestUberState, "quest_uber_state", verbose),
                visualize(cast->fields.SceneMetaData, "scene_meta_data", verbose),
            });
        }

        void visualize_quest_node_setup(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::QuestNodeSetup*>(obj);
            j["value"] = nlohmann::json::array({
                visualize_list("quest_interaction_sets", cast->fields.QuestInteractionSets, verbose),
            });
        }

        void visualize_quest_node_wisps(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::QuestNodeWisps*>(obj);
            j["value"] = nlohmann::json::array({ visualize(cast->fields.QuestSetup, "quest_setup", verbose) });
        }

        void visualize_uber_state(nlohmann::json& j, void* obj, bool verbose) {
            core::api::uber_states::UberState state(reinterpret_cast<app::IUberState*>(obj));
            j["value"] = nlohmann::json::array({
                create_variable("group_id", "scalar", state.group()),
                create_variable("state_id", "scalar", state.state()),
                create_variable("group_name", "scalar", state.group_name()),
                create_variable("state_name", "scalar", state.state_name()),
                create_variable("value", "scalar", state.get()),
            });
        }

        void visualize_uber_state_condition(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::UberStateCondition*>(obj);
            auto state = il2cpp::invoke<app::Boolean__Boxed>(cast->fields.Descriptor, "CanResolve", 0)->fields
                ? il2cpp::invoke<app::IUberState>(cast->fields.Descriptor, "Resolve", 0)
                : nullptr;
            j["value"] = nlohmann::json::array({
                create_variable("condition_type", "scalar", cast->fields.m_conditionClassID),
                visualize(state, "descriptor", verbose),
                visualize(cast->fields.Data, "data", verbose),
            });
        }

        void visualize_condition_uber_state(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::ConditionUberState*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("check_mode", "scalar", cast->fields.CheckMode),
                create_variable("group_id", "scalar", cast->fields.Group->fields._.m_id->fields.m_id),
                create_variable("state_id", "scalar", cast->fields._.m_id->fields.m_id),
                create_variable("default_value", "scalar", cast->fields._DefaultBooleanValue_k__BackingField),
                create_variable("generic_override", "scalar", cast->fields._VolitileGenericOverrideValue_k__BackingField.has_value ? std::to_string(cast->fields._VolitileGenericOverrideValue_k__BackingField.value) : "nullptr"),
                visualize_list("descriptors", cast->fields.Descriptors, verbose),
                visualize_array("named_values", cast->fields.NamedValues->fields.Entries, verbose),
            });
        }

        void visualize_activate_based_on_condition(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::ActivateBasedOnCondition*>(obj);
            auto condition_path = il2cpp::unity::get_path(cast->fields.Condition);
            auto target = il2cpp::invoke<app::Boolean__Boxed>(cast->fields.MoonTarget, "CanResolve", 0)->fields
                ? il2cpp::invoke<app::GameObject>(cast->fields.MoonTarget, "Resolve", 0)
                : nullptr;
            auto moon_target_path = il2cpp::unity::get_path(target);
            auto target_path = il2cpp::unity::get_path(cast->fields.Target);
            j["value"] = nlohmann::json::array({
                create_variable("activate", "scalar", cast->fields.Activate),
                create_variable("condition", "game_object", condition_path),
                create_variable("moon_target", "game_object", moon_target_path),
                create_variable("target", "game_object", target_path),
            });
        }

        void visualize_sein_ability_condition(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::SeinAbilityCondition*>(obj);
            j["value"] = nlohmann::json::array({ create_variable("ability", "scalar", cast->fields.Ability) });
        }

        void visualize_has_ability_condition(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::HasAbilityCondition*>(obj);
            j["value"] = nlohmann::json::array({ create_variable("ability", "scalar", cast->fields.AbilityType) });
        }

        void visualize_uber_state_condition_wrapper(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::UberStateConditionWrapper*>(obj);
            j["value"] = nlohmann::json::array({
                visualize(cast->fields.Condition, "condition", verbose),
                create_variable("invert", "scalar", cast->fields.Invert),
            });
        }

        void visualize_change_state_on_condition(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::ChangeStateOnCondition*>(obj);
            j["value"] = nlohmann::json::array({
                visualize(cast->fields.Condition, "condition", verbose),
                create_variable("has_been_triggered", "scalar", cast->fields.m_hasBeenTriggered),
                create_variable("has_been_upgraded", "scalar", cast->fields.m_hasBeenUpgraded),
                visualize(cast->fields.StateChange, "state_change", verbose),
                visualize(cast->fields.StateChangeOld, "state_change_old", verbose),
                create_variable("create_checkpoint_on_state_change", "scalar", cast->fields.CreateCheckpointOnStateChange),
            });
        }

        void visualize_change_state_setup_holder(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::ChangeStateSetupHolder*>(obj);
            j["value"] = nlohmann::json::array({
                visualize_list("state_data", cast->fields._._.StateData, verbose),
                visualize(cast->fields._._._.Mapping, "mapping", verbose),
            });

            if (cast->fields._._._.State != nullptr &&
                il2cpp::invoke<app::Boolean__Boxed>(cast->fields._._._.State, "get_HasAReference")->fields &&
                il2cpp::invoke<app::Boolean__Boxed>(cast->fields._._._.State, "CanResolve", 0)->fields) {
                const auto target = il2cpp::invoke<Il2CppObject>(cast->fields._._._.State, "Resolve", 0);
                j["value"].push_back(visualize(target, "uber_state", verbose));
            }
        }

        void visualize_change_state_setup_data(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::ChangeStateSetupData*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("desired_value", "scalar", cast->fields.m_desiredValue),
            });
        }

        void visualize_state_change_definition(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::StateChangeDefinition*>(obj);
            j["value"] = nlohmann::json::array({ visualize(cast->fields.State, "desired_state", verbose) });
        }

        void visualize_setup_state(nlohmann::json& j, void* obj, bool verbose) {
            auto cast = reinterpret_cast<app::SetupState*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("state_guid", "scalar", cast->fields.StateGUID),
                create_variable("state_name", "scalar", il2cpp::convert_csstring(cast->fields.StateName)),
            });
        }

        void visualize_setup_state_modifier(nlohmann::json& j, void* obj, bool verbose) {
            auto ssm = reinterpret_cast<app::SetupStateModifier*>(obj);
            auto game_object = il2cpp::invoke<app::Boolean__Boxed>(ssm->fields.Target, "CanResolve", 0)->fields
                ? il2cpp::invoke<app::GameObject>(ssm->fields.Target, "Resolve", 0)
                : nullptr;
            j["value"] = nlohmann::json::array({
                create_variable("modifier_guid", "scalar", ssm->fields.ModifierGUID),
                create_variable("game_object", "game_object", il2cpp::unity::get_path(game_object)),
            });
        }

        void visualize_new_setup_state_controller(nlohmann::json& j, void* obj, bool verbose) {
            auto nssc = reinterpret_cast<app::NewSetupStateController*>(obj);
            if (verbose) {
                auto modifiers = nlohmann::json::array();
                for (auto i = 0; i < nssc->fields.StateHolder->fields.Modifiers->fields._size; ++i) {
                    auto modifier = nssc->fields.StateHolder->fields.Modifiers->fields._items->vector[i];
                    modifiers.push_back(visualize(modifier, std::to_string(i), verbose));
                }

                auto states = nlohmann::json::array();
                for (auto i = 0; i < nssc->fields.StateHolder->fields.States->fields._size; ++i) {
                    auto state = nssc->fields.StateHolder->fields.States->fields._items->vector[i];
                    states.push_back(visualize(state, std::to_string(i), verbose));
                }

                app::IUberState* state = nullptr;
                auto state_ref = nssc->fields.StateHolder->fields._._.State;
                if (il2cpp::unity::is_valid(state_ref))
                    state = il2cpp::invoke<app::Boolean__Boxed>(state_ref, "CanResolve", 0)->fields
                        ? il2cpp::invoke<app::IUberState>(state_ref, "Resolve", 0)
                        : nullptr;

                auto mapping = nssc->fields.StateHolder->fields._._.Mapping;
                j["value"] = {
                    create_variable("active_state", "scalar", nssc->fields.m_activeStateIndex),
                    create_variable("mode", "scalar", nssc->fields.StateHolder->fields.Mode),
                    create_variable("fallback_state", "scalar", nssc->fields.StateHolder->fields.FallbackPassiveState),
                    create_variable("modifiers", "array", modifiers),
                    create_variable("states", "array", states),
                    visualize(state, "uber_state", verbose),
                    visualize(mapping, "mapping", verbose),
                };
            }
        }

        void visualize_transform(nlohmann::json& j, void* obj, bool verbose) {
            auto transform = reinterpret_cast<app::Transform*>(obj);
            auto position = Transform::get_position(transform);
            if (verbose) {
                auto quat = Transform::get_rotation(transform);
                auto boxed = types::Quaternion::box(quat);
                auto rotation = Quaternion::get_eulerAngles(boxed);
                auto local_position = Transform::get_localPosition(transform);
                quat = Transform::get_localRotation(transform);
                boxed = types::Quaternion::box(quat);
                auto local_rotation = Quaternion::get_eulerAngles(boxed);
                auto local_scale = Transform::get_localScale(transform);

                j["value"] = {
                    visualize_struct("world_position", position),
                    visualize_struct("world_rotation", rotation),
                    visualize_struct("local_position", local_position),
                    visualize_struct("local_rotation", local_rotation),
                    visualize_struct("local_scale", local_scale),
                };
            } else {
                j["value"] = {
                    visualize_struct("world_position", position),
                };
            }
        }

        void visualize_wwise_basetype(nlohmann::json& j, void* obj, bool verbose) {
            auto base_type = reinterpret_cast<app::BaseType*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("id", "scalar", AK::Wwise::BaseType::get_Id(base_type)),
                create_variable("name", "scalar", il2cpp::convert_csstring(AK::Wwise::BaseType::get_Name(base_type))),
            });
        }

        void visualize_ambience_zone(nlohmann::json& j, void* obj, bool verbose) {
            auto zone = reinterpret_cast<app::AmbienceZone*>(obj);
            j["value"] = nlohmann::json::array({
                visualize(zone->fields.WiseEvent, "event", verbose),
                visualize(zone->fields.WiseEventOnEnter, "event_enter", verbose),
                visualize(zone->fields.WiseEventOnExit, "event_exit", verbose),
                visualize(zone->fields.StateOnEnter, "state_enter", verbose),
                visualize(zone->fields.StateOnExit, "state_exit", verbose),
            });
        }

        void visualize_sound_zone_trigger(nlohmann::json& j, void* obj, bool verbose) {
            auto trigger = reinterpret_cast<app::SoundZoneTrigger*>(obj);
            j["value"] = nlohmann::json::array({
                visualize(trigger->fields.State, "state", verbose),
                visualize(trigger->fields.Event, "event", verbose),
                visualize(trigger->fields.Trigger, "trigger", verbose),
                visualize(trigger->fields.Switch, "switch", verbose),
                create_variable("trigger_once", "scalar", trigger->fields.TriggerOnce),
                visualize(trigger->fields.TriggerOnceUberState, "trigger_once_uber_state", verbose),
            });
        }

        void visualize_wotw_uber_state_wwise_state_manager(nlohmann::json& j, void* obj, bool verbose) {
            auto manager = reinterpret_cast<app::WotwUberStateWwiseStateManager*>(obj);
            j["value"] = nlohmann::json::array({
                visualize_array("entries", manager->fields.WotwUberStateToWwiseData->fields.InheritedMap, verbose),
            });


            std::ofstream output("wwise_dump.json");
            output << j.dump(2) << std::endl;
            output.close();
        }

        void visualize_wotw_uber_state_to_wwise_data_wotw_uber_state_to_wwise_entry(nlohmann::json& j, void* obj, bool verbose) {
            auto entry = reinterpret_cast<app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry*>(obj);
            j["value"] = nlohmann::json::array({
                visualize_array("wwise_states", entry->fields._.WwiseStatesToSet, verbose),
                visualize_array("bool_requirements", entry->fields._.UberStateConditions->fields.BoolRequirements, verbose),
                visualize_array("byte_requirements", entry->fields._.UberStateConditions->fields.ByteRequirements, verbose),
                visualize_array("int_requirements", entry->fields._.UberStateConditions->fields.IntRequirements, verbose),
                visualize_array("float_requirements", entry->fields._.UberStateConditions->fields.FloatRequirements, verbose),
                visualize_array("condition_requirements", entry->fields._.UberStateConditions->fields.ConditionRequirements, verbose),
                visualize_array("ability_requirements", entry->fields.WotwUberStateConditions->fields.PlayerAbilityRequirements, verbose),
            });
        }

        void visualize_uber_state_to_wwise_data_desired_condition_uber_state(nlohmann::json& j, void* obj, bool verbose) {
            auto state = reinterpret_cast<app::UberStateToWwiseData_DesiredConditionUberState*>(obj);
            j["value"] = nlohmann::json::array({
                visualize(state->fields.State, "condition", verbose),
                create_variable("desired_value", "scalar", state->fields.DesiredStateValue)
            });
        }

        void visualize_uber_state_to_wwise_data_ability_requirement_condition(nlohmann::json& j, void* obj, bool verbose) {
            auto condition = reinterpret_cast<app::WotwUberStateToWwiseData_AbilityRequirementCondition*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("ability", "scalar", condition->fields.AbilityType),
                create_variable("has_ability", "scalar", condition->fields.HasAbility),
            });
        }

        void visualize_moon_timeline_wwise_sound_animator_entry(nlohmann::json& j, void* obj, bool verbose) {
            auto entry = reinterpret_cast<app::WWiseSoundAnimatorEntity*>(obj);
            j["value"] = nlohmann::json::array({
                visualize(entry->fields.State, "state", verbose),
                visualize(entry->fields.Event, "event", verbose),
                visualize(entry->fields.Trigger, "trigger", verbose),
                visualize(entry->fields.Switch, "switch", verbose),
            });
        }

        void visualize_game_object(nlohmann::json& j, void* obj, bool verbose) {
            auto go = reinterpret_cast<app::GameObject*>(obj);
            auto id = Object::GetInstanceID(reinterpret_cast<app::Object_1*>(go));
            auto layer = il2cpp::invoke<app::Int32__Boxed>(go, "get_layer")->fields;
            j["instance_id"] = id;
            j["active"] = il2cpp::unity::get_active(go);
            j["active_self"] = il2cpp::unity::get_active_self(go);
            j["path"] = il2cpp::unity::get_path(go);
            if (verbose) {
                nlohmann::json arr;
                auto components = il2cpp::unity::get_components(go);
                for (auto component : components)
                    arr.push_back(visualize(component, "", verbose));

                j["value"] = nlohmann::json::array({
                    create_variable("layer", "scalar", layer),
                    create_variable("components", "components", arr),
                });
            } else {
                auto children = il2cpp::unity::get_children(go);
                j["children_count"] = children.size();
            }
        }

        std::unordered_map<std::string, visualizer> visualizers{
            { "NewSetupStateController", visualize_new_setup_state_controller },
            { "SetupStateModifier", visualize_setup_state_modifier },
            { "SetupState", visualize_setup_state },
            //{ "StateCondition", visualize_state_condition },

            { "ActivateBasedOnCondition", visualize_activate_based_on_condition },
            { "SeinAbilityCondition", visualize_sein_ability_condition },
            { "HasAbilityCondition", visualize_has_ability_condition },
            { "UberStateConditionWrapper", visualize_uber_state_condition_wrapper },
            { "Moon.Setups.ChangeStateOnCondition", visualize_change_state_on_condition },
            { "Moon.Setups.ChangeStateSetupHolder", visualize_change_state_setup_holder },
            { "Moon.Setups.ChangeStateSetupData", visualize_change_state_setup_data },
            { "StateChangeDefinition", visualize_state_change_definition },

            //{ "UberStateBoolCondition", visualize_uber_state_bool_condition },
            //{ "UberStateValueCondition", visualize_uber_state_value_condition },
            { "UberStateCondition", visualize_uber_state_condition },

            { "DesiredUberStateGeneric", visualize_desired_uberstate_generic },
            { "DesiredUberStateBool", visualize_desired_uberstate_bool },
            { "DesiredUberStateByte", visualize_desired_uberstate_byte },
            { "DesiredUberStateInt", visualize_desired_uberstate_int },
            { "DesiredUberStateFloat", visualize_desired_uberstate_float },
            { "DesiredUberStateComposite", visualize_desired_uberstate_composite },

            { "VisibleOnWorldMap", visualize_visible_on_world_map },

            { "GenericDataContainer", visualize_generic_data_container },
            { "TranslatedMessageProvider", visualize_translated_message_provider },
            { "MessageItem", visualize_translated_message_provider_message_item },

            { "QuestInteraction", visualize_quest_interaction },
            { "QuestInteractionSet", visualize_quest_interaction_set },
            { "QuestInteractionSetup", visualize_quest_interaction_setup },
            { "QuestNodeSetup", visualize_quest_node_setup },
            { "QuestNodeWisps", visualize_quest_node_wisps },

            { "AmbienceZone", visualize_ambience_zone },
            { "SoundZoneTrigger", visualize_sound_zone_trigger },
            { "AK.Wwise.BaseType", visualize_wwise_basetype },
            { "WotwUberStateWwiseStateManager", visualize_wotw_uber_state_wwise_state_manager },
            { "WotwUberStateToWWiseEntry", visualize_wotw_uber_state_to_wwise_data_wotw_uber_state_to_wwise_entry },
            { "DesiredConditionUberState", visualize_uber_state_to_wwise_data_desired_condition_uber_state },
            { "AbilityRequirementCondition", visualize_uber_state_to_wwise_data_ability_requirement_condition },
            { "Moon.Timeline.WWiseSoundAnimatorEntity", visualize_moon_timeline_wwise_sound_animator_entry },

            //{ "Moon.SerializedBooleanUberState", visualize_serialized_uber_state },
            //{ "Moon.SerializedFloatUberState", visualize_serialized_uber_state },
            //{ "Moon.SerializedByteUberState", visualize_serialized_uber_state },
            //{ "Moon.SerializedIntUberState", visualize_serialized_uber_state },
            { "Moon.ConditionUberState", visualize_condition_uber_state },
            { "Moon.UberIDOwnerSO", visualize_uber_state },

            //{ "SceneRoot", visualize_scene_root },
            { "UnityEngine.GameObject", visualize_game_object },
            { "UnityEngine.Transform", visualize_transform },
            //{ "UnityEngine.Mesh", visualize_unity_mesh },
            //{ "UnityEngine.MeshFilter", visualize_unity_mesh_filter },
            //{ "UnityEngine.Renderer", visualize_unity_renderer },

            //{ "Respawner", visualize_respawner },
        };

        nlohmann::json visualize(void* obj, std::string name, bool verbose) {
            nlohmann::json j;
            if (!name.empty())
                j["name"] = name;

            if (obj == nullptr) {
                j["type"] = "nullptr";
                j["value"] = "invalid reference";
                return j;
            }

            auto cast = reinterpret_cast<Il2CppObject*>(obj);
            auto klass = cast->Il2CppClass.klass;
            while (klass != nullptr) {
                std::string full_name = std::string(get_klass_name(klass));
                auto it = visualizers.find(full_name);
                if (it != visualizers.end()) {
                    j["type"] = get_klass_name(cast->Il2CppClass.klass);
                    if (cast->Il2CppClass.klass != klass)
                        j["visualizer_type"] = get_klass_name(klass);

                    it->second(j, obj, verbose);
                    return j;
                }

                klass = klass->parent;
            }

            j["type"] = get_klass_name(cast->Il2CppClass.klass);
            j["value"] = nullptr;
            return j;
        }

        app::GameObject* find_game_object(const std::string& path, std::optional<int>& instance_id) {
            if (instance_id.has_value()) {
                auto game_object = UnityEngine::Object::FindObjectFromInstanceID(instance_id.value());

                if (il2cpp::unity::is_valid(game_object) && il2cpp::is_assignable(game_object, types::GameObject::get_class())) {
                    return reinterpret_cast<app::GameObject*>(game_object);
                }
            }

            return core::api::scenes::get_game_object(path);
        }

        std::optional<int> get_optional_instance_id(const nlohmann::json& j) {
            std::optional<int> instance_id;

            if (!j.is_null()) {
                instance_id.emplace(j.get<int>());
            }

            return instance_id;
        }

        void report_roots(nlohmann::json& j, bool children) {
            auto game_objects = core::api::scenes::get_roots_from_active();
            if (children) {
                auto payload = nlohmann::json::array();
                std::sort(game_objects.begin(), game_objects.end(), [](auto a, auto b) {
                    auto name_a = il2cpp::unity::get_object_name(a);
                    auto name_b = il2cpp::unity::get_object_name(b);
                    return name_a < name_b;
                });
                for (auto game_object : game_objects)
                    if (il2cpp::unity::is_valid(game_object))
                        payload.push_back(visualize(game_object, il2cpp::unity::get_object_name(game_object), false));

                j["payload"] = payload;
            } else {
                j["payload"] = {
                    { "path", "" },
                    { "children_count", game_objects.size() },
                };
            }
        }

        void report_game_object(nlohmann::json& j, app::GameObject* go, bool visualize_children) {
            if (visualize_children) {
                auto children = il2cpp::unity::get_children(go);
                std::sort(children.begin(), children.end(), [](auto a, auto b) {
                    auto name_a = il2cpp::unity::get_object_name(a);
                    auto name_b = il2cpp::unity::get_object_name(b);
                    return name_a < name_b;
                });
                auto payload = nlohmann::json::array();
                for (auto child : children)
                    if (il2cpp::unity::is_valid(child))
                        payload.push_back(visualize(child, il2cpp::unity::get_object_name(child), false));

                j["payload"] = payload;
            } else
                j["payload"] = visualize(go, il2cpp::unity::get_object_name(go), true);
        }

        void destroy_game_object(const nlohmann::json& j) {
            std::vector<float> values;

            auto& payload = j.at("payload");
            auto path = payload.value("path", "");
            auto object_instance_id = get_optional_instance_id(j.at("payload").at("instance_id"));
            auto go = find_game_object(path, object_instance_id);

            if (il2cpp::unity::is_valid(go)) {
                il2cpp::unity::destroy_object(go);
            }
        }

        void set_game_object_active(const nlohmann::json& j) {
            std::vector<float> values;
            auto& payload = j.at("payload");
            auto path = payload.value("path", "");
            auto object_instance_id = get_optional_instance_id(j.at("payload").at("instance_id"));
            auto value = payload.value("value", true);

            auto go = find_game_object(path, object_instance_id);
            if (il2cpp::unity::is_valid(go)) {
                il2cpp::unity::set_active(go, value);
            }
        }

        void get_game_object(const nlohmann::json& j) {
            std::vector<float> values;
            auto id = j.at("id").get<int>();
            nlohmann::json response;
            response["type"] = "response";
            response["id"] = id;
            response["method"] = "get_game_object";

            auto path = j.at("payload").value("path", "");
            auto object_instance_id = get_optional_instance_id(j.at("payload").at("instance_id"));

            if (path.empty()) {
                report_roots(response, false);
            } else {
                report_game_object(response, find_game_object(path, object_instance_id), false);
            }

            send_message(response);
        }

        void get_children(const nlohmann::json& j) {
            std::vector<float> values;
            auto id = j.at("id").get<int>();
            nlohmann::json response;
            response["type"] = "response";
            response["id"] = id;
            response["method"] = "get_children";

            auto path = j.at("payload").value("path", "");
            auto object_instance_id = get_optional_instance_id(j.at("payload").at("instance_id"));

            if (path.empty()) {
                report_roots(response, true);
            } else {
                report_game_object(response, find_game_object(path, object_instance_id), true);
            }

            send_message(response);
        }

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            register_request_handler("get_game_object", get_game_object);
            register_request_handler("get_children", get_children);
            register_request_handler("destroy_game_object", destroy_game_object);
            register_request_handler("set_game_object_active", set_game_object_active);
        });
    } // namespace
} // namespace randomizer::ipc
