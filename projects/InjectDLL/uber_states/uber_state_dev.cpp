#include <interception_macros.h>
#include <common.h>
#include <dll_main.h>
#include <dev_commands.h>
#include <Common/ext.h>

#include <array>

namespace
{
    BINDING(29456192, bool, Moon_MoonReference_T___CanResolve, (Moon_MoonReference_T__o* this_ptr, Moon_IMoonResolverContext_o* context));
    BINDING(34816800, Il2CppObject*, System_Array__GetValue, (System_Array_o* this_ptr, int32_t index));
    BINDING(34816240, int32_t, System_Array__get_Length, (System_Array_o* this_ptr));
    BINDING(27825008, System_Int32_array*, NewSetupStateController__GetAllStateGUIDs, (NewSetupStateController_o* this_ptr));
    BINDING(27824416, System_String_o*, NewSetupStateController__GetStateName, (NewSetupStateController_o* this_ptr, int32_t stateGUID));
    BINDING(4370736, UnityEngine_Component_o*, NewSetupStateController__get_TargetComponent, (NewSetupStateController_o* this_ptr));
    BINDING(27824416, System_String_o*, SetupStateModifier__get_Name, (SetupStateModifier_o* this_ptr));

    BINDING(27760400, Moon_IUberState_o*, Moon_UberStateCollection__GetState, (Moon_UberID_o* groupID, Moon_UberID_o* stateID));
    BINDING(27775392, void, Moon_UberStateController__Apply, (Moon_IUberState_o* descriptor, int context));
    BINDING(27776080, bool, Moon_UberStateController__ApplierIsAffectedByUberState, (Moon_IUberStateApplier_o* applier, Moon_IUberState_o* descriptor));
    BINDING(46026576, Il2CppObject*, System_Collections_Generic_List_T___get_Item, (System_Collections_Generic_List_T__o* this_ptr, int32_t index));
    BINDING(6113952, int32_t, System_Collections_Generic_List_T___get_Count, (System_Collections_Generic_List_T__o* this_ptr));

    STATIC_CLASS(71605752, Moon_UberID_c*, uber_id_class);
    STATIC_CLASS(71444600, Moon_UberStateController_c*, uber_state_controller);

    STATIC_CLASS(71453760, Il2CppClass*, bool_uber_state);
    STATIC_CLASS(71829456, Il2CppClass*, byte_uber_state);
    STATIC_CLASS(71589912, Il2CppClass*, condition_uber_state);
    STATIC_CLASS(71833960, Il2CppClass*, float_uber_state);
    STATIC_CLASS(71549856, Il2CppClass*, int_uber_state);
    STATIC_CLASS(71915248, Il2CppClass*, serialized_bool_uber_state);
    STATIC_CLASS(71797832, Il2CppClass*, serialized_byte_uber_state);
    STATIC_CLASS(71349376, Il2CppClass*, serialized_float_uber_state);
    STATIC_CLASS(71349576, Il2CppClass*, serialized_int_uber_state);

    BINDING(27727008, void, Moon_BooleanUberState__set_GenericValue, (Moon_IUberState_o* this_ptr, float value));
    BINDING(27728080, void, Moon_ByteUberState__set_GenericValue, (Moon_IUberState_o* this_ptr, float value));
    BINDING(3006464, void, Moon_ConditionUberState__set_GenericValue, (Moon_IUberState_o* this_ptr, float value));
    BINDING(27736384, void, Moon_FloatUberState__set_GenericValue, (Moon_IUberState_o* this_ptr, float value));
    BINDING(27740144, void, Moon_IntUberState__set_GenericValue, (Moon_IUberState_o* this_ptr, float value));
    BINDING(27748912, void, Moon_SerializedBooleanUberState__set_GenericValue, (Moon_IUberState_o* this_ptr, float value));
    BINDING(27750768, void, Moon_SerializedByteUberState__set_GenericValue, (Moon_IUberState_o* this_ptr, float value));
    BINDING(27752608, void, Moon_SerializedFloatUberState__set_GenericValue, (Moon_IUberState_o* this_ptr, float value));
    BINDING(27754240, void, Moon_SerializedIntUberState__set_GenericValue, (Moon_IUberState_o* this_ptr, float value));

    std::array<std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>, 9> generic_sets;

    void initialize_generic_sets()
    {
        generic_sets = {
            std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>{ serialized_bool_uber_state, Moon_SerializedBooleanUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>{ serialized_byte_uber_state, Moon_SerializedByteUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>{ serialized_float_uber_state, Moon_SerializedFloatUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>{ serialized_int_uber_state, Moon_SerializedIntUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>{ bool_uber_state, Moon_BooleanUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>{ byte_uber_state, Moon_ByteUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>{ condition_uber_state, Moon_ConditionUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>{ float_uber_state, Moon_FloatUberState__set_GenericValue },
            std::tuple<Il2CppClass**, void (*)(Moon_IUberState_o* this_ptr, float value)>{ int_uber_state, Moon_IntUberState__set_GenericValue },
        };
    }

    CALL_ON_INIT(initialize_generic_sets);

    // TODO: Figure out a way to resolve the vtable here by interface and use IGenericUberState.
    bool set_uber_state(Moon_IUberState_o* uber_state, float value)
    {
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

    Moon_UberID_o create_id(int id)
    {
        Moon_UberID_o uber_id;
        uber_id.m_id = id;
        uber_id.monitor = nullptr;
        uber_id.klass = *uber_id_class;
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

    void print_new_setup_state_controller(NewSetupStateController_o* controller)
    {
        auto guid_str = convert_csstring(controller->m_guidStr);
        dev::console_send(format("%s - %s", controller->klass->_1.name, guid_str.c_str()));
        dev::console_send(format("  active_state: %d", controller->m_activeStateIndex));
        dev::console_send("  states:");
        auto all_states = NewSetupStateController__GetAllStateGUIDs(controller);
        for (auto i = 0; i < all_states->max_length; ++i)
        {
            auto guid = all_states->m_Items[i];
            auto csname = NewSetupStateController__GetStateName(controller, guid);
            auto name = convert_csstring(csname);

            dev::console_send(format("    -> %d : %s", guid, name.c_str()));
        }

        dev::console_send("  modifiers:");
        auto collection = reinterpret_cast<System_Collections_Generic_List_T__o*>(controller->StateHolder->Modifiers);
        auto count = System_Collections_Generic_List_T___get_Count(collection);
        for (auto i = 0; i < collection->_size; ++i)
        {
            auto item = reinterpret_cast<SetupStateModifier_o*>(collection->_items->m_Items[i]);
            //auto item = reinterpret_cast<SetupStateModifier_o*>(System_Collections_Generic_List_T___get_Item(collection, i));
            if (item != nullptr && item->Target->m_canResolve && Moon_MoonReference_T___CanResolve(reinterpret_cast<Moon_MoonReference_T__o*>(item->Target), nullptr))
            {
                auto csname = SetupStateModifier__get_Name(item);
                auto name = convert_csstring(csname);

                dev::console_send(format("    -> %s", name.c_str()));
            }
            else
                dev::console_send(format("    -> unresolvable: %s - %d", item->klass->_1.name, item->ModifierGUID));
        }
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

        auto list = reinterpret_cast<System_Collections_Generic_List_T__o*>((*uber_state_controller)->static_fields->AllStateAppliers);
        auto count = System_Collections_Generic_List_T___get_Count(list);
        for (auto i = 0; i < count; ++i)
        {
            auto item = reinterpret_cast<Moon_IUberStateApplier_o*>(System_Collections_Generic_List_T___get_Item(list, i));
            if (Moon_UberStateController__ApplierIsAffectedByUberState(item, uber_state))
            {
                // For some reason we don't have the address to this class in script.json? should figure out the address eventually by looking at address of item->klass.
                if (std::string(item->klass->_1.name) == "NewSetupStateController")
                    print_new_setup_state_controller(reinterpret_cast<NewSetupStateController_o*>(item));
                else
                    dev::console_send(item->klass->_1.name);
            }
        }
    }

    void add_uber_state_commands()
    {
        dev::register_command("set_us_bool", set_us_bool);
        dev::register_command("set_us_int", set_us_int);
        dev::register_command("check_appliers", check_appliers);
    }

    CALL_ON_INIT(add_uber_state_commands);
}
