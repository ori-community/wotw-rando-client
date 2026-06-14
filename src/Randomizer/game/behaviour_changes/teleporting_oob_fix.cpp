#include <Core/api/game/player.h>
#include <Core/api/moon_animator_events.h>
#include <Modloader/il2cpp_helpers.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Modloader/app/methods/SeinPlayAnimationController.h>
#include <Modloader/app/methods/SoundSource.h>
#include <Modloader/app/methods/StatisticsManager.h>
#include <Modloader/app/types/SavePedestalController.h>
#include <Modloader/app/types/StatisticsManager.h>

namespace {
    using namespace app::classes;

    core::api::uber_states::UberState fix_enabled_state(UberStateGroup::RandoConfig, 14);

    auto use_custom_animation_handling = false;

    IL2CPP_INTERCEPT_WITH_ORDER(0, void, SavePedestalController, BeginTeleportation, app::Vector2 teleport_target_world_position) {
        use_custom_animation_handling = fix_enabled_state.get<bool>();
        next::SavePedestalController::BeginTeleportation(teleport_target_world_position);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(-10, void, SavePedestalController, OnFinishedTeleportingStartAnimation) {
        // reimplemented in moon_animator event bus
        if (!use_custom_animation_handling) {
            next::SavePedestalController::OnFinishedTeleportingStartAnimation();
        }
    }

    IL2CPP_INTERCEPT(void, SavePedestalController, OnFinishedTeleportingFinishAnimation, app::SavePedestalController * this_ptr) {
        // reimplemented in moon_animator event bus
        if (!use_custom_animation_handling) {
            next::SavePedestalController::OnFinishedTeleportingFinishAnimation(this_ptr);
        }
    }

    auto _ = core::api::moon_animator::animation_event_bus().register_handler([](auto event) {
        if (use_custom_animation_handling) {
            if (event.type == core::api::moon_animator::MoonAnimationEvent::Type::Finished) {
                const auto save_pedestal_controller_instance = types::SavePedestalController::get_class()->static_fields->Instance;

                if (!il2cpp::unity::is_valid(save_pedestal_controller_instance)) {
                    return;
                }

                if (
                    event.animation == save_pedestal_controller_instance->fields.TeleportingStart ||
                    event.animation == save_pedestal_controller_instance->fields.TeleportingStartAir
                ) {
                    if (save_pedestal_controller_instance->fields.m_isTeleporting) {
                        const auto animation = save_pedestal_controller_instance->fields.m_startedTeleportOnGround
                            ? save_pedestal_controller_instance->fields.TeleportingLoop
                            : save_pedestal_controller_instance->fields.TeleportingLoopAir;

                        SeinPlayAnimationController::PlayAnimation_2(core::api::game::player::sein()->fields.Controller->fields.m_playAnimationController, animation);
                        SoundSource::Play_2(save_pedestal_controller_instance->fields.TeleportingTwirlAnimationSound);

                        StatisticsManager::Increment(
                            types::StatisticsManager::get_class()->static_fields->Instance,
                            app::StatisticsManager_StatType__Enum::FastTravelCount,
                            1.f
                        );
                    }
                } else if (event.animation == save_pedestal_controller_instance->fields.TeleportingFinish) {
                    save_pedestal_controller_instance->fields.m_raycastGroundCheck = false;
                }
            }
        }
    });
} // namespace
