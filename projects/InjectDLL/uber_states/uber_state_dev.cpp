#include <interception_macros.h>
#include <common.h>
#include <dll_main.h>
#include <il2cpp_helpers.h>
#include <dev/dev_commands.h>
#include <dev/object_visualizer.h>
#include <Common/ext.h>

#include <array>

namespace
{
    BINDING(27760400, app::IUberState*, Moon_UberStateCollection__GetState, (app::UberID* groupID, app::UberID* stateID));
    BINDING(27775392, void, Moon_UberStateController__Apply, (app::IUberState* descriptor, int context));
    BINDING(27776080, bool, Moon_UberStateController__ApplierIsAffectedByUberState, (app::IUberStateApplier* applier, app::IUberState* descriptor));

    STATIC_CLASS(71605752, app::UberID__Class*, uber_id_class);
    STATIC_CLASS(71444600, app::UberStateController__Class*, uber_state_controller);

    STATIC_CLASS(71453760, Il2CppClass*, bool_uber_state);
    STATIC_CLASS(71829456, Il2CppClass*, byte_uber_state);
    STATIC_CLASS(71589912, Il2CppClass*, condition_uber_state);
    STATIC_CLASS(71833960, Il2CppClass*, float_uber_state);
    STATIC_CLASS(71549856, Il2CppClass*, int_uber_state);
    STATIC_CLASS(71915248, Il2CppClass*, serialized_bool_uber_state);
    STATIC_CLASS(71797832, Il2CppClass*, serialized_byte_uber_state);
    STATIC_CLASS(71349376, Il2CppClass*, serialized_float_uber_state);
    STATIC_CLASS(71349576, Il2CppClass*, serialized_int_uber_state);

    BINDING(27727008, void, Moon_BooleanUberState__set_GenericValue, (app::IUberState* this_ptr, float value));
    BINDING(27728080, void, Moon_ByteUberState__set_GenericValue, (app::IUberState* this_ptr, float value));
    BINDING(3006464, void, Moon_ConditionUberState__set_GenericValue, (app::IUberState* this_ptr, float value));
    BINDING(27736384, void, Moon_FloatUberState__set_GenericValue, (app::IUberState* this_ptr, float value));
    BINDING(27740144, void, Moon_IntUberState__set_GenericValue, (app::IUberState* this_ptr, float value));
    BINDING(27748912, void, Moon_SerializedBooleanUberState__set_GenericValue, (app::IUberState* this_ptr, float value));
    BINDING(27750768, void, Moon_SerializedByteUberState__set_GenericValue, (app::IUberState* this_ptr, float value));
    BINDING(27752608, void, Moon_SerializedFloatUberState__set_GenericValue, (app::IUberState* this_ptr, float value));
    BINDING(27754240, void, Moon_SerializedIntUberState__set_GenericValue, (app::IUberState* this_ptr, float value));

    std::array<std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>, 9> generic_sets;

    void initialize_generic_sets()
    {
        generic_sets = {
            std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>{ serialized_bool_uber_state, Moon_SerializedBooleanUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>{ serialized_byte_uber_state, Moon_SerializedByteUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>{ serialized_float_uber_state, Moon_SerializedFloatUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>{ serialized_int_uber_state, Moon_SerializedIntUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>{ bool_uber_state, Moon_BooleanUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>{ byte_uber_state, Moon_ByteUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>{ condition_uber_state, Moon_ConditionUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>{ float_uber_state, Moon_FloatUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(app::IUberState* this_ptr, float value)>{ int_uber_state, Moon_IntUberState__set_GenericValue },
        };
    }

    CALL_ON_INIT(initialize_generic_sets);

    // TODO: Figure out a way to resolve the vtable here by interface and use IGenericUberState.
    bool set_uber_state(app::IUberState* uber_state, float value)
    {
        //auto actual_value = il2cpp::create_object<app::Single>("System", "Single");;
        //actual_value->m_value = value;
        //il2cpp::invoke_virtual(uber_state, il2cpp::get_class("Moon", "IGenericUberState"), "set_GenericValue", { actual_value });
        //return true;
        for (auto const& p : generic_sets)
        {
            auto klass = std::get<0>(p);
            auto func = std::get<1>(p);

            // Some classes may not be initialized
            if (klass == nullptr)
                continue;

            if (*klass == reinterpret_cast<Il2CppClass*>(uber_state->klass))
            {
                func(uber_state, value);
                return true;
            }
        }

        return false;
    }

    app::UberID create_id(int id)
    {
        app::UberID uber_id;
        uber_id.monitor = nullptr;
        uber_id.klass = *uber_id_class;
        uber_id.fields.m_id = id;
        return uber_id;
    }

    bool find_state_group(std::vector<dev::CommandParam> const& params, int& state, int& group)
    {
        auto state_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "state"; });
        auto group_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "group"; });
        if (state_it == params.end())
        {
            dev::console_send("state parameter not found");
            return false;
        }

        if (group_it == params.end())
        {
            dev::console_send("group parameter not found");
            return false;
        }

        if (!dev::try_get_int(*state_it, state))
        {
            dev::console_send("invalid state parameter not an int");
            return false;
        }

        if (!dev::try_get_int(*group_it, group))
        {
            dev::console_send("invalid group parameter not an int");
            return false;
        }

        return true;
    }

    void set_us(int state, int group, float value)
    {
        auto state_id = create_id(state);
        auto group_id = create_id(group);
        auto uber_state = Moon_UberStateCollection__GetState(&group_id, &state_id);
        if (uber_state == nullptr)
        {
            dev::console_send("uber_state not found");
            return;
        }

        if (!set_uber_state(uber_state, value))
            dev::console_send("invalid uber_state");
    }

    void set_us_bool(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        int state = 0;
        int group = 0;
        if (!find_state_group(params, state, group))
            return;

        bool value = false;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "value"; });
        if (value_it == params.end())
        {
            dev::console_send("value parameter not found");
            return;
        }

        if (!dev::try_get_bool(*value_it, value))
        {
            dev::console_send("invalid value parameter not a bool");
            return;
        }

        set_us(state, group, static_cast<float>(value));
    }

    void set_us_int(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        int state = 0;
        int group = 0;
        if (!find_state_group(params, state, group))
            return;

        int value = 0;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "value"; });
        if (value_it == params.end())
        {
            dev::console_send("value parameter not found");
            return;
        }

        if (!dev::try_get_int(*value_it, value))
        {
            dev::console_send("invalid value parameter not an int");
            return;
        }

        set_us(state, group, static_cast<float>(value));
    }

    void check_appliers(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        if (!uber_state_controller_is_valid())
        {
            dev::console_send("uber_state_controller not available");
            return;
        }

        int state = 0;
        int group = 0;
        if (!find_state_group(params, state, group))
            return;

        auto state_id = create_id(state);
        auto group_id = create_id(group);
        auto uber_state = Moon_UberStateCollection__GetState(&group_id, &state_id);
        if (uber_state == nullptr)
        {
            dev::console_send("uber_state not found");
            return;
        }

        dev::Visualizer visualizer;
        auto list = (*uber_state_controller)->static_fields->AllStateAppliers;
        for (auto i = 0; i < list->fields._size; ++i)
        {
            auto item = list->fields._items->vector[i];
            if (Moon_UberStateController__ApplierIsAffectedByUberState(item, uber_state))
                dev::visualize::visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item));
        }

        dev::console_send(dev::visualize::get_string(visualizer));
    }

    void check_all_appliers(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        if (!uber_state_controller_is_valid())
        {
            dev::console_send("uber_state_controller not available");
            return;
        }

        dev::Visualizer visualizer;
        auto list = (*uber_state_controller)->static_fields->AllStateAppliers;
        for (auto i = 0; i < list->fields._size; ++i)
        {
            auto item = list->fields._items->vector[i];
            dev::visualize::visualize_object(visualizer, reinterpret_cast<Il2CppObject*>(item));
        }

        dev::console_send(dev::visualize::get_string(visualizer));
    }

    void add_uber_state_commands()
    {
        dev::register_command("set_us_bool", set_us_bool);
        dev::register_command("set_us_int", set_us_int);
        dev::register_command("check_appliers", check_appliers);
        dev::register_command("check_all_appliers", check_all_appliers);
    }

    CALL_ON_INIT(add_uber_state_commands);
}
