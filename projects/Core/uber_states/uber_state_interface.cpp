#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/enums/uber_state.h>
#include <Core/macros.h>
#include <uber_states/uber_state_interface.h>
#include <uber_states/uber_state_virtual.h>

#include <Common/ext.h>

#include <Modloader/app/methods/GameMapSavePedestal.h>
#include <Modloader/app/methods/Moon/BooleanUberState.h>
#include <Modloader/app/methods/Moon/ByteUberState.h>
#include <Modloader/app/methods/Moon/FloatUberState.h>
#include <Modloader/app/methods/Moon/IntUberState.h>
#include <Modloader/app/methods/Moon/SerializedBooleanUberState.h>
#include <Modloader/app/methods/Moon/SerializedByteUberState.h>
#include <Modloader/app/methods/Moon/SerializedFloatUberState.h>
#include <Modloader/app/methods/Moon/SerializedIntUberState.h>
#include <Modloader/app/methods/Moon/UberStateCollection.h>
#include <Modloader/app/methods/Moon/UberStateController.h>
#include <Modloader/app/methods/Moon/UberStateValueStore.h>
#include <Modloader/app/methods/Moon/UberStateVisualization/SerializedBoolUberStateWrapper.h>
#include <Modloader/app/methods/Moon/UberStateVisualization/SerializedByteUberStateWrapper.h>
#include <Modloader/app/methods/Moon/UberStateVisualization/SerializedFloatUberStateWrapper.h>
#include <Modloader/app/methods/Moon/UberStateVisualization/SerializedIntUberStateWrapper.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/SavePedestalUberState.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/types/BooleanUberState.h>
#include <Modloader/app/types/ByteUberState.h>
#include <Modloader/app/types/ConditionUberState.h>
#include <Modloader/app/types/CountUberState.h>
#include <Modloader/app/types/FloatUberState.h>
#include <Modloader/app/types/IntUberState.h>
#include <Modloader/app/types/PlayerUberStateDescriptor.h>
#include <Modloader/app/types/SavePedestalUberState.h>
#include <Modloader/app/types/SerializedBooleanUberState.h>
#include <Modloader/app/types/SerializedByteUberState.h>
#include <Modloader/app/types/SerializedFloatUberState.h>
#include <Modloader/app/types/SerializedIntUberState.h>
#include <Modloader/app/types/UberID.h>
#include <Modloader/app/types/UberStateCollection.h>
#include <Modloader/app/types/UberStateController.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <unordered_map>
#include <vector>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::Moon;
using namespace app::classes::Moon::uberSerializationWisp;

namespace uber_states {
    EventBus<UberStateUpdate> m_event_bus;

    namespace {
        std::vector<value_notify> notifiers;
        std::vector<value_intercept> intercepts;

        IL2CPP_INTERCEPT(Moon::SerializedBooleanUberState, void, set_Value, (app::SerializedBooleanUberState * this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::SerializedByteUberState, void, set_Value, (app::SerializedByteUberState * this_ptr, uint8_t value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::SerializedFloatUberState, void, set_Value, (app::SerializedFloatUberState * this_ptr, float value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::SerializedIntUberState, void, set_Value, (app::SerializedIntUberState * this_ptr, int value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::BooleanUberState, void, set_Value, (app::BooleanUberState * this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::ByteUberState, void, set_Value, (app::ByteUberState * this_ptr, uint8_t value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::FloatUberState, void, set_Value, (app::FloatUberState * this_ptr, float value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::IntUberState, void, set_Value, (app::IntUberState * this_ptr, int value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::uberSerializationWisp::SavePedestalUberState, void, set_HasGameBeenSaved, (app::SavePedestalUberState * this_ptr, bool value)) {
            // NOOP
        }

        IL2CPP_INTERCEPT(Moon::uberSerializationWisp::SavePedestalUberState, void, set_IsTeleporterActive, (app::SavePedestalUberState * this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value ? 1.0 : 0.0);
        }

        IL2CPP_INTERCEPT(GameMapSavePedestal, void, set_IsTeleporterActive, (app::GameMapSavePedestal * this_ptr, bool value)) {
            SavePedestalUberState::set_IsTeleporterActive(this_ptr->fields.SeralizedState, value);
            SavePedestalController::OnTeleporterActivationStateChanged();
        }

        IL2CPP_INTERCEPT(Moon::UberStateVisualization::SerializedBoolUberStateWrapper, void, SetValue, (app::SerializedBoolUberStateWrapper * this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::UberStateVisualization::SerializedByteUberStateWrapper, void, SetValue, (app::SerializedByteUberStateWrapper * this_ptr, uint8_t value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::UberStateVisualization::SerializedFloatUberStateWrapper, void, SetValue, (app::SerializedFloatUberStateWrapper * this_ptr, float value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(Moon::UberStateVisualization::SerializedIntUberStateWrapper, void, SetValue, (app::SerializedIntUberStateWrapper * this_ptr, int value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        app::UberID create_uber_id(int id) {
            app::UberID uber_id{};
            uber_id.monitor = nullptr;
            uber_id.klass = reinterpret_cast<app::UberID__Class*>(types::UberID::get_class());
            uber_id.fields.m_id = id;
            return uber_id;
        }

        bool intercept_change(UberState& uber_state, double value) {
            bool intercepted = false;
            for (auto intercept : intercepts)
                intercepted |= intercept(uber_state, value);

            return intercepted;
        }

        struct UberStateTypeResolver {
            Il2CppClass* uber_state_class;
            UberStateType type;
        };

        std::array<UberStateTypeResolver, 11> resolvers = {
            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::SerializedBooleanUberState::get_class()), UberStateType::SerializedBooleanUberState },
            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::SerializedIntUberState::get_class()), UberStateType::SerializedIntUberState },
            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::SerializedFloatUberState::get_class()), UberStateType::SerializedFloatUberState },
            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::SerializedByteUberState::get_class()), UberStateType::SerializedByteUberState },

            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::SavePedestalUberState::get_class()), UberStateType::SavePedestalUberState },
            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::PlayerUberStateDescriptor::get_class()), UberStateType::PlayerUberStateDescriptor },

            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::BooleanUberState::get_class()), UberStateType::BooleanUberState },
            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::ByteUberState::get_class()), UberStateType::ByteUberState },
            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::IntUberState::get_class()), UberStateType::IntUberState },
            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::CountUberState::get_class()), UberStateType::CountUberState },
            UberStateTypeResolver{ reinterpret_cast<Il2CppClass*>(types::ConditionUberState::get_class()), UberStateType::ConditionUberState },
        };
    } // namespace

    bool UberStateCondition::resolve() const {
        if (!state.valid())
            return false;

        return resolve(state, state.get());
    }

    bool UberStateCondition::resolve(double state_value) const {
        return resolve(state, state_value);
    }

    bool UberStateCondition::resolve(UberState compared_state, double state_value) const {
        if (!state.valid() || !compared_state.valid() || state != compared_state)
            return false;

        switch (op) {
            case Operator::Equals:
                return state_value == value;
            case Operator::LessOrEquals:
                return state_value <= value;
            case Operator::MoreOrEquals:
                return state_value >= value;
            case Operator::Less:
                return state_value < value;
            case Operator::More:
                return state_value > value;
            default:
                return false;
        }
    }

    UberState::UberState() :
            m_group(UberStateGroup::Invalid), m_state(0) {}

    UberState::UberState(int group, int state) :
            m_group(static_cast<UberStateGroup>(group)), m_state(state) {}

    UberState::UberState(app::IUberState* state) :
            m_group(static_cast<UberStateGroup>(il2cpp::invoke<app::UberID>(state, "get_GroupID")->fields.m_id)), m_state(il2cpp::invoke<app::UberID>(state, "get_StateID")->fields.m_id) {}

    UberState::UberState(UberStateGroup group, int state) :
            m_group(group), m_state(state) {}

    UberState::UberState(UberStateGroup group, app::AbilityType__Enum state) :
            m_group(group), m_state(static_cast<int>(state)) {}

    bool UberState::valid() const {
        if (m_group == UberStateGroup::Invalid || m_state < 0)
            return false;

        if (uber_states::is_virtual_state(m_group, m_state))
            return true;

        return ptr() != nullptr;
    }

    void UberState::set(double value, bool ignore_intercept, bool ignore_notify) {
        auto prev = get();
        
        if (!ignore_intercept && intercept_change(*this, value))
            return;

        if (is_virtual_state(m_group, m_state))
            set_virtual_value(m_group, m_state, value);
        else {
            auto uber_state = ptr();
            if (!il2cpp::unity::is_valid(uber_state)) {
                trace(MessageType::Warning, 2, "uber_state", fmt::format("uber state ({}, {}) doesn't exist", static_cast<int>(m_group), m_state));
                return;
            }

            if (il2cpp::is_assignable(uber_state, types::SerializedBooleanUberState::get_class()))
                next::Moon::SerializedBooleanUberState::set_Value(reinterpret_cast<app::SerializedBooleanUberState*>(uber_state), value > 0.5);
            else if (il2cpp::is_assignable(uber_state, types::SerializedByteUberState::get_class()))
                next::Moon::SerializedByteUberState::set_Value(reinterpret_cast<app::SerializedByteUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, types::SerializedIntUberState::get_class()))
                next::Moon::SerializedIntUberState::set_Value(reinterpret_cast<app::SerializedIntUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, types::SerializedFloatUberState::get_class()))
                next::Moon::SerializedFloatUberState::set_Value(reinterpret_cast<app::SerializedFloatUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, types::BooleanUberState::get_class()))
                next::Moon::BooleanUberState::set_Value(reinterpret_cast<app::BooleanUberState*>(uber_state), value > 0.5);
            else if (il2cpp::is_assignable(uber_state, types::ByteUberState::get_class()))
                next::Moon::ByteUberState::set_Value(reinterpret_cast<app::ByteUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, types::IntUberState::get_class()))
                next::Moon::IntUberState::set_Value(reinterpret_cast<app::IntUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, types::FloatUberState::get_class()))
                next::Moon::FloatUberState::set_Value(reinterpret_cast<app::FloatUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, types::SavePedestalUberState::get_class())) {
                next::Moon::uberSerializationWisp::SavePedestalUberState::set_IsTeleporterActive(reinterpret_cast<app::SavePedestalUberState*>(uber_state), value > 0.5);
            } else {
                trace(MessageType::Warning, 2, "uber_state", fmt::format("unable to get value of uber state ({}, {})", static_cast<int>(m_group), m_state));
                return;
            }
        }

        if (!ignore_notify && prev != value)
            notify_changed(prev);
    }

    double UberState::get() const {
        if (is_virtual_state(m_group, m_state))
            return get_virtual_value(m_group, m_state);

        auto uber_state = ptr();
        if (!il2cpp::unity::is_valid(uber_state)) {
            trace(MessageType::Warning, 2, "uber_state", fmt::format("uber state ({}, {}) doesn't exist", static_cast<int>(m_group), m_state));
            return 0.0;
        }

        if (il2cpp::is_assignable(uber_state, types::SerializedBooleanUberState::get_class()))
            return static_cast<double>(SerializedBooleanUberState::get_Value(reinterpret_cast<app::SerializedBooleanUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, types::SerializedByteUberState::get_class()))
            return static_cast<double>(SerializedByteUberState::get_Value(reinterpret_cast<app::SerializedByteUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, types::SerializedIntUberState::get_class()))
            return static_cast<double>(SerializedIntUberState::get_Value(reinterpret_cast<app::SerializedIntUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, types::SerializedFloatUberState::get_class()))
            return static_cast<double>(SerializedFloatUberState::get_Value(reinterpret_cast<app::SerializedFloatUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, types::BooleanUberState::get_class()))
            return static_cast<double>(BooleanUberState::get_Value(reinterpret_cast<app::BooleanUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, types::ByteUberState::get_class()))
            return static_cast<double>(ByteUberState::get_Value(reinterpret_cast<app::ByteUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, types::IntUberState::get_class()))
            return static_cast<double>(IntUberState::get_Value(reinterpret_cast<app::IntUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, types::FloatUberState::get_class()))
            return static_cast<double>(FloatUberState::get_Value(reinterpret_cast<app::FloatUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, types::SavePedestalUberState::get_class())) {
            return SavePedestalUberState::get_IsTeleporterActive(reinterpret_cast<app::SavePedestalUberState*>(uber_state)) ? 1.0 : 0.0;
        }

        trace(MessageType::Warning, 2, "uber_state", fmt::format("unable to get value of uber state ({}, {})", static_cast<int>(m_group), m_state));
        return 0.0;
    }

    std::string UberState::state_name() const {
        if (is_virtual_state(m_group, m_state))
            return get_virtual_name(m_group, m_state);

        auto uber_state = ptr();
        if (uber_state == nullptr)
            return "Null";

        auto csstring = il2cpp::invoke<app::String>(uber_state, "get_Name");
        return il2cpp::convert_csstring(csstring);
    }

    std::string UberState::group_name() const {
        if (is_virtual_state(m_group, m_state))
            return get_virtual_group_name(m_group);

        auto uber_state = ptr();
        if (uber_state == nullptr)
            return "Null";

        auto group = il2cpp::invoke<app::IUberStateGroup>(uber_state, "get_UberStateGroup");
        auto csstring = il2cpp::invoke<app::String>(group, "get_GroupName");
        return il2cpp::convert_csstring(csstring);
    }

    void UberState::apply() const {
        UberStateController::Apply_2(ptr(), app::UberStateApplyContext__Enum::ValueChanged);
    }

    app::IUberState* UberState::ptr() const {
        auto group_id = create_uber_id(static_cast<int>(m_group));
        auto state_id = create_uber_id(m_state);
        return UberStateCollection::GetState(&group_id, &state_id);
    }

    void UberState::notify_changed(double prev) const {
        for (auto notifier : notifiers)
            notifier(*this, prev);

        m_event_bus.trigger_event(UberStateUpdate {
            *this, prev, this->get(),
        });
    }

    void apply_all() {
        UberStateController::ApplyAll(app::UberStateApplyContext__Enum::FullStateApply);
    }

    void clear() {
        std::unordered_map<int, double> saved;
        auto position = game::player::get_position();

        std::vector<int> stat_states{
            0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109
        };
        for (auto state : stat_states)
            saved[state] = UberState(UberStateGroup::RandoStats, state).get();

        game::player::unbind_all();

        auto instance = types::UberStateController::get_class()->static_fields->m_currentStateValueStore;
        instance->fields.m_isInitialized = false;
        il2cpp::invoke(instance->fields.m_groupMap, "Clear");
        UberStateValueStore::FinalizeInitialization(instance, false);
        // Because for some reason if we only call it once we lose wall jump.
        scenes::load_default_values();
        scenes::load_default_values();
        UberState(static_cast<UberStateGroup>(21786), 48748).set(1, true, false);
        game::player::set_position(position);
        for (auto save : saved)
            UberState(UberStateGroup::RandoStats, save.first).set(save.second, true, true);

        apply_all();
    }

    EventBus<UberStateUpdate>& event_bus() {
        return m_event_bus;
    }

    void register_value_notify(value_notify notify) {
        notifiers.push_back(notify);
    }

    void register_value_intercept(value_intercept intercept) {
        intercepts.push_back(intercept);
    }

    UberStateType resolve_type(app::IUberState* uber_state) {
        for (auto const& resolver : resolvers)
            if (il2cpp::is_assignable(uber_state, resolver.uber_state_class))
                return resolver.type;

        return static_cast<UberStateType>(-1);
    }

    bool operator==(UberState const& a, UberState const& b) {
        return a.state() == b.state() && a.group() == b.group();
    }

    bool operator==(UberStateCondition const& a, UberStateCondition const& b) {
        return a.op == b.op && a.state == b.state && a.value == b.value;
    }
} // namespace uber_states

// TODO: Remove everything below here when removing csharp.

CORE_C_DLLEXPORT UberStateType get_uber_state_type(UberStateGroup group, int state) {
    if (uber_states::is_virtual_state(group, state))
        return UberStateType::SerializedFloatUberState;

    return uber_states::resolve_type(uber_states::UberState(group, state).ptr());
}

CORE_C_DLLEXPORT void reset_uber_state_value_store() {
    uber_states::clear();
}

CORE_C_DLLEXPORT bool get_uber_state_exists(UberStateGroup group, int state) {
    return uber_states::UberState(group, state).valid();
}

CORE_C_DLLEXPORT double get_uber_state_value(UberStateGroup group, int state) {
    return uber_states::UberState(group, state).get();
}

CORE_C_DLLEXPORT void set_uber_state_value(UberStateGroup group, int state, double value, bool ignore_intercept) {
    uber_states::UberState(group, state).set(value, ignore_intercept);
}

CORE_C_DLLEXPORT int get_uber_state_name(UberStateGroup group, int state, char* buffer, int len) {
    auto str = uber_states::UberState(group, state).state_name();
    strcpy_s(buffer, len, str.c_str());
    return len < str.size() ? len : str.size();
}

CORE_C_DLLEXPORT int get_uber_state_group_name(UberStateGroup group, int state, char* buffer, int len) {
    auto str = uber_states::UberState(group, state).group_name();
    strcpy_s(buffer, len, str.c_str());
    return len < str.size() ? len : str.size();
}

CORE_C_DLLEXPORT void refresh_uber_state(UberStateGroup group, int state) {
    uber_states::UberState(group, state).apply();
}

#pragma pack(push, 1)
struct UberStateDef {
    int state_id;
    UberStateGroup group_id;
    const char* state_name;
    const char* group_name;
    UberStateType type;
};
#pragma pack(pop)

std::vector<std::string> temp_string_vector;
std::vector<UberStateDef> temp_vector;
CORE_C_DLLEXPORT UberStateDef* get_uber_states(int& size) {
    temp_string_vector.clear();
    temp_vector.clear();

    auto collection = types::UberStateCollection::get_class()
                              ->static_fields->m_instance->fields.m_descriptors->fields;

    temp_vector.resize(collection._size);
    temp_string_vector.resize(collection._size * 2);

    for (auto i = 0; i < collection._size; ++i) {
        UberStateDef def;
        uber_states::UberState uber_state(reinterpret_cast<app::IUberState*>(collection._items->vector[i]));
        def.group_id = uber_state.group();
        def.state_id = uber_state.state();
        temp_string_vector[i * 2 + 1] = uber_state.group_name();
        def.group_name = temp_string_vector[i * 2 + 1].c_str();
        temp_string_vector[i * 2] = uber_state.state_name();
        def.state_name = temp_string_vector[i * 2].c_str();
        def.type = uber_states::resolve_type(uber_state.ptr());
        temp_vector[i] = def;
    }

    size = temp_vector.size();
    return temp_vector.data();
}
