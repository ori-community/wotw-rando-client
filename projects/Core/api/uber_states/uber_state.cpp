#include <api/game/player.h>
#include <api/scenes/scene_load.h>
#include <api/uber_states/uber_state.h>
#include <api/uber_states/uber_state_handlers.h>
#include <api/uber_states/uber_state_virtual.h>
#include <core.h>
#include <enums/uber_state.h>
#include <settings.h>

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
#include <Modloader/app/methods/Moon/UberStateVisualization/SerializedBoolUberStateWrapper.h>
#include <Modloader/app/methods/Moon/UberStateVisualization/SerializedByteUberStateWrapper.h>
#include <Modloader/app/methods/Moon/UberStateVisualization/SerializedFloatUberStateWrapper.h>
#include <Modloader/app/methods/Moon/UberStateVisualization/SerializedIntUberStateWrapper.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/SavePedestalUberState.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/types/BooleanUberState.h>
#include <Modloader/app/types/ByteUberState.h>
#include <Modloader/app/types/CountUberState.h>
#include <Modloader/app/types/ConditionUberState.h>
#include <Modloader/app/types/FloatUberState.h>
#include <Modloader/app/types/IntUberState.h>
#include <Modloader/app/types/PlayerUberStateDescriptor.h>
#include <Modloader/app/types/SavePedestalUberState.h>
#include <Modloader/app/types/SerializedBooleanUberState.h>
#include <Modloader/app/types/SerializedByteUberState.h>
#include <Modloader/app/types/SerializedFloatUberState.h>
#include <Modloader/app/types/SerializedIntUberState.h>
#include <Modloader/app/types/UberID.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <vector>

#include "property/reactivity.h"

using namespace modloader;
using namespace app::classes;
using namespace app::classes::Moon;
using namespace app::classes::Moon::uberSerializationWisp;

namespace core::api::uber_states {
    namespace {
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

        bool collection_initialized() {
            return UberStateCollection::get_Instance != nullptr && il2cpp::unity::is_valid(UberStateCollection::get_Instance());
        }

        constexpr bool VALIDATE_UBER_STATES_ON_CREATION = true;
    } // namespace

    UberState::UberState()
            : m_group(UberStateGroup::Invalid), m_state(0) {}

    UberState::UberState(int group, int state)
            : m_group(static_cast<UberStateGroup>(group)), m_state(state) {
        if (VALIDATE_UBER_STATES_ON_CREATION && collection_initialized() && !valid()) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
        }
    }

    UberState::UberState(app::IUberState* state)
    : m_group(static_cast<UberStateGroup>(il2cpp::invoke<app::UberID>(state, "get_GroupID")->fields.m_id)), m_state(il2cpp::invoke<app::UberID>(state, "get_StateID")->fields.m_id) {
        if (VALIDATE_UBER_STATES_ON_CREATION && collection_initialized() && !valid()) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
        }
    }

    UberState::UberState(UberStateGroup group, int state)
            : m_group(group), m_state(state)  {
        if (VALIDATE_UBER_STATES_ON_CREATION && collection_initialized() && !valid()) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
        }
    }

    UberState::UberState(UberStateGroup group, app::AbilityType__Enum state)
    : m_group(group), m_state(static_cast<int>(state))  {
        if (VALIDATE_UBER_STATES_ON_CREATION && collection_initialized() && !valid()) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
        }
    }

    bool UberState::valid() const {
        if (m_group == UberStateGroup::Invalid || m_state < 0) {
            return false;
        }

        if (is_virtual_state(m_group, m_state)) {
            return true;
        }

        return ptr() != nullptr;
    }

    void UberState::set(double value, bool ignore_intercept, bool ignore_notify) const {
        // Prevent changes that don't change anything.
        // If the uber state currently has a volatile value set, we always
        // want to run the setter. Running the setter removes the volatile value.

        const auto prev = inner_get();

        if (prev == value && !has_volatile_value()) {
            return;
        }

        if (!ignore_intercept) {
            UberStateCallbackParams params{
                *this,
                value
            };

            auto result = interception_bus().trigger_event(params);
            if (std::find(result.begin(), result.end(), true) != result.end()) {
                return;
            }
        }

        if (is_virtual_state(m_group, m_state)) {
            set_virtual_value(m_group, m_state, value);
        } else {
            auto uber_state = ptr();
            if (!il2cpp::unity::is_valid(uber_state)) {
                warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
                return;
            }

            if (settings::dev_mode()) {
                if (prev != value) {
                    const auto text = std::format("uber state ({}|{}) set to {} from {}", static_cast<int>(m_group), m_state, value, prev);
                    modloader::info("uber_state", text);
                } else if (has_volatile_value()) {
                    const auto text = std::format("uber state ({}|{}) set to {} because it had a volatile value set", static_cast<int>(m_group), m_state, value);
                    modloader::info("uber_state", text);
                }
            }

            // TODO: Change this into something better then a series of if checks.
            if (il2cpp::is_assignable(uber_state, types::SerializedBooleanUberState::get_class())) {
                next::Moon::SerializedBooleanUberState::set_Value(reinterpret_cast<app::SerializedBooleanUberState*>(uber_state), value > 0.5);
            } else if (il2cpp::is_assignable(uber_state, types::SerializedByteUberState::get_class())) {
                next::Moon::SerializedByteUberState::set_Value(reinterpret_cast<app::SerializedByteUberState*>(uber_state), static_cast<uint8_t>(value));
            } else if (il2cpp::is_assignable(uber_state, types::SerializedIntUberState::get_class())) {
                next::Moon::SerializedIntUberState::set_Value(reinterpret_cast<app::SerializedIntUberState*>(uber_state), static_cast<int>(value));
            } else if (il2cpp::is_assignable(uber_state, types::SerializedFloatUberState::get_class())) {
                next::Moon::SerializedFloatUberState::set_Value(reinterpret_cast<app::SerializedFloatUberState*>(uber_state), static_cast<float>(value));
            } else if (il2cpp::is_assignable(uber_state, types::BooleanUberState::get_class())) {
                next::Moon::BooleanUberState::set_Value(reinterpret_cast<app::BooleanUberState*>(uber_state), value > 0.5);
            } else if (il2cpp::is_assignable(uber_state, types::ByteUberState::get_class())) {
                next::Moon::ByteUberState::set_Value(reinterpret_cast<app::ByteUberState*>(uber_state), static_cast<uint8_t>(value));
            } else if (il2cpp::is_assignable(uber_state, types::IntUberState::get_class())) {
                next::Moon::IntUberState::set_Value(reinterpret_cast<app::IntUberState*>(uber_state), static_cast<int>(value));
            } else if (il2cpp::is_assignable(uber_state, types::FloatUberState::get_class())) {
                next::Moon::FloatUberState::set_Value(reinterpret_cast<app::FloatUberState*>(uber_state), static_cast<float>(value));
            } else if (il2cpp::is_assignable(uber_state, types::SavePedestalUberState::get_class())) {
                next::Moon::uberSerializationWisp::SavePedestalUberState::set_IsTeleporterActive(reinterpret_cast<app::SavePedestalUberState*>(uber_state), value > 0.5);
            } else {
                warn("uber_state", std::format("unable to get value of uber state ({}|{})", static_cast<int>(m_group), m_state));
                return;
            }
        }

        core::reactivity::notify_changed(reactivity::UberStateDependency { static_cast<int>(m_group), m_state });

        if (!ignore_notify) {
            UberStateCallbackParams params{
                *this,
                prev
            };

            single_notification_bus().trigger_event(*this, params);
            notification_bus().trigger_event(params);
        }
    }

    double UberState::inner_get() const {
        core::reactivity::notify_used(reactivity::UberStateDependency { static_cast<int>(m_group), m_state });

        if (is_virtual_state(m_group, m_state)) {
            return get_virtual_value(m_group, m_state);
        }

        // TODO: Change this into something better then a series of if checks.
        auto uber_state = ptr();
        if (!il2cpp::unity::is_valid(uber_state)) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
            return 0.0;
        } else if (il2cpp::is_assignable(uber_state, types::SerializedBooleanUberState::get_class())) {
            return static_cast<double>(SerializedBooleanUberState::get_Value(reinterpret_cast<app::SerializedBooleanUberState*>(uber_state)));
        } else if (il2cpp::is_assignable(uber_state, types::SerializedByteUberState::get_class())) {
            return static_cast<double>(SerializedByteUberState::get_Value(reinterpret_cast<app::SerializedByteUberState*>(uber_state)));
        } else if (il2cpp::is_assignable(uber_state, types::SerializedIntUberState::get_class())) {
            return static_cast<double>(SerializedIntUberState::get_Value(reinterpret_cast<app::SerializedIntUberState*>(uber_state)));
        } else if (il2cpp::is_assignable(uber_state, types::SerializedFloatUberState::get_class())) {
            return static_cast<double>(SerializedFloatUberState::get_Value(reinterpret_cast<app::SerializedFloatUberState*>(uber_state)));
        } else if (il2cpp::is_assignable(uber_state, types::BooleanUberState::get_class())) {
            return static_cast<double>(BooleanUberState::get_Value(reinterpret_cast<app::BooleanUberState*>(uber_state)));
        } else if (il2cpp::is_assignable(uber_state, types::ByteUberState::get_class())) {
            return static_cast<double>(ByteUberState::get_Value(reinterpret_cast<app::ByteUberState*>(uber_state)));
        } else if (il2cpp::is_assignable(uber_state, types::IntUberState::get_class())) {
            return static_cast<double>(IntUberState::get_Value(reinterpret_cast<app::IntUberState*>(uber_state)));
        } else if (il2cpp::is_assignable(uber_state, types::FloatUberState::get_class())) {
            return static_cast<double>(FloatUberState::get_Value(reinterpret_cast<app::FloatUberState*>(uber_state)));
        } else if (il2cpp::is_assignable(uber_state, types::SavePedestalUberState::get_class())) {
            return SavePedestalUberState::get_IsTeleporterActive(reinterpret_cast<app::SavePedestalUberState*>(uber_state)) ? 1.0 : 0.0;
        }

        warn("uber_state", std::format("unable to get value of uber state ({}|{})", static_cast<int>(m_group), m_state));
        return 0.0;
    }

    bool UberState::has_volatile_value() const {
        if (is_virtual_state(m_group, m_state)) {
            return false;
        }

        auto uber_state = ptr();
        if (!il2cpp::unity::is_valid(uber_state)) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
            return 0.0;
        } else if (il2cpp::is_assignable(uber_state, types::SerializedBooleanUberState::get_class())) {
            return SerializedBooleanUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::SerializedBooleanUberState*>(uber_state)).has_value;
        } else if (il2cpp::is_assignable(uber_state, types::SerializedByteUberState::get_class())) {
            return SerializedByteUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::SerializedByteUberState*>(uber_state)).has_value;
        } else if (il2cpp::is_assignable(uber_state, types::SerializedIntUberState::get_class())) {
            return SerializedIntUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::SerializedIntUberState*>(uber_state)).has_value;
        } else if (il2cpp::is_assignable(uber_state, types::SerializedFloatUberState::get_class())) {
            return SerializedFloatUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::SerializedFloatUberState*>(uber_state)).has_value;
        } else if (il2cpp::is_assignable(uber_state, types::BooleanUberState::get_class())) {
            return BooleanUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::BooleanUberState*>(uber_state)).has_value;
        } else if (il2cpp::is_assignable(uber_state, types::ByteUberState::get_class())) {
            return ByteUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::ByteUberState*>(uber_state)).has_value;
        } else if (il2cpp::is_assignable(uber_state, types::IntUberState::get_class())) {
            return IntUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::IntUberState*>(uber_state)).has_value;
        } else if (il2cpp::is_assignable(uber_state, types::FloatUberState::get_class())) {
            return FloatUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::FloatUberState*>(uber_state)).has_value;
        }

        return false;
    }

    std::string UberState::state_name() const {
        if (is_virtual_state(m_group, m_state)) {
            return get_virtual_name(m_group, m_state);
        }

        auto uber_state = ptr();
        if (uber_state == nullptr) {
            return "Null";
        }

        auto csstring = il2cpp::invoke<app::String>(uber_state, "get_Name");
        return il2cpp::convert_csstring(csstring);
    }

    std::string UberState::group_name() const {
        if (is_virtual_state(m_group, m_state)) {
            return get_virtual_group_name(m_group);
        }

        auto uber_state = ptr();
        if (uber_state == nullptr) {
            return "Null";
        }

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

    bool operator==(UberState const& a, UberState const& b) {
        return a.state() == b.state() && a.group() == b.group();
    }

    std::string UberState::string_value() const {
        auto uber_state = ptr();
        if (!il2cpp::unity::is_valid(uber_state)) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
            return "Unknown";
        } else if (
            il2cpp::is_assignable(uber_state, types::SerializedBooleanUberState::get_class()) ||
            il2cpp::is_assignable(uber_state, types::BooleanUberState::get_class()) ||
            il2cpp::is_assignable(uber_state, types::SavePedestalUberState::get_class())
        ) {
            return get() > 0.5 ? "true" : "false";
        } else if (
            il2cpp::is_assignable(uber_state, types::SerializedByteUberState::get_class()) ||
            il2cpp::is_assignable(uber_state, types::SerializedIntUberState::get_class()) ||
            il2cpp::is_assignable(uber_state, types::ByteUberState::get_class()) ||
            il2cpp::is_assignable(uber_state, types::IntUberState::get_class())
        ) {
            return std::to_string(get<int>());
        } else if (
            il2cpp::is_assignable(uber_state, types::SerializedFloatUberState::get_class()) ||
            il2cpp::is_assignable(uber_state, types::FloatUberState::get_class())
        ) {
            return std::format("{}", get<double>());
        }

        return "Unknown";
    }

    UberStateType UberState::type() const {
        const auto uber_state = ptr();
        if (uber_state->klass == static_cast<void*>(types::BooleanUberState::get_class())) {
            return UberStateType::BooleanUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::ByteUberState::get_class())) {
            return UberStateType::ByteUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::IntUberState::get_class())) {
            return UberStateType::IntUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::SerializedBooleanUberState::get_class())) {
            return UberStateType::SerializedBooleanUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::SerializedFloatUberState::get_class())) {
            return UberStateType::SerializedFloatUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::SerializedIntUberState::get_class())) {
            return UberStateType::SerializedIntUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::SerializedByteUberState::get_class())) {
            return UberStateType::SerializedByteUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::CountUberState::get_class())) {
            return UberStateType::CountUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::SavePedestalUberState::get_class())) {
            return UberStateType::SavePedestalUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::ConditionUberState::get_class())) {
            return UberStateType::ConditionUberState;
        }
        if (uber_state->klass == static_cast<void*>(types::PlayerUberStateDescriptor::get_class())) {
            return UberStateType::PlayerUberStateDescriptor;
        }

        return UberStateType::Unknown;
    }

    std::string UberState::to_string(const bool use_names, const std::optional<double> previous_value, std::optional<double> current_value) const {
        return std::format(
            "({}|{}) = {}",
            use_names ? group_name() : std::to_string(group_int()),
            use_names ? state_name() : std::to_string(state()),
            current_value.has_value() ? current_value.value() : get(),
            previous_value.has_value() ? std::format(" (was {})", previous_value.value()) : ""
        );
    }
} // namespace core::api::uber_states
