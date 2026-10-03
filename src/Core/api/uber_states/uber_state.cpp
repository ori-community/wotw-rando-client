#include <Common/event_bus.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_virtual.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/GameMapSavePedestal.h>
#include <Modloader/app/methods/Moon/BooleanUberState.h>
#include <Modloader/app/methods/Moon/ByteUberState.h>
#include <Modloader/app/methods/Moon/ConditionUberState.h>
#include <Modloader/app/methods/Moon/CountUberState.h>
#include <Modloader/app/methods/Moon/FloatUberState.h>
#include <Modloader/app/methods/Moon/ISerializedUberStateExtension.h>
#include <Modloader/app/methods/Moon/IntUberState.h>
#include <Modloader/app/methods/Moon/SerializedBooleanUberState.h>
#include <Modloader/app/methods/Moon/SerializedByteUberState.h>
#include <Modloader/app/methods/Moon/SerializedFloatUberState.h>
#include <Modloader/app/methods/Moon/SerializedIntUberState.h>
#include <Modloader/app/methods/Moon/UberStateCollection.h>
#include <Modloader/app/methods/Moon/UberStateController.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/SavePedestalUberState.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/types/BooleanUberState.h>
#include <Modloader/app/types/ByteUberState.h>
#include <Modloader/app/types/ConditionUberState.h>
#include <Modloader/app/types/CountUberState.h>
#include <Modloader/app/types/FloatUberState.h>
#include <Modloader/app/types/IUberState.h>
#include <Modloader/app/types/IntUberState.h>
#include <Modloader/app/types/SavePedestalUberState.h>
#include <Modloader/app/types/SerializedBooleanUberState.h>
#include <Modloader/app/types/SerializedByteUberState.h>
#include <Modloader/app/types/SerializedFloatUberState.h>
#include <Modloader/app/types/SerializedIntUberState.h>
#include <Modloader/app/types/UberID.h>
#include <Modloader/app/types/UberStateGroup.h>
#include <cassert>


namespace core::api::uber_states {
    using namespace app::classes;

    common::EventBus<BeforeUberStateChangedParameters&, UntypedUberId>& before_uber_state_changed() {
        static common::EventBus<BeforeUberStateChangedParameters&, UntypedUberId> event_bus;
        return event_bus;
    }

    common::EventBus<void, UntypedUberId>& on_uber_state_changed() {
        static common::EventBus<void, UntypedUberId> event_bus;
        return event_bus;
    }

    common::EventBus<UntypedUberId>& on_any_uber_state_changed() {
        static common::EventBus<UntypedUberId> event_bus;
        return event_bus;
    }

    void apply_uber_state(app::IUberState* native_ptr) {
        Moon::UberStateController::Apply_2(native_ptr, app::UberStateApplyContext__Enum::ValueChanged);
    }

    namespace {
        template <const UberStateType ID_TYPE>
        BeforeUberStateChangedParameters before_uber_state_set(const UberId<ID_TYPE>& id, typename UberId<ID_TYPE>::value_t new_value) {
            BeforeUberStateChangedParameters parameters(static_cast<double>(new_value));
            before_uber_state_changed().trigger_event(UntypedUberId(id), parameters);
            return parameters;
        }

        template <const UberStateType ID_TYPE>
        void on_uber_state_set(const UberId<ID_TYPE>& id) {
            on_any_uber_state_changed().trigger_event(UntypedUberId(id));
            on_uber_state_changed().trigger_event(UntypedUberId(id));
            reactivity::notify_changed(reactivity::UberStateDependency(id));
        }

        template <const UberStateType ID_TYPE>
        void on_uber_state_get(const UberId<ID_TYPE>& id) {
            reactivity::notify_used(reactivity::UberStateDependency(id));
        }

        auto ignore_uber_state_extension = false;

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::SerializedBooleanUberState, set_Value, app::SerializedBooleanUberState* this_ptr, bool value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            const auto id = UberId<UberStateType::SerializedBooleanUberState>(
                this_ptr->fields.Group->fields._.m_id->fields.m_id,
                this_ptr->fields._.m_id->fields.m_id
            );

            if (get_uber_state_value(id, this_ptr) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::SerializedBooleanUberState::set_Value(this_ptr, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::SerializedByteUberState, set_Value, app::SerializedByteUberState* this_ptr, uint8_t value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            const auto id = UberId<UberStateType::SerializedByteUberState>(
                this_ptr->fields.Group->fields._.m_id->fields.m_id,
                this_ptr->fields._.m_id->fields.m_id
            );

            if (get_uber_state_value(id, this_ptr) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::SerializedByteUberState::set_Value(this_ptr, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::SerializedFloatUberState, set_Value, app::SerializedFloatUberState* this_ptr, float value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            const auto id = UberId<UberStateType::SerializedFloatUberState>(
                this_ptr->fields.Group->fields._.m_id->fields.m_id,
                this_ptr->fields._.m_id->fields.m_id
            );

            if (get_uber_state_value(id, this_ptr) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::SerializedFloatUberState::set_Value(this_ptr, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::SerializedIntUberState, set_Value, app::SerializedIntUberState* this_ptr, int value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            const auto id = UberId<UberStateType::SerializedIntUberState>(
                this_ptr->fields.Group->fields._.m_id->fields.m_id,
                this_ptr->fields._.m_id->fields.m_id
            );

            if (get_uber_state_value(id, this_ptr) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::SerializedIntUberState::set_Value(this_ptr, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::BooleanUberState, set_Value, app::BooleanUberState* this_ptr, bool value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            const auto id = UberId<UberStateType::BooleanUberState>(
                this_ptr->fields.Group->fields._.m_id->fields.m_id,
                this_ptr->fields._.m_id->fields.m_id
            );

            if (get_uber_state_value(id, this_ptr) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::BooleanUberState::set_Value(this_ptr, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::ByteUberState, set_Value, app::ByteUberState* this_ptr, uint8_t value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            const auto id = UberId<UberStateType::ByteUberState>(
                this_ptr->fields.Group->fields._.m_id->fields.m_id,
                this_ptr->fields._.m_id->fields.m_id
            );

            if (get_uber_state_value(id, this_ptr) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::ByteUberState::set_Value(this_ptr, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::FloatUberState, set_Value, app::FloatUberState* this_ptr, float value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            const auto id = UberId<UberStateType::FloatUberState>(
                this_ptr->fields.Group->fields._.m_id->fields.m_id,
                this_ptr->fields._.m_id->fields.m_id
            );

            if (get_uber_state_value(id, this_ptr) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::FloatUberState::set_Value(this_ptr, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::IntUberState, set_Value, app::IntUberState* this_ptr, int value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            const auto id = UberId<UberStateType::IntUberState>(
                this_ptr->fields.Group->fields._.m_id->fields.m_id,
                this_ptr->fields._.m_id->fields.m_id
            );

            if (get_uber_state_value(id, this_ptr) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::IntUberState::set_Value(this_ptr, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::uberSerializationWisp::SavePedestalUberState, set_HasGameBeenSaved, app::SavePedestalUberState* this_ptr, bool value) {
            // NOOP
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::uberSerializationWisp::SavePedestalUberState, set_IsTeleporterActive, app::SavePedestalUberState* this_ptr, bool value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            const auto id = UberId<UberStateType::SavePedestalUberState>(
                this_ptr->fields.Group->fields._.m_id->fields.m_id,
                this_ptr->fields._._.m_id->fields.m_id
            );

            if (get_uber_state_value(id, this_ptr) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::uberSerializationWisp::SavePedestalUberState::set_IsTeleporterActive(this_ptr, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, GameMapSavePedestal, set_IsTeleporterActive, app::GameMapSavePedestal* this_ptr, bool value) {
            modloader::ScopedSetter _(ignore_uber_state_extension, true);
            Moon::uberSerializationWisp::SavePedestalUberState::set_IsTeleporterActive(this_ptr->fields.SeralizedState, value);
            SavePedestalController::OnTeleporterActivationStateChanged();
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::ISerializedUberStateExtension, SetCurrentState_2, app::ISerializedUberState* state, bool value) {
            if (ignore_uber_state_extension) {
                next::Moon::ISerializedUberStateExtension::SetCurrentState_2(state, value);
                return;
            }

            const auto id = UberId<UberStateType::SerializedBooleanUberState>(
                il2cpp::call_virtual<app::UberID>(state, &reinterpret_cast<app::IUberState*>(state)->klass->vtable.get_GroupID, types::IUberState::get_class()).fields.m_id,
                il2cpp::call_virtual<app::UberID>(state, &reinterpret_cast<app::IUberState*>(state)->klass->vtable.get_StateID, types::IUberState::get_class()).fields.m_id
            );

            if (get_uber_state_value(id, reinterpret_cast<app::SerializedBooleanUberState*>(state)) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::ISerializedUberStateExtension::SetCurrentState_2(state, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::ISerializedUberStateExtension, SetCurrentState_3, app::ISerializedUberState* state, float value) {
            if (ignore_uber_state_extension) {
                next::Moon::ISerializedUberStateExtension::SetCurrentState_3(state, value);
                return;
            }

            const auto id = UberId<UberStateType::SerializedFloatUberState>(
                il2cpp::call_virtual<app::UberID>(state, &reinterpret_cast<app::IUberState*>(state)->klass->vtable.get_GroupID, types::IUberState::get_class()).fields.m_id,
                il2cpp::call_virtual<app::UberID>(state, &reinterpret_cast<app::IUberState*>(state)->klass->vtable.get_StateID, types::IUberState::get_class()).fields.m_id
            );

            if (get_uber_state_value(id, reinterpret_cast<app::SerializedFloatUberState*>(state)) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::ISerializedUberStateExtension::SetCurrentState_3(state, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::ISerializedUberStateExtension, SetCurrentState_4, app::ISerializedUberState* state, int32_t value) {
            if (ignore_uber_state_extension) {
                next::Moon::ISerializedUberStateExtension::SetCurrentState_4(state, value);
                return;
            }

            const auto id = UberId<UberStateType::SerializedIntUberState>(
                il2cpp::call_virtual<app::UberID>(state, &reinterpret_cast<app::IUberState*>(state)->klass->vtable.get_GroupID, types::IUberState::get_class()).fields.m_id,
                il2cpp::call_virtual<app::UberID>(state, &reinterpret_cast<app::IUberState*>(state)->klass->vtable.get_StateID, types::IUberState::get_class()).fields.m_id
            );

            if (get_uber_state_value(id, reinterpret_cast<app::SerializedIntUberState*>(state)) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::ISerializedUberStateExtension::SetCurrentState_4(state, value);
            on_uber_state_set(id);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::ISerializedUberStateExtension, SetCurrentState_5, app::ISerializedUberState* state, uint8_t value) {
            if (ignore_uber_state_extension) {
                next::Moon::ISerializedUberStateExtension::SetCurrentState_5(state, value);
                return;
            }

            const auto id = UberId<UberStateType::SerializedByteUberState>(
                il2cpp::call_virtual<app::UberID>(state, &reinterpret_cast<app::IUberState*>(state)->klass->vtable.get_GroupID, types::IUberState::get_class()).fields.m_id,
                il2cpp::call_virtual<app::UberID>(state, &reinterpret_cast<app::IUberState*>(state)->klass->vtable.get_StateID, types::IUberState::get_class()).fields.m_id
            );

            if (get_uber_state_value(id, reinterpret_cast<app::SerializedByteUberState*>(state)) == value) {
                return;
            }

            if (before_uber_state_set(id, value).ignore_change) {
                return;
            }
            next::Moon::ISerializedUberStateExtension::SetCurrentState_5(state, value);
            on_uber_state_set(id);
        }
    }

    template<>
    UberId<UberStateType::BooleanUberState>::value_t get_uber_state_value<UberStateType::BooleanUberState>(const UberId<UberStateType::BooleanUberState>& id, UberId<UberStateType::BooleanUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::BooleanUberState::get_Value(native_ptr);
    }

    template<>
    UberId<UberStateType::ByteUberState>::value_t get_uber_state_value<UberStateType::ByteUberState>(const UberId<UberStateType::ByteUberState>& id, UberId<UberStateType::ByteUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::ByteUberState::get_Value(native_ptr);
    }

    template<>
    UberId<UberStateType::IntUberState>::value_t get_uber_state_value<UberStateType::IntUberState>(const UberId<UberStateType::IntUberState>& id, UberId<UberStateType::IntUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::IntUberState::get_Value(native_ptr);
    }

    template<>
    UberId<UberStateType::FloatUberState>::value_t get_uber_state_value<UberStateType::FloatUberState>(const UberId<UberStateType::FloatUberState>& id, UberId<UberStateType::FloatUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::FloatUberState::get_Value(native_ptr);
    }

    template<>
    UberId<UberStateType::SerializedBooleanUberState>::value_t get_uber_state_value<UberStateType::SerializedBooleanUberState>(const UberId<UberStateType::SerializedBooleanUberState>& id, UberId<UberStateType::SerializedBooleanUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::SerializedBooleanUberState::get_Value(native_ptr);
    }

    template<>
    UberId<UberStateType::SerializedByteUberState>::value_t get_uber_state_value<UberStateType::SerializedByteUberState>(const UberId<UberStateType::SerializedByteUberState>& id, UberId<UberStateType::SerializedByteUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::SerializedByteUberState::get_Value(native_ptr);
    }

    template<>
    UberId<UberStateType::SerializedIntUberState>::value_t get_uber_state_value<UberStateType::SerializedIntUberState>(const UberId<UberStateType::SerializedIntUberState>& id, UberId<UberStateType::SerializedIntUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::SerializedIntUberState::get_Value(native_ptr);
    }

    template<>
    UberId<UberStateType::SerializedFloatUberState>::value_t get_uber_state_value<UberStateType::SerializedFloatUberState>(const UberId<UberStateType::SerializedFloatUberState>& id, UberId<UberStateType::SerializedFloatUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::SerializedFloatUberState::get_Value(native_ptr);
    }

    template<>
    UberId<UberStateType::VirtualBooleanUberState>::value_t get_uber_state_value<UberStateType::VirtualBooleanUberState>(const UberId<UberStateType::VirtualBooleanUberState>& id, UberId<UberStateType::VirtualBooleanUberState>::native_t* const native_ptr) {
        on_uber_state_get(id);
        return static_cast<UberId<UberStateType::VirtualBooleanUberState>::value_t>(get_virtual_uber_state(UntypedUberId(id)).get());
    }

    template<>
    UberId<UberStateType::VirtualByteUberState>::value_t get_uber_state_value<UberStateType::VirtualByteUberState>(const UberId<UberStateType::VirtualByteUberState>& id, UberId<UberStateType::VirtualByteUberState>::native_t* const native_ptr) {
        on_uber_state_get(id);
        return static_cast<UberId<UberStateType::VirtualByteUberState>::value_t>(get_virtual_uber_state(UntypedUberId(id)).get());
    }

    template<>
    UberId<UberStateType::VirtualIntUberState>::value_t get_uber_state_value<UberStateType::VirtualIntUberState>(const UberId<UberStateType::VirtualIntUberState>& id, UberId<UberStateType::VirtualIntUberState>::native_t* const native_ptr) {
        on_uber_state_get(id);
        return static_cast<UberId<UberStateType::VirtualIntUberState>::value_t>(get_virtual_uber_state(UntypedUberId(id)).get());
    }

    template<>
    UberId<UberStateType::VirtualFloatUberState>::value_t get_uber_state_value<UberStateType::VirtualFloatUberState>(const UberId<UberStateType::VirtualFloatUberState>& id, UberId<UberStateType::VirtualFloatUberState>::native_t* const native_ptr) {
        on_uber_state_get(id);
        return static_cast<UberId<UberStateType::VirtualFloatUberState>::value_t>(get_virtual_uber_state(UntypedUberId(id)).get());
    }

    template<>
    UberId<UberStateType::ReadOnlyVirtualBooleanUberState>::value_t get_uber_state_value<UberStateType::ReadOnlyVirtualBooleanUberState>(const UberId<UberStateType::ReadOnlyVirtualBooleanUberState>& id, UberId<UberStateType::ReadOnlyVirtualBooleanUberState>::native_t* const native_ptr) {
        on_uber_state_get(id);
        return static_cast<UberId<UberStateType::ReadOnlyVirtualBooleanUberState>::value_t>(get_virtual_uber_state(UntypedUberId(id)).get());
    }

    template<>
    UberId<UberStateType::ReadOnlyVirtualByteUberState>::value_t get_uber_state_value<UberStateType::ReadOnlyVirtualByteUberState>(const UberId<UberStateType::ReadOnlyVirtualByteUberState>& id, UberId<UberStateType::ReadOnlyVirtualByteUberState>::native_t* const native_ptr) {
        on_uber_state_get(id);
        return static_cast<UberId<UberStateType::ReadOnlyVirtualByteUberState>::value_t>(get_virtual_uber_state(UntypedUberId(id)).get());
    }

    template<>
    UberId<UberStateType::ReadOnlyVirtualIntUberState>::value_t get_uber_state_value<UberStateType::ReadOnlyVirtualIntUberState>(const UberId<UberStateType::ReadOnlyVirtualIntUberState>& id, UberId<UberStateType::ReadOnlyVirtualIntUberState>::native_t* const native_ptr) {
        on_uber_state_get(id);
        return static_cast<UberId<UberStateType::ReadOnlyVirtualIntUberState>::value_t>(get_virtual_uber_state(UntypedUberId(id)).get());
    }

    template<>
    UberId<UberStateType::ReadOnlyVirtualFloatUberState>::value_t get_uber_state_value<UberStateType::ReadOnlyVirtualFloatUberState>(const UberId<UberStateType::ReadOnlyVirtualFloatUberState>& id, UberId<UberStateType::ReadOnlyVirtualFloatUberState>::native_t* const native_ptr) {
        on_uber_state_get(id);
        return static_cast<UberId<UberStateType::ReadOnlyVirtualFloatUberState>::value_t>(get_virtual_uber_state(UntypedUberId(id)).get());
    }

    template<>
    UberId<UberStateType::SavePedestalUberState>::value_t get_uber_state_value<UberStateType::SavePedestalUberState>(const UberId<UberStateType::SavePedestalUberState>& id, UberId<UberStateType::SavePedestalUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::uberSerializationWisp::SavePedestalUberState::get_IsTeleporterActive(native_ptr);
    }

    template<>
    UberId<UberStateType::CountUberState>::value_t get_uber_state_value<UberStateType::CountUberState>(const UberId<UberStateType::CountUberState>& id, UberId<UberStateType::CountUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::CountUberState::get_Value(native_ptr);
    }

    template<>
    UberId<UberStateType::ConditionUberState>::value_t get_uber_state_value<UberStateType::ConditionUberState>(const UberId<UberStateType::ConditionUberState>& id, UberId<UberStateType::ConditionUberState>::native_t* const native_ptr) {
        assert(native_ptr != nullptr);
        on_uber_state_get(id);
        return Moon::ConditionUberState::get_Value(native_ptr);
    }

    template<>
    void set_uber_state_value<UberStateType::BooleanUberState>(const UberId<UberStateType::BooleanUberState>& id, UberId<UberStateType::BooleanUberState>::native_t* const native_ptr, UberId<UberStateType::BooleanUberState>::value_t value) {
        assert(native_ptr != nullptr);
        Moon::BooleanUberState::set_Value(native_ptr, value);
    }

    template<>
    void set_uber_state_value<UberStateType::ByteUberState>(const UberId<UberStateType::ByteUberState>& id, UberId<UberStateType::ByteUberState>::native_t* const native_ptr, UberId<UberStateType::ByteUberState>::value_t value) {
        assert(native_ptr != nullptr);
        Moon::ByteUberState::set_Value(native_ptr, value);
    }

    template<>
    void set_uber_state_value<UberStateType::IntUberState>(const UberId<UberStateType::IntUberState>& id, UberId<UberStateType::IntUberState>::native_t* const native_ptr, UberId<UberStateType::IntUberState>::value_t value) {
        assert(native_ptr != nullptr);
        Moon::IntUberState::set_Value(native_ptr, value);
    }

    template<>
    void set_uber_state_value<UberStateType::FloatUberState>(const UberId<UberStateType::FloatUberState>& id, UberId<UberStateType::FloatUberState>::native_t* const native_ptr, UberId<UberStateType::FloatUberState>::value_t value) {
        assert(native_ptr != nullptr);
        Moon::FloatUberState::set_Value(native_ptr, value);
    }

    template<>
    void set_uber_state_value<UberStateType::SerializedBooleanUberState>(const UberId<UberStateType::SerializedBooleanUberState>& id, UberId<UberStateType::SerializedBooleanUberState>::native_t* const native_ptr, UberId<UberStateType::SerializedBooleanUberState>::value_t value) {
        assert(native_ptr != nullptr);
        Moon::SerializedBooleanUberState::set_Value(native_ptr, value);
    }

    template<>
    void set_uber_state_value<UberStateType::SerializedByteUberState>(const UberId<UberStateType::SerializedByteUberState>& id, UberId<UberStateType::SerializedByteUberState>::native_t* const native_ptr, UberId<UberStateType::SerializedByteUberState>::value_t value) {
        assert(native_ptr != nullptr);
        Moon::SerializedByteUberState::set_Value(native_ptr, value);
    }

    template<>
    void set_uber_state_value<UberStateType::SerializedIntUberState>(const UberId<UberStateType::SerializedIntUberState>& id, UberId<UberStateType::SerializedIntUberState>::native_t* const native_ptr, UberId<UberStateType::SerializedIntUberState>::value_t value) {
        assert(native_ptr != nullptr);
        Moon::SerializedIntUberState::set_Value(native_ptr, value);
    }

    template<>
    void set_uber_state_value<UberStateType::SerializedFloatUberState>(const UberId<UberStateType::SerializedFloatUberState>& id, UberId<UberStateType::SerializedFloatUberState>::native_t* const native_ptr, UberId<UberStateType::SerializedFloatUberState>::value_t value) {
        assert(native_ptr != nullptr);
        Moon::SerializedFloatUberState::set_Value(native_ptr, value);
    }

    template<>
    void set_uber_state_value<UberStateType::VirtualBooleanUberState>(const UberId<UberStateType::VirtualBooleanUberState>& id, UberId<UberStateType::VirtualBooleanUberState>::native_t* const native_ptr, UberId<UberStateType::VirtualBooleanUberState>::value_t value) {
        auto& virtual_uber_state = get_virtual_uber_state(id.group, id.member);

        if (virtual_uber_state.get() != value) {
            virtual_uber_state.set(value);
            on_uber_state_set(UberId<UberStateType::VirtualBooleanUberState>(
                id.group,
                id.member
            ));
        }
    }

    template<>
    void set_uber_state_value<UberStateType::VirtualByteUberState>(const UberId<UberStateType::VirtualByteUberState>& id, UberId<UberStateType::VirtualByteUberState>::native_t* const native_ptr, UberId<UberStateType::VirtualByteUberState>::value_t value) {
        auto& virtual_uber_state = get_virtual_uber_state(id.group, id.member);

        if (virtual_uber_state.get() != value) {
            virtual_uber_state.set(value);
            on_uber_state_set(UberId<UberStateType::VirtualByteUberState>(
                id.group,
                id.member
            ));
        }
    }

    template<>
    void set_uber_state_value<UberStateType::VirtualIntUberState>(const UberId<UberStateType::VirtualIntUberState>& id, UberId<UberStateType::VirtualIntUberState>::native_t* const native_ptr, UberId<UberStateType::VirtualIntUberState>::value_t value) {
        auto& virtual_uber_state = get_virtual_uber_state(id.group, id.member);

        if (virtual_uber_state.get() != value) {
            virtual_uber_state.set(value);
            on_uber_state_set(UberId<UberStateType::VirtualIntUberState>(
                id.group,
                id.member
            ));
        }
    }

    template<>
    void set_uber_state_value<UberStateType::VirtualFloatUberState>(const UberId<UberStateType::VirtualFloatUberState>& id, UberId<UberStateType::VirtualFloatUberState>::native_t* const native_ptr, UberId<UberStateType::VirtualFloatUberState>::value_t value) {
        auto& virtual_uber_state = get_virtual_uber_state(id.group, id.member);

        if (virtual_uber_state.get() != value) {
            virtual_uber_state.set(value);
            on_uber_state_set(UberId<UberStateType::VirtualFloatUberState>(
                id.group,
                id.member
            ));
        }
    }

    template<>
    void set_uber_state_value<UberStateType::SavePedestalUberState>(const UberId<UberStateType::SavePedestalUberState>& id, UberId<UberStateType::SavePedestalUberState>::native_t* const native_ptr, UberId<UberStateType::SavePedestalUberState>::value_t value) {
        assert(native_ptr != nullptr);
        Moon::uberSerializationWisp::SavePedestalUberState::set_IsTeleporterActive(native_ptr, value);
    }

    app::UberID create_uber_id(const int id) {
        app::UberID uber_id{};
        uber_id.monitor = nullptr;
        uber_id.klass = types::UberID::get_class();
        uber_id.fields.m_id = id;
        return uber_id;
    }

    app::UberID* create_uber_id_ptr(int id) {
        const auto uber_id = types::UberID::create();
        uber_id->fields.m_id = id;
        return uber_id;
    }

    namespace {
        template<const UberStateType TYPE>
        Il2CppClass* get_state_class();

        template<>
        Il2CppClass* get_state_class<UberStateType::SerializedBooleanUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedBooleanUberState::get_class());
        }

        template<>
        Il2CppClass* get_state_class<UberStateType::SerializedByteUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedByteUberState::get_class());
        }

        template<>
        Il2CppClass* get_state_class<UberStateType::SerializedIntUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedIntUberState::get_class());
        }

        template<>
        Il2CppClass* get_state_class<UberStateType::SerializedFloatUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::SerializedFloatUberState::get_class());
        }

        template<>
        Il2CppClass* get_state_class<UberStateType::BooleanUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::BooleanUberState::get_class());
        }

        template<>
        Il2CppClass* get_state_class<UberStateType::ByteUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::ByteUberState::get_class());
        }

        template<>
        Il2CppClass* get_state_class<UberStateType::IntUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::IntUberState::get_class());
        }

        template<>
        Il2CppClass* get_state_class<UberStateType::FloatUberState>() {
            return reinterpret_cast<Il2CppClass*>(types::FloatUberState::get_class());
        }

        // We cache the scriptable objects and use il2cpp::unity::instantiate_object to create instances from them
        // because that's a lot faster
        std::unordered_map<Il2CppClass*, app::IUberState*> uber_state_so_cache;
        app::UberStateGroup* group_so_cache = nullptr;
    }

    app::UberStateGroup* create_uber_state_group(const int group_id, const std::string& group_name) {
        if (group_so_cache == nullptr) {
            group_so_cache = il2cpp::unity::create_scriptable_object<app::UberStateGroup>(types::UberStateGroup::get_class());
        }

        const auto group = il2cpp::unity::instantiate_object<app::UberStateGroup>(group_so_cache);
        group->fields._.m_id = create_uber_id_ptr(group_id);
        il2cpp::invoke(group, "set_name", il2cpp::string_new(group_name));

        define_virtual_uber_state_group(group_id, group_name);

        return group;
    }

    UntypedUberState UntypedUberState::from_native_ptr(native_t* native_ptr) {
        const auto group = il2cpp::invoke<app::IUberStateGroup>(native_ptr, "get_UberStateGroup");
        const auto group_id = il2cpp::invoke<app::UberID>(group, "get_ID");
        const auto member_id = il2cpp::invoke<app::UberID>(native_ptr, "get_ID");

        return UntypedUberState(UntypedUberId(group_id->fields.m_id, member_id->fields.m_id), native_ptr);
    }

    std::optional<UberStateType> UntypedUberState::get_type() {
        if (!m_type_cache.has_value()) {
            if (is_virtual_uber_state(m_id.group, m_id.member)) {
                switch (get_virtual_uber_state(m_id.group, m_id.member).m_value_type) {
                    case VirtualUberState::ValueType::Boolean:
                        m_type_cache = UberStateType::VirtualBooleanUberState;
                        break;
                    case VirtualUberState::ValueType::Byte:
                        m_type_cache = UberStateType::VirtualByteUberState;
                        break;
                    case VirtualUberState::ValueType::Integer:
                        m_type_cache = UberStateType::VirtualIntUberState;
                        break;
                    case VirtualUberState::ValueType::Float:
                        m_type_cache = UberStateType::VirtualFloatUberState;
                        break;
                }
            } else {
                if (m_native_ptr == nullptr) {
                    modloader::warn("uber_state", std::format("Tried to access non existent uber state {}|{}", m_id.group, m_id.member));
                    return std::nullopt;
                }

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
                };

                // Crash = tried to access unsupported uber state type
                m_type_cache = class_to_type_map.at(m_native_ptr->klass);
            }
        }

        return m_type_cache;
    }

    std::string UntypedUberState::get_name() {
        if (is_virtual()) {
            return get_virtual_uber_state(m_id.group, m_id.member).m_name;
        }

        const auto csstring = il2cpp::invoke<app::String>(m_native_ptr, "get_Name");
        return il2cpp::convert_csstring_fast_unsafe(csstring);
    }

    std::string UntypedUberState::get_group_name() {
        if (is_virtual()) {
            return get_virtual_uber_state_group_name(m_id.group);
        }

        const auto group = il2cpp::invoke<app::IUberStateGroup>(m_native_ptr, "get_UberStateGroup");
        const auto csstring = il2cpp::invoke<app::String>(group, "get_GroupName");
        return il2cpp::convert_csstring_fast_unsafe(csstring);
    }

    bool UntypedUberState::is_valid() {
        return m_native_ptr != nullptr && get_type().has_value();
    }

    bool UntypedUberState::is_read_only() {
        const auto type = get_type();

        if (!type.has_value()) {
            return false;
        }

        return is_type_read_only(*type);
    }

    bool UntypedUberState::is_virtual() {
        const auto type = get_type();

        if (!type.has_value()) {
            return false;
        }

        return is_type_virtual(*type);
    }

    const UntypedUberState::id_t& UntypedUberState::get_uber_id() const {
        return m_id;
    }

    void UntypedUberState::apply() const {
        apply_uber_state(get_native_ptr());
    }

    const UntypedUberState::id_t& UntypedUberState::operator()() const {
        return get_uber_id();
    }

    void UntypedUberState::initialize_native_ptr() {
        using namespace app::classes;
        auto group_id = create_uber_id(m_id.group);
        auto member_id = create_uber_id(m_id.member);

        m_native_ptr = Moon::UberStateCollection::GetState(&group_id, &member_id);
    }

    void UntypedUberState::initialize_native_ptr(app::IUberState* native_ptr) {
        m_native_ptr = native_ptr;
    }

    UntypedUberState::native_t* UntypedUberState::get_native_ptr() const {
        return m_native_ptr;
    }

    template<const UberStateType TYPE>
    app::IUberState* create_uber_state(app::UberStateGroup* const group, const int state_id, const std::string& state_name, typename UberId<TYPE>::value_t default_value) {
        using native_t = UberId<TYPE>::native_t;

        auto state_class = get_state_class<TYPE>();

        if (!uber_state_so_cache.contains(state_class)) {
            uber_state_so_cache[state_class] = reinterpret_cast<app::IUberState*>(il2cpp::unity::create_scriptable_object(state_class));
        }

        auto state = il2cpp::unity::instantiate_object<native_t>(reinterpret_cast<native_t*>(uber_state_so_cache[state_class]));

        state->fields.Group = group;

        state->fields._.m_id = create_uber_id_ptr(state_id);
        il2cpp::invoke(state, "set_name", il2cpp::string_new(state_name));

        state->fields.DefaultValue = default_value;
        state->fields.m_value = default_value;
        state->fields.NamedValues = nullptr;
        state->fields._VolitileGenericOverrideValue_k__BackingField.has_value = false;

        return reinterpret_cast<app::IUberState*>(state);
    }

    template app::IUberState* create_uber_state<UberStateType::SerializedBooleanUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::SerializedBooleanUberState>::value_t default_value);
    template app::IUberState* create_uber_state<UberStateType::SerializedByteUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::SerializedByteUberState>::value_t default_value);
    template app::IUberState* create_uber_state<UberStateType::SerializedIntUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::SerializedIntUberState>::value_t default_value);
    template app::IUberState* create_uber_state<UberStateType::SerializedFloatUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::SerializedFloatUberState>::value_t default_value);
    template app::IUberState* create_uber_state<UberStateType::BooleanUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::BooleanUberState>::value_t default_value);
    template app::IUberState* create_uber_state<UberStateType::ByteUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::ByteUberState>::value_t default_value);
    template app::IUberState* create_uber_state<UberStateType::IntUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::IntUberState>::value_t default_value);
    template app::IUberState* create_uber_state<UberStateType::FloatUberState>(app::UberStateGroup* group, int state_id, const std::string& state_name, UberId<UberStateType::FloatUberState>::value_t default_value);
} // namespace core::api::uber_states
