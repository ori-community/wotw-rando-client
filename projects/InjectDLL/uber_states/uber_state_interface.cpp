#include <macros.h>
#include <enums/uber_state.h>
#include <features/scenes/scene_load.h>
#include <game/player.h>
#include <interop/enum_definitions.h>
#include <interop/csharp_bridge.h>
#include <uber_states/uber_state_virtual.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <vector>
#include <unordered_map>

using namespace modloader;

namespace uber_states
{
    namespace
    {
        std::vector<value_notify> notifiers;
        std::vector<value_intercept> intercepts;

        STATIC_IL2CPP_BINDING(Moon, UberStateCollection, app::IUberState*, GetState, (app::UberID* groupID, app::UberID* stateID));
        STATIC_IL2CPP_BINDING(Moon, UberStateCollection, void, Add, (app::UberID* groupID, app::UberStateCollectionGroup* group));

        NAMED_IL2CPP_BINDING(Moon, UberStateCollectionGroup, void, .ctor, ctor, (app::UberStateCollectionGroup* this_ptr));
        IL2CPP_BINDING(Moon, UberStateCollectionGroup, void, Add, (app::UberStateCollectionGroup* this_ptr, app::UberID* state_id, app::IUberState* state));

        IL2CPP_BINDING(Moon, UberStateValueStore, void, FinalizeInitialization, (app::UberStateValueStore* this_ptr, bool should_parse));
        STATIC_IL2CPP_BINDING_OVERLOAD(Moon, UberStateController, void, ApplyAll, (app::UberStateApplyContext__Enum context), (Moon:UberStateApplyContext));
        STATIC_IL2CPP_BINDING_OVERLOAD(Moon, UberStateController, void, Apply, (app::IUberState* descriptor, app::UberStateApplyContext__Enum context), (Moon:IUberState, Moon : UberStateApplyContext));

        IL2CPP_BINDING(Moon, SerializedBooleanUberState, bool, get_Value, (app::IUberState* this_ptr));
        IL2CPP_BINDING(Moon, SerializedByteUberState, uint8_t, get_Value, (app::IUberState* this_ptr));
        IL2CPP_BINDING(Moon, SerializedIntUberState, int32_t, get_Value, (app::IUberState* this_ptr));
        IL2CPP_BINDING(Moon, SerializedFloatUberState, float, get_Value, (app::IUberState* this_ptr));

        IL2CPP_BINDING(Moon, BooleanUberState, bool, get_Value, (app::IUberState* this_ptr));
        IL2CPP_BINDING(Moon, ByteUberState, uint8_t, get_Value, (app::IUberState* this_ptr));
        IL2CPP_BINDING(Moon, IntUberState, int32_t, get_Value, (app::IUberState* this_ptr));
        IL2CPP_BINDING(Moon, FloatUberState, float, get_Value, (app::IUberState* this_ptr));

        IL2CPP_BINDING(Moon.uberSerialization, SavePedestalUberState, bool, get_IsTeleporterActive, (app::IUberState* this_ptr));
        IL2CPP_BINDING(Moon.uberSerialization, SavePedestalUberState, bool, get_HasGameBeenSaved, (app::IUberState* this_ptr));
        
        IL2CPP_INTERCEPT(Moon, SerializedBooleanUberState, void, set_Value, (app::IUberState* this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon, SerializedByteUberState, void, set_Value, (app::IUberState* this_ptr, uint8_t value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon, SerializedFloatUberState, void, set_Value, (app::IUberState* this_ptr, float value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon, SerializedIntUberState, void, set_Value, (app::IUberState* this_ptr, int value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon, BooleanUberState, void, set_Value, (app::IUberState* this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon, ByteUberState, void, set_Value, (app::IUberState* this_ptr, uint8_t value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon, FloatUberState, void, set_Value, (app::IUberState* this_ptr, float value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon, IntUberState, void, set_Value, (app::IUberState* this_ptr, int value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon.uberSerializationWisp, SavePedestalUberState, void, set_HasGameBeenSaved, (app::IUberState* this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            auto current = static_cast<int>(uber_state.get());
            current = value ? current | 0b01 : current & ~0b01;
            uber_state.set(current);
        }

        IL2CPP_INTERCEPT(Moon.uberSerializationWisp, SavePedestalUberState, void, set_IsTeleporterActive, (app::IUberState* this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            auto current = static_cast<int>(uber_state.get());
            current = value ? current | 0b10 : current & ~0b10;
            uber_state.set(current);
        }

        STATIC_IL2CPP_BINDING(Moon, SavePedestalController, void, OnTeleporterActivationStateChanged, ());
        IL2CPP_INTERCEPT(, GameMapSavePedestal, void, set_IsTeleporterActive, (app::GameMapSavePedestal* this_ptr, bool value)) {
            SavePedestalUberState::set_IsTeleporterActive_intercept(reinterpret_cast<app::IUberState*>(this_ptr->fields.SeralizedState), value);
            SavePedestalController::OnTeleporterActivationStateChanged();
        }

        IL2CPP_INTERCEPT(Moon.UberStateVisualization, SerializedBoolUberStateWrapper, void, SetValue, (app::SerializedBoolUberStateWrapper* this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon.UberStateVisualization, SerializedByteUberStateWrapper, void, SetValue, (app::SerializedByteUberStateWrapper* this_ptr, uint8_t value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon.UberStateVisualization, SerializedFloatUberStateWrapper, void, SetValue, (app::SerializedFloatUberStateWrapper* this_ptr, float value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon.UberStateVisualization, SerializedIntUberStateWrapper, void, SetValue, (app::SerializedIntUberStateWrapper* this_ptr, int value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_BINDING(Moon.uberSerializationWisp, SavePedestalUberState, app::SavePedestalUberState_PedestalState*, ReadStateFromStore, (app::SavePedestalUberState* this_ptr));
        double convert_pedestal_state(app::SavePedestalUberState* state)
        {
            if (state == nullptr)
                return 0.0;

            auto pedestal = SavePedestalUberState::ReadStateFromStore(state);
            if (pedestal == nullptr)
                return 0.0;

            const auto active = static_cast<int>(pedestal->fields.IsTeleporterActive != 0);
            const auto save = static_cast<int>(pedestal->fields.HasGameBeenSaved != 0) << 1;
            return static_cast<double>(save | active);
        }

        app::UberID create_uber_id(int id)
        {
            app::UberID uber_id;
            uber_id.monitor = nullptr;
            uber_id.klass = reinterpret_cast<app::UberID__Class*>(il2cpp::get_class("Moon", "UberID"));
            uber_id.fields.m_id = id;
            return uber_id;
        }

        bool intercept_change(UberState& uber_state, double value)
        {
            bool intercepted = false;
            for (auto intercept : intercepts)
                intercepted |= intercept(uber_state, value);

            return intercepted;
        }

        struct UberStateTypeResolver
        {
            std::string namezpace;
            std::string name;
            csharp_bridge::UberStateType type;
        };

        std::array<UberStateTypeResolver, 11> resolvers = {
            UberStateTypeResolver{ "Moon", "SerializedBooleanUberState", csharp_bridge::UberStateType::SerializedBooleanUberState },
            UberStateTypeResolver{ "Moon", "SerializedIntUberState", csharp_bridge::UberStateType::SerializedIntUberState },
            UberStateTypeResolver{ "Moon", "SerializedFloatUberState", csharp_bridge::UberStateType::SerializedFloatUberState },
            UberStateTypeResolver{ "Moon", "SerializedByteUberState", csharp_bridge::UberStateType::SerializedByteUberState },

            UberStateTypeResolver{ "Moon.uberSerializationWisp", "SavePedestalUberState", csharp_bridge::UberStateType::SavePedestalUberState },
            UberStateTypeResolver{ "Moon.uberSerializationWisp", "PlayerUberStateDescriptor", csharp_bridge::UberStateType::PlayerUberStateDescriptor },

            UberStateTypeResolver{ "Moon", "BooleanUberState", csharp_bridge::UberStateType::BooleanUberState },
            UberStateTypeResolver{ "Moon", "ByteUberState", csharp_bridge::UberStateType::ByteUberState },
            UberStateTypeResolver{ "Moon", "IntUberState", csharp_bridge::UberStateType::IntUberState },
            UberStateTypeResolver{ "Moon", "CountUberState", csharp_bridge::UberStateType::CountUberState },
            UberStateTypeResolver{ "Moon", "ConditionUberState", csharp_bridge::UberStateType::ConditionUberState },
        };

        csharp_bridge::UberStateType resolve_type(app::IUberState* uber_state)
        {
            for (auto const& resolver : resolvers)
                if (il2cpp::is_assignable(uber_state, resolver.namezpace.c_str(), resolver.name.c_str()))
                    return resolver.type;

            return static_cast<csharp_bridge::UberStateType>(-1);
        }

        // Remove this when csharp is removed.
        void notify_uber_state_change(UberState state, double previous_value)
        {
            if (state.group() == UberStateGroup::MultiVars) {
                auto uprev = static_cast<int>(previous_value);
                auto ucurr = state.get<int>();
                int delta = uprev ^ ucurr;
                int real_state = static_cast<int>(log2(delta)) + 31 * state.state();
                if (ucurr > uprev)
                    csharp_bridge::on_uber_state_applied(12, real_state, 3, 0.0, 1.0);
                else
                    csharp_bridge::on_uber_state_applied(12, real_state, 3, 1.0, 0.0);
                return;
            }

            auto type = resolve_type(state.ptr());
            csharp_bridge::on_uber_state_applied(static_cast<int>(state.group()), state.state(),
                static_cast<uint8_t>(type), previous_value, state.get());
        }

        void initialize()
        {
            register_value_notify(notify_uber_state_change);
        }

        CALL_ON_INIT(initialize);
    }

    UberState::UberState()
        : m_group(UberStateGroup::Invalid)
        , m_state(0)
    {}

    UberState::UberState(app::IUberState* state)
        : m_group(static_cast<UberStateGroup>(il2cpp::invoke<app::UberID>(state, "get_GroupID")->fields.m_id))
        , m_state(il2cpp::invoke<app::UberID>(state, "get_StateID")->fields.m_id)
    {}

    UberState::UberState(UberStateGroup group, int state)
        : m_group(group)
        , m_state(state)
    {}

    bool UberState::valid() const
    {
        if (m_group == UberStateGroup::Invalid || m_state < 0)
            return false;

        if (uber_states::is_virtual_state(m_group, m_state))
            return true;

        return ptr() != nullptr;
    }

    void UberState::set(double value, bool ignore_intercept, bool ignore_notify)
    {
        // Prevent changes that don't change anything.
        auto prev = get();
        if (prev == value)
            return;

        if (!ignore_intercept && intercept_change(*this, value))
            return;

        if (is_virtual_state(m_group, m_state))
            set_virtual_value(m_group, m_state, value);
        else
        {
            auto uber_state = ptr();
            if (m_group == UberStateGroup::MultiVars) // Handle multi group.
            {
                int curr = static_cast<int>(prev);
                int8_t offset = m_state % 31;
                if (value > 0.1f)
                    curr |= 1 << offset; // or if it's true
                else
                    curr &= ~(1 << offset); // invert bit then and it
                SerializedIntUberState::set_Value(uber_state, static_cast<int>(curr));
            }
            else if (il2cpp::is_assignable(uber_state, "Moon", "SerializedBooleanUberState"))
                SerializedBooleanUberState::set_Value(uber_state, value > 0.5);
            else if (il2cpp::is_assignable(uber_state, "Moon", "SerializedByteUberState"))
                SerializedByteUberState::set_Value(uber_state, value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "SerializedIntUberState"))
                SerializedIntUberState::set_Value(uber_state, value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "SerializedFloatUberState"))
                SerializedFloatUberState::set_Value(uber_state, value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "BooleanUberState"))
                BooleanUberState::set_Value(uber_state, value > 0.5);
            else if (il2cpp::is_assignable(uber_state, "Moon", "ByteUberState"))
                ByteUberState::set_Value(uber_state, value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "IntUberState"))
                IntUberState::set_Value(uber_state, value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "FloatUberState"))
                FloatUberState::set_Value(uber_state, value);
            else if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState"))
            {
                const auto int_value = static_cast<int>(value);
                const auto is_teleporter_active = (int_value & 0b01) != 0;
                const auto has_been_saved = (int_value & 0b10) != 0;
                SavePedestalUberState::set_IsTeleporterActive(uber_state, is_teleporter_active);
                SavePedestalUberState::set_HasGameBeenSaved(uber_state, has_been_saved);
            }
            else
            {
                trace(MessageType::Warning, 2, "uber_state", format("unable to get value of uber state (%d, %d)", m_group, m_state));
                return;
            }
        }

        if (!ignore_notify)
            notify_changed(prev);
    }

    double UberState::get() const
    {
        if (is_virtual_state(m_group, m_state))
            return get_virtual_value(m_group, m_state);

        auto uber_state = ptr();
        if (m_group == UberStateGroup::MultiVars)
            return static_cast<double>((SerializedIntUberState::get_Value(uber_state) >> (m_state % 31)) & 0b1);

        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedBooleanUberState"))
            return static_cast<double>(SerializedBooleanUberState::get_Value(uber_state));

        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedByteUberState"))
            return static_cast<double>(SerializedByteUberState::get_Value(uber_state));

        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedIntUberState"))
            return static_cast<double>(SerializedIntUberState::get_Value(uber_state));

        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedFloatUberState"))
            return static_cast<double>(SerializedFloatUberState::get_Value(uber_state));

        if (il2cpp::is_assignable(uber_state, "Moon", "BooleanUberState"))
            return static_cast<double>(BooleanUberState::get_Value(uber_state));

        if (il2cpp::is_assignable(uber_state, "Moon", "ByteUberState"))
            return static_cast<double>(ByteUberState::get_Value(uber_state));

        if (il2cpp::is_assignable(uber_state, "Moon", "IntUberState"))
            return static_cast<double>(IntUberState::get_Value(uber_state));

        if (il2cpp::is_assignable(uber_state, "Moon", "FloatUberState"))
            return static_cast<double>(FloatUberState::get_Value(uber_state));

        if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState"))
        {
            auto is_teleporter_active = static_cast<uint32_t>(SavePedestalUberState::get_HasGameBeenSaved(uber_state));
            auto has_been_saved = static_cast<uint32_t>(SavePedestalUberState::get_HasGameBeenSaved(uber_state));
            auto value = is_teleporter_active | (has_been_saved << 1);
            return static_cast<double>(value);
        }

        trace(MessageType::Warning, 2, "uber_state", format("unable to get value of uber state (%d, %d)", m_group, m_state));
        return 0.0;
    }

    std::string UberState::group_name() const
    {
        if (is_virtual_state(m_group, m_state))
            return get_virtual_name(m_group, m_state);

        auto uber_state = ptr();
        if (uber_state == nullptr)
            return "Null";

        auto csstring = il2cpp::invoke<app::String>(uber_state, "get_Name");
        return il2cpp::convert_csstring(csstring);
    }

    std::string UberState::state_name() const
    {
        auto uber_state = ptr();
        if (uber_state == nullptr)
            return "Null";

        auto group = il2cpp::invoke<app::IUberStateGroup>(uber_state, "get_UberStateGroup");
        auto csstring = il2cpp::invoke<app::String>(group, "get_GroupName");
        return il2cpp::convert_csstring(csstring);
    }

    void UberState::apply() const
    {
        UberStateController::Apply(ptr(), app::UberStateApplyContext__Enum_ValueChanged);
    }

    app::IUberState* UberState::ptr() const
    {
        auto state = m_group == UberStateGroup::MultiVars ? m_state / 31 : m_state;
        auto group_id = create_uber_id(static_cast<int>(m_group));
        auto state_id = create_uber_id(state);
        return UberStateCollection::GetState(&group_id, &state_id);
    }

    void UberState::notify_changed(double prev) const
    {
        for (auto notifier : notifiers)
            notifier(*this, prev);
    }

    void apply_all()
    {
        UberStateController::ApplyAll(app::UberStateApplyContext__Enum_FullStateApply);
    }

    void clear()
    {
        std::unordered_map<int, double> saved;
        auto position = game::player::position();

        std::vector<int> stat_states{
            0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
            33, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
            70, 71, 72, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109
        };
        for (auto state : stat_states)
            saved[state] = UberState(UberStateGroup::RandoStats, state).get();

        game::player::unbind_all();

        auto instance = il2cpp::get_class<app::UberStateController__Class>("Moon", "UberStateController")->static_fields->m_currentStateValueStore;
        instance->fields.m_isInitialized = false;
        il2cpp::invoke(instance->fields.m_groupMap, "Clear");
        UberStateValueStore::FinalizeInitialization(instance, false);
        // Because for some reason if we only call it once we lose wall jump.
        scenes::load_default_values();
        scenes::load_default_values();
        UberState(static_cast<UberStateGroup>(21786), 48748).set(1, true, false);
        game::player::position(position);
        for (auto save : saved)
            UberState(UberStateGroup::RandoStats, save.first).set(save.second, true, true);

        apply_all();
    }

    void register_value_notify(value_notify notify)
    {
        notifiers.push_back(notify);
    }

    void register_value_intercept(value_intercept intercept)
    {
        intercepts.push_back(intercept);
    }

    bool operator==(UberState const& a, UberState const& b)
    {
        return a.state() == b.state() && a.group() == b.group();
    }
}

INJECT_C_DLLEXPORT csharp_bridge::UberStateType get_uber_state_type(UberStateGroup group, int state)
{
    // TODO: Make this better
    if (uber_states::is_virtual_state(group, state))
        return csharp_bridge::UberStateType::SerializedFloatUberState;

    return uber_states::resolve_type(uber_states::UberState(group, state).ptr());
}

INJECT_C_DLLEXPORT void reset_uber_state_value_store()
{
    uber_states::clear();
}

INJECT_C_DLLEXPORT bool get_uber_state_exists(UberStateGroup group, int state)
{
    return uber_states::UberState(group, state).valid();
}
