#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/api/uber_states/uber_state_virtual.h>
#include <Core/core.h>
#include <Core/enums/uber_state.h>
#include <Core/property/reactivity.h>
#include <Core/settings.h>
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
#include <Modloader/app/methods/Moon/CountUberState.h>
#include <Modloader/app/methods/Moon/ConditionUberState.h>
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
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <vector>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::Moon;
using namespace app::classes::Moon::uberSerializationWisp;

namespace core::api::uber_states {
    namespace {
        std::unordered_set<UberState> current_intercepts;

        UberStateType class_to_type(const void* klass) {
            static std::unordered_map<const void*, UberStateType> class_to_type_map{
                {types::SerializedBooleanUberState::get_class(), UberStateType::SerializedBooleanUberState},
                {types::SerializedByteUberState::get_class(),    UberStateType::SerializedByteUberState   },
                {types::SerializedIntUberState::get_class(),     UberStateType::SerializedIntUberState    },
                {types::SerializedFloatUberState::get_class(),   UberStateType::SerializedFloatUberState  },
                {types::BooleanUberState::get_class(),           UberStateType::BooleanUberState          },
                {types::ByteUberState::get_class(),              UberStateType::ByteUberState             },
                {types::IntUberState::get_class(),               UberStateType::IntUberState              },
                {types::FloatUberState::get_class(),             UberStateType::FloatUberState            },
                {types::CountUberState::get_class(),             UberStateType::CountUberState            },
                {types::SavePedestalUberState::get_class(),      UberStateType::SavePedestalUberState     },
                {types::ConditionUberState::get_class(),         UberStateType::ConditionUberState        },
                {types::PlayerUberStateDescriptor::get_class(),  UberStateType::PlayerUberStateDescriptor },
            };

            const auto type = class_to_type_map.find(klass);
            return type != class_to_type_map.end() ? type->second : UberStateType::Unknown;
        }

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

        IL2CPP_INTERCEPT(
            Moon::uberSerializationWisp::SavePedestalUberState,
            void,
            set_IsTeleporterActive,
            (app::SavePedestalUberState * this_ptr, bool value)
        ) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr));
            uber_state.set(value ? 1.0 : 0.0);
        }

        IL2CPP_INTERCEPT(GameMapSavePedestal, void, set_IsTeleporterActive, (app::GameMapSavePedestal * this_ptr, bool value)) {
            SavePedestalUberState::set_IsTeleporterActive(this_ptr->fields.SeralizedState, value);
            SavePedestalController::OnTeleporterActivationStateChanged();
        }

        IL2CPP_INTERCEPT(
            Moon::UberStateVisualization::SerializedBoolUberStateWrapper,
            void,
            SetValue,
            (app::SerializedBoolUberStateWrapper * this_ptr, bool value)
        ) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(
            Moon::UberStateVisualization::SerializedByteUberStateWrapper,
            void,
            SetValue,
            (app::SerializedByteUberStateWrapper * this_ptr, uint8_t value)
        ) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(
            Moon::UberStateVisualization::SerializedFloatUberStateWrapper,
            void,
            SetValue,
            (app::SerializedFloatUberStateWrapper * this_ptr, float value)
        ) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        IL2CPP_INTERCEPT(
            Moon::UberStateVisualization::SerializedIntUberStateWrapper,
            void,
            SetValue,
            (app::SerializedIntUberStateWrapper * this_ptr, int value)
        ) {
            auto uber_state = UberState(reinterpret_cast<app::IUberState*>(this_ptr->fields.m_state));
            uber_state.set(value);
        }

        app::UberID create_uber_id(const int id) {
            app::UberID uber_id{};
            uber_id.monitor = nullptr;
            uber_id.klass = types::UberID::get_class();
            uber_id.fields.m_id = id;
            return uber_id;
        }

        bool collection_initialized() { return UberStateCollection::get_Instance != nullptr && il2cpp::unity::is_valid(UberStateCollection::get_Instance()); }

        constexpr bool VALIDATE_UBER_STATES_ON_CREATION = true;
    } // namespace

    UberState::UberState() :
        m_type(std::nullopt),
        m_group(UberStateGroup::Invalid),
        m_state(0) {}

    UberState::UberState(const int group, const int state) :
        m_type(std::nullopt),
        m_group(static_cast<UberStateGroup>(group)),
        m_state(state) {
        if (VALIDATE_UBER_STATES_ON_CREATION && collection_initialized() && !valid()) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
        }
    }

    UberState::UberState(app::IUberState* state) :
        m_type(std::nullopt),
        m_group(static_cast<UberStateGroup>(il2cpp::invoke<app::UberID>(state, "get_GroupID")->fields.m_id)),
        m_state(il2cpp::invoke<app::UberID>(state, "get_StateID")->fields.m_id) {
        if (VALIDATE_UBER_STATES_ON_CREATION && collection_initialized() && !valid()) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
        }
    }

    UberState::UberState(const UberStateGroup group, const int state) :
        m_type(std::nullopt),
        m_group(group),
        m_state(state) {
        if (VALIDATE_UBER_STATES_ON_CREATION && collection_initialized() && !valid()) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
        }
    }

    UberState::UberState(const UberStateGroup group, const app::AbilityType__Enum state) :
        m_type(std::nullopt),
        m_group(group),
        m_state(static_cast<int>(state)) {
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


    void UberState::set(const double value) const {
        if (type() == UberStateType::Unknown) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist or is an unknown type", static_cast<int>(m_group), m_state));
            return;
        }

        if (readonly()) {
            warn("uber_state", std::format("tried to set readonly uber state ({}|{}) to '{}'", static_cast<int>(m_group), m_state, value));
            return;
        }

        // Prevent changes that don't change anything.
        // If the uber state currently has a volatile value set, we always
        // want to run the setter. Running the setter removes the volatile value.

        const auto prev = inner_get();
        if (prev == value && !has_volatile_value()) {
            return;
        }

        if (!current_intercepts.contains(*this)) {
            current_intercepts.emplace(*this);
            const UberStateCallbackParams params{*this, value};
            auto result = interception_bus().trigger_event(params);
            current_intercepts.erase(*this);
            if (std::ranges::find(result, true) != result.end()) {
                return;
            }
        }

        if (is_virtual_state(m_group, m_state)) {
            set_virtual_value(m_group, m_state, value);
        } else {
            const auto uber_state = ptr();
            if (settings::dev_mode()) {
                if (prev != value) {
                    const auto text = std::format("uber state ({}|{}) set to {} from {}", static_cast<int>(m_group), m_state, value, prev);
                    info("uber_state", text);
                } else if (has_volatile_value()) {
                    const auto text = std::format(
                        "uber state ({}|{}) set to {} because it had a volatile value set", static_cast<int>(m_group), m_state, value
                    );
                    info("uber_state", text);
                }
            }

            switch (type()) {
                case UberStateType::BooleanUberState:
                    next::Moon::BooleanUberState::set_Value(reinterpret_cast<app::BooleanUberState*>(uber_state), value > 0.5);
                    break;
                case UberStateType::ByteUberState:
                    next::Moon::ByteUberState::set_Value(reinterpret_cast<app::ByteUberState*>(uber_state), static_cast<uint8_t>(value));
                    break;
                case UberStateType::IntUberState:
                    next::Moon::IntUberState::set_Value(reinterpret_cast<app::IntUberState*>(uber_state), static_cast<int>(value));
                    break;
                case UberStateType::FloatUberState:
                    next::Moon::FloatUberState::set_Value(reinterpret_cast<app::FloatUberState*>(uber_state), static_cast<float>(value));
                    break;
                case UberStateType::SerializedBooleanUberState:
                    next::Moon::SerializedBooleanUberState::set_Value(reinterpret_cast<app::SerializedBooleanUberState*>(uber_state), value > 0.5);
                    break;
                case UberStateType::SerializedFloatUberState:
                    next::Moon::SerializedFloatUberState::set_Value(reinterpret_cast<app::SerializedFloatUberState*>(uber_state), static_cast<float>(value));
                    break;
                case UberStateType::SerializedIntUberState:
                    next::Moon::SerializedIntUberState::set_Value(reinterpret_cast<app::SerializedIntUberState*>(uber_state), static_cast<int>(value));
                    break;
                case UberStateType::SerializedByteUberState:
                    next::Moon::SerializedByteUberState::set_Value(reinterpret_cast<app::SerializedByteUberState*>(uber_state), static_cast<uint8_t>(value));
                    break;
                case UberStateType::SavePedestalUberState:
                    next::Moon::uberSerializationWisp::SavePedestalUberState::set_IsTeleporterActive(
                        reinterpret_cast<app::SavePedestalUberState*>(uber_state), value > 0.5
                    );
                    break;
                case UberStateType::CountUberState:
                case UberStateType::ConditionUberState:
                case UberStateType::PlayerUberStateDescriptor:
                case UberStateType::VirtualUberState:
                case UberStateType::Unknown:
                default:
                    warn("uber_state", std::format("unable to set value of uber state ({}|{})", static_cast<int>(m_group), m_state));
                    return;
            }
        }

        const UberStateCallbackParams params{
            *this,
            prev,
            value,
        };

        single_notification_bus().trigger_event(*this, params);
        notification_bus().trigger_event(params);
        notify_changed(reactivity::UberStateDependency{static_cast<int>(m_group), m_state});
    }

    double UberState::inner_get() const {
        if (type() == UberStateType::Unknown) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist or is an unknown type", static_cast<int>(m_group), m_state));
            return 0.0;
        }

        notify_used(reactivity::UberStateDependency{static_cast<int>(m_group), m_state});
        switch (type()) {
            case UberStateType::VirtualUberState:
                return get_virtual_value(m_group, m_state);
            case UberStateType::BooleanUberState:
                return BooleanUberState::get_Value(reinterpret_cast<app::BooleanUberState*>(ptr()));
            case UberStateType::ByteUberState:
                return ByteUberState::get_Value(reinterpret_cast<app::ByteUberState*>(ptr()));
            case UberStateType::IntUberState:
                return IntUberState::get_Value(reinterpret_cast<app::IntUberState*>(ptr()));
            case UberStateType::FloatUberState:
                return FloatUberState::get_Value(reinterpret_cast<app::FloatUberState*>(ptr()));
            case UberStateType::SerializedBooleanUberState:
                return SerializedBooleanUberState::get_Value(reinterpret_cast<app::SerializedBooleanUberState*>(ptr()));
            case UberStateType::SerializedFloatUberState:
                return SerializedFloatUberState::get_Value(reinterpret_cast<app::SerializedFloatUberState*>(ptr()));
            case UberStateType::SerializedIntUberState:
                return SerializedIntUberState::get_Value(reinterpret_cast<app::SerializedIntUberState*>(ptr()));
            case UberStateType::SerializedByteUberState:
                return SerializedByteUberState::get_Value(reinterpret_cast<app::SerializedByteUberState*>(ptr()));
            case UberStateType::SavePedestalUberState:
                return SavePedestalUberState::get_IsTeleporterActive(reinterpret_cast<app::SavePedestalUberState*>(ptr())) ? 1.0 : 0.0;
            case UberStateType::CountUberState:
                return CountUberState::get_Value(reinterpret_cast<app::CountUberState*>(ptr()));
            case UberStateType::ConditionUberState:
                return ConditionUberState::get_Value(reinterpret_cast<app::ConditionUberState*>(ptr()));
            case UberStateType::PlayerUberStateDescriptor:
            case UberStateType::Unknown:
            default:
                warn("uber_state", std::format("unable to get value of uber state ({}|{})", static_cast<int>(m_group), m_state));
                return 0.0;
        }
    }

    bool UberState::has_volatile_value() const {
        if (is_virtual_state(m_group, m_state)) {
            return false;
        }

        const auto uber_state = ptr();
        if (!il2cpp::unity::is_valid(uber_state)) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist", static_cast<int>(m_group), m_state));
            return false;
        }

        switch (type()) {
            case UberStateType::BooleanUberState:
                return BooleanUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::BooleanUberState*>(uber_state)).has_value;
            case UberStateType::ByteUberState:
                return ByteUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::ByteUberState*>(uber_state)).has_value;
            case UberStateType::IntUberState:
                return IntUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::IntUberState*>(uber_state)).has_value;
            case UberStateType::FloatUberState:
                return FloatUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::FloatUberState*>(uber_state)).has_value;
            case UberStateType::SerializedBooleanUberState:
                return SerializedBooleanUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::SerializedBooleanUberState*>(uber_state)).has_value;
            case UberStateType::SerializedFloatUberState:
                return SerializedFloatUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::SerializedFloatUberState*>(uber_state)).has_value;
            case UberStateType::SerializedIntUberState:
                return SerializedIntUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::SerializedIntUberState*>(uber_state)).has_value;
            case UberStateType::SerializedByteUberState:
                return SerializedByteUberState::get_VolitileGenericOverrideValue(reinterpret_cast<app::SerializedByteUberState*>(uber_state)).has_value;
            case UberStateType::SavePedestalUberState:
            case UberStateType::CountUberState:
            case UberStateType::ConditionUberState:
            case UberStateType::PlayerUberStateDescriptor:
            case UberStateType::VirtualUberState:
            case UberStateType::Unknown:
            default:
                return false;
        }
    }

    std::string UberState::state_name() const {
        if (is_virtual_state(m_group, m_state)) {
            return get_virtual_name(m_group, m_state);
        }

        const auto uber_state = ptr();
        if (uber_state == nullptr) {
            return "Null";
        }

        const auto csstring = il2cpp::invoke<app::String>(uber_state, "get_Name");
        return il2cpp::convert_csstring(csstring);
    }

    std::string UberState::group_name() const {
        if (is_virtual_state(m_group, m_state)) {
            return custom_uber_state_group_name(m_group).value_or(std::string("unknownVirtual"));
        }

        const auto uber_state = ptr();

        if (uber_state == nullptr) {
            return "Null";
        }

        const auto group = il2cpp::invoke<app::IUberStateGroup>(uber_state, "get_UberStateGroup");
        const auto csstring = il2cpp::invoke<app::String>(group, "get_GroupName");
        return il2cpp::convert_csstring(csstring);
    }

    void UberState::apply() const { UberStateController::Apply_2(ptr(), app::UberStateApplyContext__Enum::ValueChanged); }

    app::IUberState* UberState::ptr() const {
        auto group_id = create_uber_id(static_cast<int>(m_group));
        auto state_id = create_uber_id(m_state);
        return UberStateCollection::GetState(&group_id, &state_id);
    }

    bool operator==(UberState const& a, UberState const& b) { return a.state() == b.state() && a.group() == b.group(); }

    std::string UberState::string_value() const {
        if (type() == UberStateType::Unknown) {
            warn("uber_state", std::format("uber state ({}|{}) doesn't exist or is an unknown type", static_cast<int>(m_group), m_state));
            return "Unknown";
        }

        switch (value_type()) {
            case ValueType::Boolean:
                return get() > 0.5 ? "true" : "false";
            case ValueType::Byte:
            case ValueType::Integer:
                return std::to_string(get<int>());
            case ValueType::Float:
                return std::format("{}", get<double>());
            case ValueType::Unknown:
            default:
                warn("uber_state", std::format("unable to get value of uber state ({}|{})", static_cast<int>(m_group), m_state));
                return "Unknown";
        }
    }

    UberStateType UberState::type() const {
        if (m_type.has_value()) {
            return m_type.value();
        }

        if (is_virtual_state(m_group, m_state)) {
            m_type = UberStateType::VirtualUberState;
        } else {
            const auto uber_state = ptr();
            if (il2cpp::unity::is_valid(uber_state) && collection_initialized()) {
                m_type = class_to_type(uber_state->klass);
            } else {
                return UberStateType::Unknown;
            }
        }

        return m_type.value();
    }

    ValueType UberState::value_type() const {
        switch (type()) {
            case UberStateType::VirtualUberState:
                return get_virtual_type(m_group, m_state);
            case UberStateType::FloatUberState:
            case UberStateType::SerializedFloatUberState:
                return ValueType::Float;
            case UberStateType::ByteUberState:
            case UberStateType::SerializedByteUberState:
                return ValueType::Byte;
            case UberStateType::CountUberState:
            case UberStateType::IntUberState:
            case UberStateType::SerializedIntUberState:
                return ValueType::Integer;
            case UberStateType::BooleanUberState:
            case UberStateType::SerializedBooleanUberState:
            case UberStateType::SavePedestalUberState:
            case UberStateType::ConditionUberState:
                return ValueType::Boolean;
            case UberStateType::PlayerUberStateDescriptor:
            case UberStateType::Unknown:
            default:
                return ValueType::Unknown;
        }
    }

    bool UberState::readonly() const {
        if (!collection_initialized()) {
            return false;
        }

        switch (type()) {
            case UberStateType::VirtualUberState:
                return get_virtual_readonly(m_group, m_state);
            case UberStateType::CountUberState:
            case UberStateType::ConditionUberState:
            case UberStateType::PlayerUberStateDescriptor:
            case UberStateType::Unknown:
                return true;
            case UberStateType::FloatUberState:
            case UberStateType::SerializedFloatUberState:
            case UberStateType::ByteUberState:
            case UberStateType::SerializedByteUberState:
            case UberStateType::IntUberState:
            case UberStateType::SerializedIntUberState:
            case UberStateType::BooleanUberState:
            case UberStateType::SerializedBooleanUberState:
            case UberStateType::SavePedestalUberState:
            default:
return false;
        }
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
