#include <uber_states/uber_state_manager.h>

#include <common.h>
#include <constants.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <Common/ext.h>

namespace uber_states
{
    namespace
    {
        BINDING(27760400, app::IUberState*, Moon_UberStateCollection__GetState, (app::UberID* groupID, app::UberID* stateID));
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

    app::IUberState* get_uber_state(app::UberID& group_id, app::UberID& state_id)
    {
        return Moon_UberStateCollection__GetState(&group_id, &state_id);
    }

    void set_uber_state_value(app::IUberState* uber_state, float value)
    {
        if (il2cpp::is_assignable(uber_state, "Moon", "IGenericUberState"))
        {
            auto actual_value = il2cpp::box_value<app::Single__Boxed*>(il2cpp::get_class("System", "Single"), value);
            il2cpp::invoke<>(uber_state, "set_GenericValue", actual_value);
        }
        else if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState"))
        {
            auto ivalue = static_cast<uint32_t>(value);
            auto klass = il2cpp::get_class("System", "Boolean");
            bool has_been_saved = static_cast<bool>(ivalue & 1);
            bool is_teleporter_active = static_cast<bool>((ivalue >> 1) & 1);
            auto actual_value = il2cpp::box_value<app::Single__Boxed*>(klass, value);
            il2cpp::invoke<>(uber_state, "set_HasGameBeenSaved", actual_value);
            actual_value = il2cpp::box_value<app::Single__Boxed*>(klass, value);
            il2cpp::invoke<>(uber_state, "set_IsTeleporterActive", actual_value);
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
            auto has_been_saved = static_cast<int>(il2cpp::invoke<app::Boolean__Boxed>(uber_state, "get_HasGameBeenSaved")->fields);
            auto is_teleporter_active = static_cast<int>(il2cpp::invoke<app::Boolean__Boxed>(uber_state, "get_IsTeleporterActive")->fields);
            uint32_t value = (is_teleporter_active << 1) | has_been_saved;
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
}
