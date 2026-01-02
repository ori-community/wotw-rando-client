#include "custom_cutscene_skips.h"

#include <Modloader/app/methods/SkipCutsceneController.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/types/SkipCutsceneController.h>
#include <Modloader/interception_macros.h>

#include <Modloader/windows_api/console.h>

#include <Common/event_timing.h>
#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/enums/game_event.h>
#include <Core/events/task.h>
#include <Modloader/app/methods/AK/Wwise/State.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/Moon/Wwise/SoundListener.h>
#include <Modloader/app/types/ISkipCutscene.h>
#include <frozen/unordered_map.h>

#include "Core/api/audio.h"
#include "Core/api/faderb.h"
#include "Core/settings.h"

namespace custom_cutscene_skips {
    namespace {
        using namespace app::classes;

        std::vector<CustomCutsceneSkip> custom_skips;
        float block_automatic_cutscene_skips_for_seconds = 0.f;
        float delay_fade_to_game_for_seconds = 0.f;
        bool automatic_cutscene_skipping_enabled_cache = false;
        std::optional<CustomCutsceneSkip::Metadata> skip_metadata_of_last_get_skipping_available_call = std::nullopt;

        struct VanillaCutsceneSkipConfig {
            float block_automatic_cutscene_skips_for_seconds = 0.f;
            float delay_fade_to_game_after_automatic_cutscene_skip_for_seconds = 0.f;
        };

        // Some vanilla cutscenes don't clear their availability after being invoked,
        // e.g. skip is available, skip is invoked, then the skip still reports being available for a bit.
        // This map defines durations for which automatic cutscene skipping is disabled after
        // skipping a certain cutscene.
        constexpr frozen::unordered_map<frozen::string, VanillaCutsceneSkipConfig, 2> AUTOMATIC_CUTSCENE_SKIP_BLOCK_TIMES_FOR_VANILLA_CUTSCENES{
            {"willowCeremonyMaster/cutsceneSkip", {0.5f}},
            {"kwoloksHollowEntrance/artSetups/pedestalRising/skipCutscene", {1.0f}},
        };

        IL2CPP_INTERCEPT(bool, SkipCutsceneController, get_SkippingAvailable, app::SkipCutsceneController * this_ptr) {
            skip_metadata_of_last_get_skipping_available_call = std::nullopt;

            for (const auto& custom_skip : custom_skips) {
                if (custom_skip.is_available()) {
                    skip_metadata_of_last_get_skipping_available_call = custom_skip.get_metadata();
                    return true;
                }
            }

            return SkipCutsceneController::get_HasValidSkip(this_ptr);

            // get_SkippingAvailable only handles a Prologue case, which does not exist in the Randomizer.
        }

        IL2CPP_INTERCEPT(void, SkipCutsceneController, SkipCutscene, app::SkipCutsceneController * this_ptr) {
            AK::Wwise::State::SetValue(Game::UI::get_Menu()->fields.Sounds->fields.NoUIDisplayedState);
            Game::UI::get_Menu()->fields.LockClosingMenu = false;
            Moon::Wwise::SoundListener::ResetTracking();

            // Handle custom cutscene skips
            for (const auto& custom_skip : custom_skips) {
                if (custom_skip.is_available()) {
                    modloader::win::console::console_send("Running custom cutscene skip");
                    custom_skip.invoke();
                    return;
                }
            }

            // Handle vanilla cutscene skips
            core::api::faderb::set_black_screen_instantly();
            core::api::audio::fire_and_forget(SoundEventID::ResetMusicStates);

            if (SkipCutsceneController::get_HasValidSkip(this_ptr)) {
                core::api::scenes::allow_unload_all_scenes();

                for (int index = 0; index < this_ptr->fields.m_skips->fields._size; ++index) {
                    const auto skip = this_ptr->fields.m_skips->fields._items->vector[index];

                    if (!il2cpp::unity::is_valid(skip)) {
                        il2cpp::invoke(this_ptr->fields.m_skips, "RemoveAt", &index);
                        --index;
                        continue;
                    }

                    if (il2cpp::call_virtual<bool>(skip, &skip->klass->vtable.get_ValidForCutsceneSkiping, types::ISkipCutscene::get_class())) {
                        il2cpp::call_virtual(skip, &skip->klass->vtable.OnSkip, types::ISkipCutscene::get_class());

                        const auto path = il2cpp::unity::get_path(skip);
                        const auto automatic_skip_block_duration_it = AUTOMATIC_CUTSCENE_SKIP_BLOCK_TIMES_FOR_VANILLA_CUTSCENES.find(frozen::string(path));
                        if (automatic_skip_block_duration_it != AUTOMATIC_CUTSCENE_SKIP_BLOCK_TIMES_FOR_VANILLA_CUTSCENES.end()) {
                            block_automatic_cutscene_skips_for_seconds = std::max(block_automatic_cutscene_skips_for_seconds, automatic_skip_block_duration_it->second.block_automatic_cutscene_skips_for_seconds);
                            delay_fade_to_game_for_seconds = std::max(delay_fade_to_game_for_seconds, automatic_skip_block_duration_it->second.delay_fade_to_game_after_automatic_cutscene_skip_for_seconds);
                        }
                    }
                }
            }

            core::api::faderb::fade_to_game_visible(0.6);
        }
    } // namespace

    [[maybe_unused]]
    auto on_settings_loaded = core::settings::event_bus().register_handler(core::settings::SettingsEvent::Load, EventTiming::After, [](auto, auto) {
        automatic_cutscene_skipping_enabled_cache = core::settings::enable_automatic_cutscene_skipping();
    });

    [[maybe_unused]]
    auto on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        if (block_automatic_cutscene_skips_for_seconds > 0.f) {
            block_automatic_cutscene_skips_for_seconds -= TimeUtility::get_fixedDeltaTime();
            return;
        }

        if (!automatic_cutscene_skipping_enabled_cache) {
            return;
        }

        if (!core::api::scenes::is_in_game()) {
            return;
        }

        if (SkipCutsceneController::get_SkippingAvailable(types::SkipCutsceneController::get_class()->static_fields->Instance)) {
            block_automatic_cutscene_skips_for_seconds = 10.f;

            const auto execute_skip = [] {
                block_automatic_cutscene_skips_for_seconds = 0.f;
                delay_fade_to_game_for_seconds = 0.f;

                SkipCutsceneController::SkipCutscene(types::SkipCutsceneController::get_class()->static_fields->Instance);
            };

            if (!skip_metadata_of_last_get_skipping_available_call.has_value() || skip_metadata_of_last_get_skipping_available_call->fade_on_automatic_skip) {
                core::api::faderb::fade_to_game_invisible(0.4f);
                core::events::schedule_task(0.4f, [=] {
                    execute_skip();

                    core::events::schedule_task(delay_fade_to_game_for_seconds, [] {
                        core::api::faderb::fade_to_game_visible(0.3f);
                    });
                });
            } else {
                execute_skip();
            }
        }
    });

    void register_cutscene_skip(const CustomCutsceneSkip& skip) {
        custom_skips.push_back(skip);
    }
} // namespace custom_cutscene_skips
