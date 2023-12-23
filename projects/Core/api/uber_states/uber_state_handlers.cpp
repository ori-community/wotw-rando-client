#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/enums/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>

#include <Common/ext.h>

#include <Modloader/app/methods/Moon/UberStateController.h>
#include <Modloader/app/methods/Moon/UberStateValueStore.h>
#include <Modloader/app/types/BooleanUberState.h>
#include <Modloader/app/types/ByteUberState.h>
#include <Modloader/app/types/ConditionUberState.h>
#include <Modloader/app/types/CountUberState.h>
#include <Modloader/app/types/IntUberState.h>
#include <Modloader/app/types/PlayerUberStateDescriptor.h>
#include <Modloader/app/types/SavePedestalUberState.h>
#include <Modloader/app/types/SerializedBooleanUberState.h>
#include <Modloader/app/types/SerializedByteUberState.h>
#include <Modloader/app/types/SerializedFloatUberState.h>
#include <Modloader/app/types/SerializedIntUberState.h>
#include <Modloader/app/types/UberStateController.h>
#include <Modloader/il2cpp_helpers.h>

#include <unordered_map>
#include <vector>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::Moon;

namespace core::api::uber_states {
    namespace {
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

    void apply_all() {
        UberStateController::ApplyAll(app::UberStateApplyContext__Enum::FullStateApply);
    }

    void clear() {
        std::unordered_map<int, double> saved;
        const auto position = game::player::get_position();
        game::player::unbind_all();

        const auto instance = types::UberStateController::get_class()->static_fields->m_currentStateValueStore;
        instance->fields.m_isInitialized = false;
        il2cpp::invoke(instance->fields.m_groupMap, "Clear");
        UberStateValueStore::FinalizeInitialization(instance, false);
        // Because for some reason if we only call it once we lose wall jump.
        scenes::load_default_values();
        scenes::load_default_values();
        UberState(static_cast<UberStateGroup>(21786), 48748).set(1);
        game::player::set_position(position);

        apply_all();
    }

    common::CollectingEventBus<bool, UberStateCallbackParams const&>& interception_bus() {
        static common::CollectingEventBus<bool, UberStateCallbackParams const&> bus;
        return bus;
    }

    common::EventBus<UberStateCallbackParams const&>& notification_bus() {
        static common::EventBus<UberStateCallbackParams const&> bus;
        return bus;
    }

    common::EventBus<UberStateCallbackParams const&, UberState>& single_notification_bus() {
        static common::EventBus<UberStateCallbackParams const&, UberState> bus;
        return bus;
    }

    UberStateType resolve_type(app::IUberState* uber_state) {
        for (auto const& resolver : resolvers) {
            if (il2cpp::is_assignable(uber_state, resolver.uber_state_class)) {
                return resolver.type;
            }
        }

        return static_cast<UberStateType>(-1);
    }
} // namespace core::api::uber_states
