#include <uber_states/uber_state_manager.h>

#include <common.h>
#include <constants.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <Common/ext.h>
#include <uber_states/uber_state_helper.h>

#include <csharp_bridge.h>

namespace uber_states
{
    namespace
    {
        BINDING(27760400, app::IUberState*, Moon_UberStateCollection__GetState, (app::UberID* groupID, app::UberID* stateID));
        BINDING(27775392, void, Moon_UberStateController__Apply, (app::IUberState* descriptor, int32_t context));

        void notify_uber_state_change(app::IUberState* uber_state, float prev, float current)
        {
            auto state = get_uber_state_id(uber_state);
            auto group = get_uber_state_group_id(uber_state);
            auto type = resolve_type(uber_state);
            csharp_bridge::on_uber_state_applied(group->fields.m_id, state->fields.m_id, static_cast<uint8_t>(type), prev, current);
        }

        INTERCEPT(27748672, void, Moon_SerializedBooleanUberState__set_Value, (app::SerializedBooleanUberState* this_ptr, bool value)) {
            auto prev = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            Moon_SerializedBooleanUberState__set_Value(this_ptr, value);
            auto current = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            if (prev != current)
                notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        INTERCEPT(27750528, void, Moon_SerializedByteUberState__set_Value, (app::SerializedByteUberState* this_ptr, uint8_t value)) {
            auto prev = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            Moon_SerializedByteUberState__set_Value(this_ptr, value);
            auto current = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            if (prev != current)
                notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        INTERCEPT(27752384, void, Moon_SerializedFloatUberState__set_Value, (app::SerializedFloatUberState* this_ptr, float value)) {
            auto prev = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            Moon_SerializedFloatUberState__set_Value(this_ptr, value);
            auto current = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            if (prev != current)
                notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        INTERCEPT(27754000, void, Moon_SerializedIntUberState__set_Value, (app::SerializedIntUberState* this_ptr, int value)) {
            auto prev = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            Moon_SerializedIntUberState__set_Value(this_ptr, value);
            auto current = il2cpp::invoke<app::Single__Boxed>(this_ptr, "get_GenericValue")->fields;
            if (prev != current)
                notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        float convert_pedestal_state(app::SavePedestalUberState_PedestalState* state)
        {
            auto active = static_cast<int>(state->fields.IsTeleporterActive);
            auto save = static_cast<int>(state->fields.HasGameBeenSaved) << 1;
            return static_cast<float>(save | active);
        }

        BINDING(17923152, app::SavePedestalUberState_PedestalState*, Moon_uberSerializationWisp_SavePedestalUberState__ReadStateFromStore, (app::SavePedestalUberState* this_ptr));

        INTERCEPT(17922816, void, Moon_uberSerializationWisp_SavePedestalUberState__set_HasGameBeenSaved, (app::SavePedestalUberState* this_ptr, bool value)) {
            auto prev = convert_pedestal_state(Moon_uberSerializationWisp_SavePedestalUberState__ReadStateFromStore(this_ptr));
            Moon_uberSerializationWisp_SavePedestalUberState__set_HasGameBeenSaved(this_ptr, value);
            auto current = convert_pedestal_state(Moon_uberSerializationWisp_SavePedestalUberState__ReadStateFromStore(this_ptr));
            if (prev != current)
                notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        INTERCEPT(17922912, void, Moon_uberSerializationWisp_SavePedestalUberState__set_IsTeleporterActive, (app::SavePedestalUberState* this_ptr, bool value)) {
            auto prev = convert_pedestal_state(Moon_uberSerializationWisp_SavePedestalUberState__ReadStateFromStore(this_ptr));
            Moon_uberSerializationWisp_SavePedestalUberState__set_IsTeleporterActive(this_ptr, value);
            auto current = convert_pedestal_state(Moon_uberSerializationWisp_SavePedestalUberState__ReadStateFromStore(this_ptr));
            if (prev != current)
                notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }

        INTERCEPT(17923408, void, Moon_uberSerializationWisp_SavePedestalUberState__Load, (app::SavePedestalUberState* this_ptr, app::UberStateArchive* archive, int32_t storeVersion)) {
            auto prev = convert_pedestal_state(Moon_uberSerializationWisp_SavePedestalUberState__ReadStateFromStore(this_ptr));
            Moon_uberSerializationWisp_SavePedestalUberState__Load(this_ptr, archive, storeVersion);
            auto current = convert_pedestal_state(Moon_uberSerializationWisp_SavePedestalUberState__ReadStateFromStore(this_ptr));
            if (prev != current)
                notify_uber_state_change(reinterpret_cast<app::IUberState*>(this_ptr), prev, current);
        }
    }

    void apply_uber_state_no_notify(app::IUberState* uber_state)
    {
        Moon_UberStateController__Apply(uber_state, 0);
    }

    app::UberID* get_uber_state_id(app::IUberState* uber_state)
    {
        return il2cpp::invoke<app::UberID>(uber_state, "get_ID");
    }

    app::UberID* get_uber_state_group_id(app::IUberState* uber_state)
    {
        auto group = il2cpp::invoke<app::IUberStateGroup>(uber_state, "get_UberStateGroup");
        return il2cpp::invoke<app::UberID>(group, "get_ID");
    }
    
    std::string get_uber_state_name(app::IUberState* uber_state)
    {
        auto csstring = il2cpp::invoke<app::String>(uber_state, "get_Name");
        return convert_csstring(csstring);
    }

    std::string get_uber_state_group_name(app::IUberState* uber_state)
    {
        auto group = il2cpp::invoke<app::IUberStateGroup>(uber_state, "get_UberStateGroup");
        auto csstring = il2cpp::invoke<app::String>(group, "get_GroupName");
        return convert_csstring(csstring);
    }

    app::UberID create_uber_id(int id)
    {
        app::UberID uber_id;
        uber_id.monitor = nullptr;
        uber_id.klass = reinterpret_cast<app::UberID__Class*>(il2cpp::get_class("Moon", "UberID"));
        uber_id.fields.m_id = id;
        return uber_id;
    }

    app::IUberState* get_uber_state(int group_id, int state_id)
    {
        auto group = create_uber_id(group_id);
        auto state = create_uber_id(state_id);
        return get_uber_state(group, state);
    }

    app::IUberState* get_uber_state(app::UberID& group_id, app::UberID& state_id)
    {
        return Moon_UberStateCollection__GetState(&group_id, &state_id);
    }

    constexpr bool check_set = false;
    void set_uber_state_value(app::IUberState* uber_state, float value)
    {
        if (il2cpp::is_assignable(uber_state, "Moon", "IGenericUberState"))
        {
            auto actual_value = il2cpp::box_value<app::Single__Boxed>(il2cpp::get_class("System", "Single"), value);
            il2cpp::invoke<>(uber_state, "set_GenericValue", actual_value);
            if (check_set)
            {
                auto value = il2cpp::invoke<app::Single__Boxed>(uber_state, "get_GenericValue")->fields;
                trace(MessageType::Info, 4, "uber_state", format("value set to %f", value));
            }
        }
        else if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState"))
        {
            auto ivalue = static_cast<uint32_t>(value);
            auto klass = il2cpp::get_class("System", "Boolean");
            bool is_teleporter_active = static_cast<bool>(ivalue & 1);
            bool has_been_saved = static_cast<bool>((ivalue >> 1) & 1);
            auto actual_value = il2cpp::box_value<app::Single__Boxed>(klass, value);
            il2cpp::invoke<>(uber_state, "set_IsTeleporterActive", actual_value);
            actual_value = il2cpp::box_value<app::Single__Boxed>(klass, value);
            il2cpp::invoke<>(uber_state, "set_HasGameBeenSaved", actual_value);
        }
        else
        {
            auto state_id = il2cpp::invoke<app::UberID>(uber_state, "get_ID")->fields.m_id;
            auto group = il2cpp::invoke<app::IUberStateGroup>(uber_state, "get_UberStateGroup");
            auto group_id = il2cpp::invoke<app::UberID>(group, "get_ID")->fields.m_id;
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
            auto state_id = il2cpp::invoke<app::UberID>(uber_state, "get_ID")->fields.m_id;
            auto group = il2cpp::invoke<app::IUberStateGroup>(uber_state, "get_UberStateGroup");
            auto group_id = il2cpp::invoke<app::UberID>(group, "get_ID")->fields.m_id;
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
}
