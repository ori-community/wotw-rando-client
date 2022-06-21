#include <enums/uber_state.h>
#include <features/scenes/scene_load.h>
#include <game/player.h>
#include <interop/csharp_bridge.h>
#include <interop/enum_definitions.h>
#include <macros.h>
#include <uber_states/uber_state_interface.h>
#include <uber_states/uber_state_virtual.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/Moon/UberStateCollection.h>
#include <Il2CppModLoader/app/methods/Moon/UberStateCollectionGroup.h>
#include <Il2CppModLoader/app/methods/Moon/UberStateValueStore.h>
#include <Il2CppModLoader/app/methods/Moon/UberStateController.h>
#include <Il2CppModLoader/app/methods/Moon/SerializedBooleanUberState.h>
#include <Il2CppModLoader/app/methods/Moon/SerializedByteUberState.h>
#include <Il2CppModLoader/app/methods/Moon/SerializedIntUberState.h>
#include <Il2CppModLoader/app/methods/Moon/SerializedFloatUberState.h>
#include <Il2CppModLoader/app/methods/Moon/BooleanUberState.h>
#include <Il2CppModLoader/app/methods/Moon/ByteUberState.h>
#include <Il2CppModLoader/app/methods/Moon/IntUberState.h>
#include <Il2CppModLoader/app/methods/Moon/FloatUberState.h>
#include <Il2CppModLoader/app/methods/Moon/uberSerializationWisp/SavePedestalUberState.h>
#include <Il2CppModLoader/app/methods/Moon/UberStateVisualization/SerializedBoolUberStateWrapper.h>
#include <Il2CppModLoader/app/methods/Moon/UberStateVisualization/SerializedByteUberStateWrapper.h>
#include <Il2CppModLoader/app/methods/Moon/UberStateVisualization/SerializedFloatUberStateWrapper.h>
#include <Il2CppModLoader/app/methods/Moon/UberStateVisualization/SerializedIntUberStateWrapper.h>
#include <Il2CppModLoader/app/methods/SavePedestalController.h>
#include <Il2CppModLoader/app/methods/GameMapSavePedestal.h>

#include <unordered_map>
#include <vector>

using namespace modloader;
using namespace app::methods;
using namespace app::methods::Moon;
using namespace app::methods::Moon::uberSerializationWisp;

namespace uber_states {
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
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            auto current = static_cast<int>(uber_state.get());
            current = value ? current | 0b01 : current & ~0b01;
            uber_state.set(current);
        }

        IL2CPP_INTERCEPT(Moon::uberSerializationWisp::SavePedestalUberState, void, set_IsTeleporterActive, (app::SavePedestalUberState * this_ptr, bool value)) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            auto current = static_cast<int>(uber_state.get());
            current = value ? current | 0b10 : current & ~0b10;
            uber_state.set(current);
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

        double convert_pedestal_state(app::SavePedestalUberState* state) {
            if (state == nullptr)
                return 0.0;

            auto pedestal = SavePedestalUberState::ReadStateFromStore(state);
            if (pedestal == nullptr)
                return 0.0;

            const auto active = static_cast<int>(pedestal->fields.IsTeleporterActive != 0);
            const auto save = static_cast<int>(pedestal->fields.HasGameBeenSaved != 0) << 1;
            return static_cast<double>(save | active);
        }

        app::UberID create_uber_id(int id) {
            app::UberID uber_id{};
            uber_id.monitor = nullptr;
            uber_id.klass = reinterpret_cast<app::UberID__Class*>(il2cpp::get_class("Moon", "UberID"));
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

        csharp_bridge::UberStateType resolve_type(app::IUberState* uber_state) {
            for (auto const& resolver : resolvers)
                if (il2cpp::is_assignable(uber_state, resolver.namezpace.c_str(), resolver.name.c_str()))
                    return resolver.type;

            return static_cast<csharp_bridge::UberStateType>(-1);
        }

        // Remove this when csharp is removed.
        void notify_uber_state_change(UberState state, double previous_value) {
            // TODO: Old multi code, remove eventually
            // csharp_bridge::UberStateType type;
            // if (state.group() == UberStateGroup::MultiVars)
            //     type = csharp_bridge::UberStateType::SerializedBooleanUberState;
            // else if (state.group() == UberStateGroup::RandoVirtual)
            //     type = csharp_bridge::UberStateType::SerializedFloatUberState;
            // else
            //     type = resolve_type(state.ptr());

            csharp_bridge::UberStateType type;
            if (state.group() == UberStateGroup::RandoVirtual)
                type = csharp_bridge::UberStateType::SerializedFloatUberState;
            else
                type = resolve_type(state.ptr());

            csharp_bridge::on_uber_state_applied(static_cast<int>(state.group()), state.state(), static_cast<uint8_t>(type), previous_value, state.get());
        }

        void initialize() {
            register_value_notify(notify_uber_state_change);
        }

        CALL_ON_INIT(initialize);
    } // namespace

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
        // Prevent changes that don't change anything.
        auto prev = get();
        if (prev != value && !ignore_intercept && intercept_change(*this, value))
            return;

        if (is_virtual_state(m_group, m_state))
            set_virtual_value(m_group, m_state, value);
        else {
            auto uber_state = ptr();
            if (!il2cpp::unity::is_valid(uber_state)) {
                trace(MessageType::Warning, 2, "uber_state", format("uber state (%d, %d) doesn't exist", m_group, m_state));
                return;
            }

            // TODO: Old multi code, remove eventually
            // if (m_group == UberStateGroup::MultiVars) // Handle multi group.
            // {
            //     int curr = static_cast<int>(prev);
            //     int8_t offset = m_state % 31;
            //     if (value > 0.1f)
            //         curr |= 1 << offset; // or if it's true
            //     else
            //         curr &= ~(1 << offset); // invert bit then and it
            //     SerializedIntUberState::set_Value(uber_state, static_cast<int>(curr));
            // }
            // else

            if (il2cpp::is_assignable(uber_state, "Moon", "SerializedBooleanUberState"))
                next::Moon::SerializedBooleanUberState::set_Value(reinterpret_cast<app::SerializedBooleanUberState*>(uber_state), value > 0.5);
            else if (il2cpp::is_assignable(uber_state, "Moon", "SerializedByteUberState"))
                next::Moon::SerializedByteUberState::set_Value(reinterpret_cast<app::SerializedByteUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "SerializedIntUberState"))
                next::Moon::SerializedIntUberState::set_Value(reinterpret_cast<app::SerializedIntUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "SerializedFloatUberState"))
                next::Moon::SerializedFloatUberState::set_Value(reinterpret_cast<app::SerializedFloatUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "BooleanUberState"))
                next::Moon::BooleanUberState::set_Value(reinterpret_cast<app::BooleanUberState*>(uber_state), value > 0.5);
            else if (il2cpp::is_assignable(uber_state, "Moon", "ByteUberState"))
                next::Moon::ByteUberState::set_Value(reinterpret_cast<app::ByteUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "IntUberState"))
                next::Moon::IntUberState::set_Value(reinterpret_cast<app::IntUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, "Moon", "FloatUberState"))
                next::Moon::FloatUberState::set_Value(reinterpret_cast<app::FloatUberState*>(uber_state), value);
            else if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState")) {
                const auto int_value = static_cast<unsigned int>(value);
                const auto is_teleporter_active = (int_value & 0b10u) != 0;
                const auto has_been_saved = (int_value & 0b01u) != 0;
                next::Moon::uberSerializationWisp::SavePedestalUberState::set_IsTeleporterActive(reinterpret_cast<app::SavePedestalUberState*>(uber_state), is_teleporter_active);
                next::Moon::uberSerializationWisp::SavePedestalUberState::set_HasGameBeenSaved(reinterpret_cast<app::SavePedestalUberState*>(uber_state), has_been_saved);
            } else {
                trace(MessageType::Warning, 2, "uber_state", format("unable to get value of uber state (%d, %d)", m_group, m_state));
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
            trace(MessageType::Warning, 2, "uber_state", format("uber state (%d, %d) doesn't exist", m_group, m_state));
            return 0.0;
        }

        // TODO: Old multi code, remove eventually
        // if (m_group == UberStateGroup::MultiVars)
        //     return static_cast<double>((SerializedIntUberState::get_Value(uber_state) >> (m_state % 31)) & 0b1);

        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedBooleanUberState"))
            return static_cast<double>(SerializedBooleanUberState::get_Value(reinterpret_cast<app::SerializedBooleanUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedByteUberState"))
            return static_cast<double>(SerializedByteUberState::get_Value(reinterpret_cast<app::SerializedByteUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedIntUberState"))
            return static_cast<double>(SerializedIntUberState::get_Value(reinterpret_cast<app::SerializedIntUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, "Moon", "SerializedFloatUberState"))
            return static_cast<double>(SerializedFloatUberState::get_Value(reinterpret_cast<app::SerializedFloatUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, "Moon", "BooleanUberState"))
            return static_cast<double>(BooleanUberState::get_Value(reinterpret_cast<app::BooleanUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, "Moon", "ByteUberState"))
            return static_cast<double>(ByteUberState::get_Value(reinterpret_cast<app::ByteUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, "Moon", "IntUberState"))
            return static_cast<double>(IntUberState::get_Value(reinterpret_cast<app::IntUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, "Moon", "FloatUberState"))
            return static_cast<double>(FloatUberState::get_Value(reinterpret_cast<app::FloatUberState*>(uber_state)));

        if (il2cpp::is_assignable(uber_state, "Moon.uberSerializationWisp", "SavePedestalUberState")) {
            auto is_teleporter_active = static_cast<uint32_t>(SavePedestalUberState::get_HasGameBeenSaved(reinterpret_cast<app::SavePedestalUberState*>(uber_state)));
            auto has_been_saved = static_cast<uint32_t>(SavePedestalUberState::get_HasGameBeenSaved(reinterpret_cast<app::SavePedestalUberState*>(uber_state)));
            auto value = is_teleporter_active | (has_been_saved << 1);
            return static_cast<double>(value);
        }

        trace(MessageType::Warning, 2, "uber_state", format("unable to get value of uber state (%d, %d)", m_group, m_state));
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
        // TODO: Old multi code, remove eventually
        // auto state = m_group == UberStateGroup::MultiVars ? m_state / 31 : m_state;

        auto group_id = create_uber_id(static_cast<int>(m_group));
        auto state_id = create_uber_id(m_state);
        return UberStateCollection::GetState(&group_id, &state_id);
    }

    void UberState::notify_changed(double prev) const {
        for (auto notifier : notifiers)
            notifier(*this, prev);
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

        auto instance = il2cpp::get_class<app::UberStateController__Class>("Moon", "UberStateController")->static_fields->m_currentStateValueStore;
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

    void register_value_notify(value_notify notify) {
        notifiers.push_back(notify);
    }

    void register_value_intercept(value_intercept intercept) {
        intercepts.push_back(intercept);
    }

    bool operator==(UberState const& a, UberState const& b) {
        return a.state() == b.state() && a.group() == b.group();
    }
} // namespace uber_states

// TODO: Remove everything below here when removing csharp.

INJECT_C_DLLEXPORT csharp_bridge::UberStateType get_uber_state_type(UberStateGroup group, int state) {
    if (uber_states::is_virtual_state(group, state))
        return csharp_bridge::UberStateType::SerializedFloatUberState;

    return uber_states::resolve_type(uber_states::UberState(group, state).ptr());
}

INJECT_C_DLLEXPORT void reset_uber_state_value_store() {
    uber_states::clear();
}

INJECT_C_DLLEXPORT bool get_uber_state_exists(UberStateGroup group, int state) {
    return uber_states::UberState(group, state).valid();
}

INJECT_C_DLLEXPORT double get_uber_state_value(UberStateGroup group, int state) {
    return uber_states::UberState(group, state).get();
}

INJECT_C_DLLEXPORT void set_uber_state_value(UberStateGroup group, int state, double value, bool ignore_intercept) {
    uber_states::UberState(group, state).set(value, ignore_intercept);
}

INJECT_C_DLLEXPORT int get_uber_state_name(UberStateGroup group, int state, char* buffer, int len) {
    auto str = uber_states::UberState(group, state).state_name();
    strcpy_s(buffer, len, str.c_str());
    return len < str.size() ? len : str.size();
}

INJECT_C_DLLEXPORT int get_uber_state_group_name(UberStateGroup group, int state, char* buffer, int len) {
    auto str = uber_states::UberState(group, state).group_name();
    strcpy_s(buffer, len, str.c_str());
    return len < str.size() ? len : str.size();
}

INJECT_C_DLLEXPORT void refresh_uber_state(UberStateGroup group, int state) {
    uber_states::UberState(group, state).apply();
}

#pragma pack(push, 1)
struct UberStateDef {
    int state_id;
    UberStateGroup group_id;
    const char* state_name;
    const char* group_name;
    csharp_bridge::UberStateType type;
};
#pragma pack(pop)

std::vector<std::string> temp_string_vector;
std::vector<UberStateDef> temp_vector;
INJECT_C_DLLEXPORT UberStateDef* get_uber_states(int& size) {
    temp_string_vector.clear();
    temp_vector.clear();

    auto collection = il2cpp::get_class<app::UberStateCollection__Class>("Moon", "UberStateCollection")
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
