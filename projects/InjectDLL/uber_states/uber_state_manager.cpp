#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <constants.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Common/ext.h>
#include <uber_states/uber_state_helper.h>

#include <csharp_bridge.h>

using namespace modloader;

namespace uber_states
{
    namespace
    {
        STATIC_IL2CPP_BINDING(Moon, UberStateCollection, app::IUberState*, GetState, (app::UberID* groupID, app::UberID* stateID));
        STATIC_IL2CPP_BINDING(Moon, UberStateCollection, void, Add, (app::UberID* groupID, app::UberStateCollectionGroup* group));

        NAMED_IL2CPP_BINDING(Moon, UberStateCollectionGroup, void, .ctor, ctor, (app::UberStateCollectionGroup* this_ptr));
        IL2CPP_BINDING(Moon, UberStateCollectionGroup, void, Add, (app::UberStateCollectionGroup* this_ptr, app::UberID* state_id, app::IUberState* state));

        STATIC_IL2CPP_BINDING_OVERLOAD(Moon, UberStateController, void, Apply, (app::IUberState* descriptor, int32_t context), (Moon:IUberState, Moon:UberStateApplyContext));

        app::UberID* create_uber_id_ptr(int id)
        {
            auto uber_id = il2cpp::create_object<app::UberID>("Moon", "UberID");
            uber_id->fields.m_id = id;
            return uber_id;
        }

        template<typename T, typename V>
        app::IUberState* add_state(std::string klass, std::string group_name, int group_id, std::string state_name, int state_id, V default_value)
        {
            auto state = il2cpp::unity::create_scriptable_object<T>("Moon", klass);

            state->fields.Group = il2cpp::unity::create_scriptable_object<app::UberStateGroup>("Moon", "UberStateGroup");
            state->fields.Group->fields._.m_id = create_uber_id_ptr(group_id);
            il2cpp::invoke(state->fields.Group, "set_name", il2cpp::string_new(group_name.c_str()));

            state->fields._.m_id = create_uber_id_ptr(state_id);
            il2cpp::invoke(state, "set_name", il2cpp::string_new(state_name.c_str()));

            state->fields.DefaultValue = default_value;
            state->fields.m_value = default_value;
            state->fields.NamedValues = nullptr;
            state->fields._VolitileGenericOverrideValue_k__BackingField.has_value = false;
            return reinterpret_cast<app::IUberState*>(state);
        }

        bool initialized = false;
        NAMED_IL2CPP_INTERCEPT(Moon, UberStateCollection, void, .ctor, ctor, (app::UberStateCollection* this_ptr)) {
            UberStateCollection::ctor(this_ptr);
            initialized = false;
        }

        IL2CPP_INTERCEPT(Moon, UberStateCollection, void, PrepareRuntimeDataType, (app::UberStateCollection* this_ptr)) {
            if (!initialized)
            {
                std::vector<app::IUberState*> states = {
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "sword", app::AbilityType__Enum_Sword, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "double_jump", app::AbilityType__Enum_DoubleJump, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "regenerate", app::AbilityType__Enum_MeditateSpell, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "bow", app::AbilityType__Enum_Bow, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "dash", app::AbilityType__Enum_DashNew, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "bash", app::AbilityType__Enum_Bash, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "grapple", app::AbilityType__Enum_SpiritLeash, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "water_dash", app::AbilityType__Enum_WaterDash, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "flash", app::AbilityType__Enum_GlowSpell, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "grenade", app::AbilityType__Enum_Grenade, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "burrow", app::AbilityType__Enum_Digging, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "launch", app::AbilityType__Enum_ChargeJump, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "ancestral_light", app::AbilityType__Enum_DamageUpgradeA, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::TREE_GROUP_NAME, constants::TREE_GROUP_ID, "ancestral_light_2", app::AbilityType__Enum_DamageUpgradeB, false),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::OPHER_WEAPON_GROUP_NAME, constants::OPHER_WEAPON_GROUP_ID, "test1", 112, false),

                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::WEAPON_UPGRADE_GROUP_NAME, constants::WEAPON_UPGRADE, "Rapid Smash", 0, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::WEAPON_UPGRADE_GROUP_NAME, constants::WEAPON_UPGRADE, "Rapid Sword", 1, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::WEAPON_UPGRADE_GROUP_NAME, constants::WEAPON_UPGRADE, "Blaze Efficiency", 2, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::WEAPON_UPGRADE_GROUP_NAME, constants::WEAPON_UPGRADE, "Spike Efficiency", 3, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::WEAPON_UPGRADE_GROUP_NAME, constants::WEAPON_UPGRADE, "Star Efficiency", 4, 0),
                    add_state<app::SerializedByteUberState>("SerializedByteUberState", constants::WEAPON_UPGRADE_GROUP_NAME, constants::WEAPON_UPGRADE, "Sentry Efficiency", 5, 0),

                    add_state<app::SerializedIntUberState>("SerializedIntUberState", constants::RANDO_STATS_GROUP_NAME, constants::RANDO_STATS_GROUP_ID, "keystones_collected", 0, 0),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_CONFIG_GROUP_NAME, constants::RANDO_CONFIG_GROUP_ID, "glades_tp_fix", 0, false),
                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::RANDO_CONFIG_GROUP_NAME, constants::RANDO_CONFIG_GROUP_ID, "prevent_map_reactivate_tps", 1, false),

                    add_state<app::SerializedBooleanUberState>("SerializedBooleanUberState", constants::MAP_FILTER_GROUP_NAME, constants::MAP_FILTER_GROUP_ID, "show_spoiler", 70, false),
                };

                for (auto state : states)
                    il2cpp::invoke(this_ptr->fields.m_descriptors, "Add", state);

                initialized = true;
            }

            UberStateCollection::PrepareRuntimeDataType(this_ptr);
            trace(MessageType::Info, 5, "initialize", "Custom uber states initialized.");
        }

        void notify_uber_state_change(app::IUberState* uber_state, float prev, float current)
        {
            auto state = get_uber_state_id(uber_state);
            auto group = get_uber_state_group_id(uber_state);
            auto type = resolve_type(uber_state);
            csharp_bridge::on_uber_state_applied(group->fields.m_id, state->fields.m_id, static_cast<uint8_t>(type), prev, current);
        }

        IL2CPP_INTERCEPT(Moon, SerializedBooleanUberState, void, set_Value, (app::SerializedBooleanUberState* this_ptr, bool value)) {
            auto prev = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            SerializedBooleanUberState::set_Value(this_ptr, value);
            auto current = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        IL2CPP_INTERCEPT(Moon, SerializedByteUberState, void, set_Value, (app::SerializedByteUberState* this_ptr, uint8_t value)) {
            auto prev = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            SerializedByteUberState::set_Value(this_ptr, value);
            auto current = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        IL2CPP_INTERCEPT(Moon, SerializedFloatUberState, void, set_Value, (app::SerializedFloatUberState* this_ptr, float value)) {
            auto prev = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            SerializedFloatUberState::set_Value(this_ptr, value);
            auto current = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        IL2CPP_INTERCEPT(Moon, SerializedIntUberState, void, set_Value, (app::SerializedIntUberState* this_ptr, int value)) {
            auto prev = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            SerializedIntUberState::set_Value(this_ptr, value);
            auto current = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        float convert_pedestal_state(app::SavePedestalUberState_PedestalState* state)
        {
            if (state == 0)
                return 0;

            auto active = static_cast<int>(state->fields.IsTeleporterActive != 0);
            auto save = static_cast<int>(state->fields.HasGameBeenSaved != 0) << 1;
            return static_cast<float>(save | active);
        }

        IL2CPP_BINDING(Moon.uberSerializationWisp, SavePedestalUberState, app::SavePedestalUberState_PedestalState*, ReadStateFromStore, (app::SavePedestalUberState* this_ptr));

        IL2CPP_INTERCEPT(Moon.uberSerializationWisp, SavePedestalUberState, void, set_HasGameBeenSaved, (app::SavePedestalUberState* this_ptr, bool value)) {
            auto prev = convert_pedestal_state(SavePedestalUberState::ReadStateFromStore(this_ptr));
            SavePedestalUberState::set_HasGameBeenSaved(this_ptr, value);
            auto current = convert_pedestal_state(SavePedestalUberState::ReadStateFromStore(this_ptr));
            notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        IL2CPP_INTERCEPT(Moon.uberSerializationWisp, SavePedestalUberState, void, set_IsTeleporterActive, (app::SavePedestalUberState* this_ptr, bool value)) {
            auto prev = convert_pedestal_state(SavePedestalUberState::ReadStateFromStore(this_ptr));
            SavePedestalUberState::set_IsTeleporterActive(this_ptr, value);
            auto current = convert_pedestal_state(SavePedestalUberState::ReadStateFromStore(this_ptr));
            notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }
    }

    void apply_uber_state_no_notify(app::IUberState* uber_state)
    {
        UberStateController::Apply(uber_state, 0);
        //il2cpp::invoke(il2cpp::get_class<app::UberStateController__Class>("Moon", "UberStateController")
        //    ->static_fields->s_instance, "Apply", uber_state, 0);
    }

    app::UberID* get_uber_state_id(app::IUberState* uber_state) {
        return il2cpp::invoke<app::UberID>(uber_state, "get_StateID");
    }

    app::UberID* get_uber_state_group_id(app::IUberState* uber_state) {
        return il2cpp::invoke<app::UberID>(uber_state, "get_GroupID");
    }
    
    std::string get_uber_state_name(app::IUberState* uber_state) {
        auto csstring = il2cpp::invoke<app::String>(uber_state, "get_Name");
        return il2cpp::convert_csstring(csstring);
    }

    std::string get_uber_state_group_name(app::IUberState* uber_state) {
        auto group = il2cpp::invoke<app::IUberStateGroup>(uber_state, "get_UberStateGroup");
        auto csstring = il2cpp::invoke<app::String>(group, "get_GroupName");
        return il2cpp::convert_csstring(csstring);
    }

    std::string tostring(app::IUberState* uber_state) {
      auto str = new std::string(format("%d|%d // %s.%s = %f",
        get_uber_state_group_id(uber_state)->fields.m_id, 
        get_uber_state_id(uber_state)->fields.m_id,
        get_uber_state_group_name(uber_state),
        get_uber_state_name(uber_state),
        get_uber_state_value(uber_state)));
      return *str;
    }

    app::UberID create_uber_id(int id)
    {
        app::UberID uber_id;
        uber_id.monitor = nullptr;
        uber_id.klass = reinterpret_cast<app::UberID__Class*>(il2cpp::get_class("Moon", "UberID"));
        uber_id.fields.m_id = id;
        return uber_id;
    }

    app::IUberState* get_uber_state_untyped(app::UberID& group_id, app::UberID& state_id)
    {
        auto state = UberStateCollection::GetState(&group_id, &state_id);
        if (state == nullptr)
            trace(MessageType::Error, 3, "uber_state", format("unable to find uber_state %d : %d.", group_id.fields.m_id, state_id.fields.m_id));

        return state;
    }

    constexpr bool check_set = false;
    void set_uber_state_value(app::IUberState* uber_state, float value)
    {
        if (il2cpp::is_assignable(uber_state, "Moon", "IGenericUberState"))
            il2cpp::invoke_virtual<>(uber_state, il2cpp::get_class<>("Moon", "IGenericUberState"), "set_GenericValue", &value);
        else if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState"))
        {
            auto ivalue = static_cast<uint8_t>(value);
            bool is_teleporter_active = static_cast<bool>(ivalue & 1);
            bool has_been_saved = static_cast<bool>((ivalue >> 1) & 1);
            il2cpp::invoke<>(uber_state, "set_IsTeleporterActive", &is_teleporter_active);
            il2cpp::invoke<>(uber_state, "set_HasGameBeenSaved", &has_been_saved);
        }
        else
        {
            auto state_id = il2cpp::invoke<app::UberID>(uber_state, "get_StateID")->fields.m_id;
            auto group_id = il2cpp::invoke<app::UberID>(uber_state, "get_GroupID")->fields.m_id;
            trace(MessageType::Warning, 2, "uber_state",
                format("uber state (%d, %d) does not implement IGenericUberState", state_id, group_id));
        }
    }

    float get_uber_state_value(app::IUberState* uber_state)
    {
        if (il2cpp::is_assignable(uber_state, "Moon", "IGenericUberState"))
            return il2cpp::invoke<app::Single__Boxed>(uber_state, "get_GenericValue")->fields;
        else if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState"))
        {
            auto is_teleporter_active = static_cast<int>(il2cpp::invoke<app::Boolean__Boxed>(uber_state, "get_IsTeleporterActive")->fields);
            auto has_been_saved = static_cast<int>(il2cpp::invoke<app::Boolean__Boxed>(uber_state, "get_HasGameBeenSaved")->fields);
            uint32_t value = is_teleporter_active | (has_been_saved << 1);
            return static_cast<float>(value);
        }
        else
        {
            auto state_id = il2cpp::invoke<app::UberID>(uber_state, "get_StateID")->fields.m_id;
            auto group_id = il2cpp::invoke<app::UberID>(uber_state, "get_GroupID")->fields.m_id;
            trace(MessageType::Warning, 2, "uber_state",
                format("uber state (%d, %d) does not implement IGenericUberState", state_id, group_id));
            return 0.f;
        }
    }

    INJECT_C_DLLEXPORT void set_uber_state_value(int group, int state, float value)
    {
        auto group_id = create_uber_id(group);
        auto state_id = create_uber_id(state);
        auto uber_state = get_uber_state(group_id, state_id);
        if (uber_state != nullptr)
            set_uber_state_value(uber_state, value);
        else
            trace(MessageType::Warning, 2, "uber_state", format("uber state (%d, %d) not found", group, state));
    }

    INJECT_C_DLLEXPORT float get_uber_state_value(int group, int state)
    {
        auto group_id = create_uber_id(group);
        auto state_id = create_uber_id(state);
        auto uber_state = get_uber_state(group_id, state_id);
        if (uber_state != nullptr)
            return get_uber_state_value(uber_state);
        else
        {
            trace(MessageType::Warning, 2, "uber_state", format("uber state (%d, %d) not found", group, state));
            return 0.f;
        }
    }

    INJECT_C_DLLEXPORT int get_uber_state_name(int group, int state, char* buffer, int len)
    {
        auto group_id = create_uber_id(group);
        auto state_id = create_uber_id(state);
        auto uber_state = get_uber_state(group_id, state_id);
        auto str = get_uber_state_name(uber_state);
        strcpy_s(buffer, len, str.c_str());
        return str.size();
    }

    INJECT_C_DLLEXPORT int get_uber_state_group_name(int group, int state, char* buffer, int len)
    {
        auto group_id = create_uber_id(group);
        auto state_id = create_uber_id(state);
        auto uber_state = get_uber_state(group_id, state_id);
        auto str = get_uber_state_group_name(uber_state);
        strcpy_s(buffer, len, str.c_str());
        return str.size();
    }

    INJECT_C_DLLEXPORT void refresh_uber_state(int group_id, int id) {
      auto uber_state = uber_states::get_uber_state(group_id, id);
      uber_states::apply_uber_state_no_notify(uber_state);
    }
}
