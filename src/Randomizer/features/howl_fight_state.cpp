#include <Core/api/uber_states/uber_state_virtual.h>
#include <Modloader/app/methods/NightCrawlerFightController.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/features/howl_fight_state.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <optional>


namespace randomizer::howl_fight_state {
    namespace {
        std::optional<il2cpp::WeakGCRef<app::NightCrawlerFightController>> night_crawler_fight_controller_ref;

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, NightCrawlerFightController, Awake, app::NightCrawlerFightController* this_ptr) {
            night_crawler_fight_controller_ref = il2cpp::WeakGCRef(this_ptr);
            next::NightCrawlerFightController::Awake(this_ptr);
        }

        void check_for_state_changes() {
            core::api::uber_states::get_virtual_uber_state(uber_states::group_id<"bosses">(), 800).check_for_changes();
        }

        IL2CPP_INTERCEPT(void, NightCrawlerFightController, StartFight, app::NightCrawlerFightController* this_ptr) {
            next::NightCrawlerFightController::StartFight(this_ptr);
            check_for_state_changes();
        }

        IL2CPP_INTERCEPT_WITH_ORDER(0, void, NightCrawlerFightController, FinishFight, app::NightCrawlerFightController* this_ptr) {
            next::NightCrawlerFightController::FinishFight(this_ptr);
            check_for_state_changes();
        }

        IL2CPP_INTERCEPT(void, NightCrawlerFightController, ResetFight, app::NightCrawlerFightController* this_ptr) {
            next::NightCrawlerFightController::ResetFight(this_ptr);
            check_for_state_changes();
        }
    }

    void register_virtual_uber_states() {
        core::api::uber_states::register_virtual_uber_state(
            uber_states::group_id<"bosses">(),
            800,
            core::api::uber_states::VirtualUberState::ValueType::Boolean,
            "howlFightActive",
            []() -> double {
                if (!modloader::is_game_ready()) {
                    return 0;
                }

                const auto nightcrawler_fight_controller = il2cpp::deref_weak_gc_ref(night_crawler_fight_controller_ref);
                if (!nightcrawler_fight_controller.has_value()) {
                    return 0;
                }

                return (*nightcrawler_fight_controller)->fields.m_fightActive
                    ? 1.0
                    : 0.0;
            },
            std::nullopt,
            core::api::uber_states::VirtualUberState::ChangeDetectionMode::Manual
        );
    }
}
