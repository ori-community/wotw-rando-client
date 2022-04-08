#include <features/scenes/scene_load.h>
#include <randomizer/ipc/ipc.h>
#include <utils/json_serializers.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace ipc
{
    namespace
    {
        std::string_view get_klass_name(void* klass)
        {
            auto cast = reinterpret_cast<Il2CppClass*>(klass);
            if (std::string_view(cast->namespaze).empty())
                return cast->name;
            else
                return format("%s.%s", cast->namespaze, cast->name);
        }

        using visualizer = void(*)(nlohmann::json& j, void* obj, bool verbose);
        extern nlohmann::json visualize(void* obj, std::string name, bool verbose);

        template<typename T>
        nlohmann::json create_variable(std::string_view name, std::string_view type, T value)
        {
            return {
                { "name", name },
                { "type", type },
                { "value", value }
            };
        }

        void visualize_uber_state_condition(nlohmann::json& j, void* obj, bool verbose)
        {
            auto cast = reinterpret_cast<app::UberStateCondition*>(obj);
            auto state = il2cpp::invoke<app::Boolean__Boxed>(cast->fields.Descriptor, "CanResolve", nullptr)->fields
                ? il2cpp::invoke<app::IUberState>(cast->fields.Descriptor, "Resolve", nullptr)
                : nullptr;
            j["value"] = nlohmann::json::array({
                create_variable("condition_type", "scalar", cast->fields.m_conditionClassID),
                visualize(state, "descriptor", verbose),
                visualize(cast->fields.Data, "data", verbose),
            });
        }

        void visualize_condition_uber_state(nlohmann::json& j, void* obj, bool verbose)
        {
            auto cast = reinterpret_cast<app::ConditionUberState*>(obj);
            auto descriptors = nlohmann::json::array();
            for (auto i = 0; i < cast->fields.Descriptors->fields._size; ++i)
            {
                auto descriptor = cast->fields.Descriptors->fields._items->vector[i];
                descriptors.push_back(visualize(descriptor, std::to_string(i), verbose));
            }

            j["value"] = nlohmann::json::array({
                create_variable("check_mode", "scalar", cast->fields.CheckMode),
                create_variable("group_id", "scalar", cast->fields.Group->fields._.m_id->fields.m_id),
                create_variable("state_id", "scalar", cast->fields._.m_id->fields.m_id),
                create_variable("descriptors", "array", descriptors),
            });
        }

        void visualize_activate_based_on_condition(nlohmann::json& j, void* obj, bool verbose)
        {
            auto cast = reinterpret_cast<app::ActivateBasedOnCondition*>(obj);
            auto condition_path = il2cpp::unity::get_path(cast->fields.Condition);
            auto target = il2cpp::invoke<app::Boolean__Boxed>(cast->fields.MoonTarget, "CanResolve", nullptr)->fields
                ? il2cpp::invoke<app::GameObject>(cast->fields.MoonTarget, "Resolve", nullptr)
                : nullptr;
            auto moon_target_path = il2cpp::unity::get_path(target);
            auto target_path = il2cpp::unity::get_path(cast->fields.Target);
            j["value"] = nlohmann::json::array({
                create_variable("activate", "scalar", cast->fields.Activate),
                create_variable("condition", "game_object", condition_path),
                create_variable("moon_target", "game_object", moon_target_path),
                create_variable("target", "game_object", target_path)
            });
        }

        void visualize_sein_ability_condition(nlohmann::json& j, void* obj, bool verbose)
        {
            auto cast = reinterpret_cast<app::SeinAbilityCondition*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("ability", "scalar", cast->fields.Ability)
            });
        }

        void visualize_has_ability_condition(nlohmann::json& j, void* obj, bool verbose)
        {
            auto cast = reinterpret_cast<app::HasAbilityCondition*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("ability", "scalar", cast->fields.AbilityType)
            });
        }

        void visualize_uber_state_condition_wrapper(nlohmann::json& j, void* obj, bool verbose)
        {
            auto cast = reinterpret_cast<app::UberStateConditionWrapper*>(obj);
            j["value"] = nlohmann::json::array({
                visualize(cast->fields.Condition, "condition", verbose),
                create_variable("invert", "scalar", cast->fields.Invert),
            });
        }

        void visualize_setup_state(nlohmann::json& j, void* obj, bool verbose)
        {
            auto cast = reinterpret_cast<app::SetupState*>(obj);
            j["value"] = nlohmann::json::array({
                create_variable("state_guid", "scalar", cast->fields.StateGUID),
                create_variable("state_name", "scalar", il2cpp::convert_csstring(cast->fields.StateName))
            });
        }

        void visualize_setup_state_modifier(nlohmann::json& j, void* obj, bool verbose)
        {
            auto ssm = reinterpret_cast<app::SetupStateModifier*>(obj);
            auto game_object = il2cpp::invoke<app::Boolean__Boxed>(ssm->fields.Target, "CanResolve", nullptr)->fields
                ? il2cpp::invoke<app::GameObject>(ssm->fields.Target, "Resolve", nullptr)
                : nullptr;
            j["value"] = nlohmann::json::array({
                create_variable("modifier_guid", "scalar", ssm->fields.ModifierGUID),
                create_variable("game_object", "game_object", il2cpp::unity::get_path(game_object))
            });
        }

        void visualize_new_setup_state_controller(nlohmann::json& j, void* obj, bool verbose)
        {
            auto nssc = reinterpret_cast<app::NewSetupStateController*>(obj);
            if (verbose)
            {
                auto modifiers = nlohmann::json::array();
                for (auto i = 0; i < nssc->fields.StateHolder->fields.Modifiers->fields._size; ++i)
                {
                    auto modifier = nssc->fields.StateHolder->fields.Modifiers->fields._items->vector[i];
                    modifiers.push_back(visualize(modifier, std::to_string(i), verbose));
                }

                auto states = nlohmann::json::array();
                for (auto i = 0; i < nssc->fields.StateHolder->fields.States->fields._size; ++i)
                {
                    auto state = nssc->fields.StateHolder->fields.States->fields._items->vector[i];
                    states.push_back(visualize(state, std::to_string(i), verbose));
                }

                app::IUberState* state;
                auto state_ref = nssc->fields.StateHolder->fields._._.State;
                if (il2cpp::unity::is_valid(state_ref))
                    state = il2cpp::invoke<app::Boolean__Boxed>(state_ref, "CanResolve", nullptr)->fields
                        ? il2cpp::invoke<app::IUberState>(state_ref, "Resolve", nullptr)
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

        IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_position, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Quaternion, get_rotation, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_localPosition, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Quaternion, get_localRotation, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_localScale, (app::Transform* this_ptr));
        IL2CPP_BINDING(UnityEngine, Quaternion, app::Vector3, get_eulerAngles, (app::Quaternion__Boxed* this_ptr));
        void visualize_transform(nlohmann::json& j, void* obj, bool verbose)
        {
            auto transform = reinterpret_cast<app::Transform*>(obj);
            if (verbose)
            {
                auto postion = Transform::get_position(transform);
                auto quat = Transform::get_rotation(transform);
                auto boxed = il2cpp::box_value<app::Quaternion__Boxed>(il2cpp::get_class("UnityEngine", "Quaternion"), quat);
                auto rotation = Quaternion::get_eulerAngles(boxed);
                auto local_position = Transform::get_localPosition(transform);
                quat = Transform::get_localRotation(transform);
                boxed = il2cpp::box_value<app::Quaternion__Boxed>(il2cpp::get_class("UnityEngine", "Quaternion"), quat);
                auto local_rotation = Quaternion::get_eulerAngles(boxed);
                auto local_scale = Transform::get_localScale(transform);

                j["value"] = {
                        {"world_position", {
                                { "x", postion.x },
                                { "y", postion.y },
                                { "z", postion.z },
                        }},
                        {"world_rotation", {
                                { "x", rotation.x },
                                { "y", rotation.y },
                                { "z", rotation.z },
                        }},
                        {"local_position", {
                                { "x", local_position.x },
                                { "y", local_position.y },
                                { "z", local_position.z },
                        }},
                        {"local_rotation", {
                                {"x", local_rotation.x},
                                {"y", local_rotation.y},
                                {"z", local_rotation.z},
                        }},
                        {"local_scale", {
                                {"x", local_scale.x},
                                {"y", local_scale.y},
                                {"z", local_scale.z},
                        }},
                };
            }
            else
            {
                auto postion = Transform::get_position(transform);
                j["value"] = {
                        {"world_position", {
                                { "x", postion.x },
                                { "y", postion.y },
                                { "z", postion.z },
                        }}
                };
            }
        }

        IL2CPP_BINDING(UnityEngine, Object, int, GetInstanceID, (app::GameObject* this_ptr));
        void visualize_game_object(nlohmann::json& j, void* obj, bool verbose)
        {
            auto go = reinterpret_cast<app::GameObject*>(obj);
            auto id = Object::GetInstanceID(go);
            auto layer = il2cpp::invoke<app::Int32__Boxed>(go, "get_layer")->fields;
            j["instance_id"] = id;
            j["path"] = il2cpp::unity::get_path(go);
            if (verbose)
            {
                nlohmann::json arr;
                auto components = il2cpp::unity::get_components(go);
                for (auto component : components)
                    arr.push_back(visualize(component, "", verbose));

                j["value"] = nlohmann::json::array({
                    create_variable("layer", "scalar", layer),
                    create_variable("components", "components", arr),
                });
            }
            else
            {
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

            //{ "UberStateBoolCondition", visualize_uber_state_bool_condition },
            //{ "UberStateValueCondition", visualize_uber_state_value_condition },
            { "UberStateCondition", visualize_uber_state_condition },
            
            //{ "DesiredUberStateComposite", visualize_desired_uber_state_composite },
            //{ "DesiredUberStateBool", visualize_desired_bool_uber_state },
            //{ "DesiredUberStateFloat", visualize_desired_float_uber_state },
            //{ "DesiredUberStateByte", visualize_desired_byte_uber_state },
            //{ "DesiredUberStateInt", visualize_desired_int_uber_state },
            
            //{ "Moon.SerializedBooleanUberState", visualize_serialized_uber_state },
            //{ "Moon.SerializedFloatUberState", visualize_serialized_uber_state },
            //{ "Moon.SerializedByteUberState", visualize_serialized_uber_state },
            //{ "Moon.SerializedIntUberState", visualize_serialized_uber_state },
            { "Moon.ConditionUberState", visualize_condition_uber_state },
            
            //{ "SceneRoot", visualize_scene_root },
            { "UnityEngine.GameObject", visualize_game_object },
            { "UnityEngine.Transform", visualize_transform },
            //{ "UnityEngine.Mesh", visualize_unity_mesh },
            //{ "UnityEngine.MeshFilter", visualize_unity_mesh_filter },
            //{ "UnityEngine.Renderer", visualize_unity_renderer },
            
            //{ "Respawner", visualize_respawner },
        };

        nlohmann::json visualize(void* obj, std::string name, bool verbose)
        {
            nlohmann::json j;
            if (!name.empty())
                j["name"] = name;

            if (!il2cpp::unity::is_valid(obj))
            {
                j["type"] = "nullptr";
                j["value"] = "invalid reference";
                return j;
            }

            auto cast = reinterpret_cast<Il2CppObject*>(obj);
            auto klass = cast->klass;
            while (klass != nullptr)
            {
                std::string full_name = std::string(get_klass_name(klass));
                auto it = visualizers.find(full_name);
                if (it != visualizers.end())
                {
                    j["type"] = get_klass_name(klass);
                    it->second(j, obj, verbose);
                    return j;
                }

                klass = klass->parent;
            }

            j["type"] = get_klass_name(cast->klass);
            j["value"] = nullptr;
            return j;
        }

        void report_roots(nlohmann::json& j, bool children)
        {
            auto game_objects = scenes::get_roots_from_active();
            if (children)
            {
                auto payload = nlohmann::json::array();
                for (auto game_object : game_objects)
                    payload.push_back(visualize(game_object, il2cpp::unity::get_object_name(game_object), false));

                j["payload"] = payload;
            }
            else
            {
                j["payload"] = {
                    { "path", "" },
                    { "children_count", game_objects.size() },
                };
            }
        }

        void report_game_object(nlohmann::json& j, std::string path, bool children)
        {
            auto game_object = scenes::get_game_object(path);
            if (children)
            {
                auto children = il2cpp::unity::get_children(game_object);
                std::sort(children.begin(), children.end(), [](auto a, auto b) {
                    auto name_a = il2cpp::unity::get_object_name(a);
                    auto name_b = il2cpp::unity::get_object_name(b);
                    return name_a.compare(name_b);
                });
                auto payload = nlohmann::json::array();
                for (auto child : children)
                    payload.push_back(visualize(child, il2cpp::unity::get_object_name(child), false));

                j["payload"] = payload;
            }
            else
                j["payload"] = visualize(game_object, il2cpp::unity::get_object_name(game_object), true);
        }

        void get_game_object(nlohmann::json& j)
        {
            std::vector<float> values;
            auto id = j.at("id").get<int>();
            nlohmann::json response;
            response["type"] = "response";
            response["id"] = id;
            response["method"] = "get_game_object";
            auto path = j.at("payload").value("path", "");
            if (path == "")
                report_roots(response, false);
            else
                report_game_object(response, path, false);

            ipc::send_message(response.dump());
        }

        void get_children(nlohmann::json& j)
        {
            std::vector<float> values;
            auto id = j.at("id").get<int>();
            nlohmann::json response;
            response["type"] = "response";
            response["id"] = id;
            response["method"] = "get_children";
            auto path = j.at("payload").value("path", "");
            if (path == "")
                report_roots(response, true);
            else
                report_game_object(response, path, true);

            ipc::send_message(response.dump());
        }

        void initialize()
        {
            register_request_handler("get_game_object", get_game_object);
            register_request_handler("get_children", get_children);
        }

        CALL_ON_INIT(initialize);
    }
}
