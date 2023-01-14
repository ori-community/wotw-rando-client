#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/enums/uber_state.h>
#include <api/uber_states/uber_state_handlers.h>

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
        auto position = core::api::game::player::get_position();

        std::vector<int> stat_states{
            0,
            1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
            11,
            12,
            13,
            20,
            21,
            22,
            23,
            24,
            25,
            26,
            27,
            28,
            29,
            30,
            31,
            32,
            33,
            40,
            41,
            42,
            43,
            44,
            45,
            46,
            47,
            48,
            49,
            50,
            51,
            52,
            53,
            60,
            61,
            62,
            63,
            64,
            65,
            66,
            67,
            68,
            69,
            70,
            71,
            72,
            100,
            101,
            102,
            103,
            104,
            105,
            106,
            107,
            108,
            109
        };

        for (auto state : stat_states) {
            saved[state] = UberState(UberStateGroup::RandoStats, state).get<double>();
        }

        core::api::game::player::unbind_all();

        auto instance = types::UberStateController::get_class()->static_fields->m_currentStateValueStore;
        instance->fields.m_isInitialized = false;
        il2cpp::invoke(instance->fields.m_groupMap, "Clear");
        UberStateValueStore::FinalizeInitialization(instance, false);
        // Because for some reason if we only call it once we lose wall jump.
        scenes::load_default_values();
        scenes::load_default_values();
        UberState(static_cast<UberStateGroup>(21786), 48748).set(1, true, false);
        core::api::game::player::set_position(position);
        for (auto save : saved) {
            UberState(UberStateGroup::RandoStats, save.first).set(save.second, true, true);
        }

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
