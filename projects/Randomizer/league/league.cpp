#include <Core/api/audio.h>
#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/graphics/sprite.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/events/action.h>
#include <Core/events/task.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/PetrifiedOwlBossDeathReactionBehaviour.h>
#include <Modloader/app/methods/PetrifiedOwlBossEntity.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/app/methods/SaveGameController.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/Core/Input_InputButtonProcessor.h>
#include <Modloader/app/methods/Moon/Wwise/Wwise.h>
#include <Modloader/app/methods/Moon/Wwise/WwiseEventSystem.h>
#include <Modloader/app/methods/PlatformMovement.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/types/CheckpointFunctionality.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/tracking/game_tracker.h>

#include <Core/settings.h>
#include <Randomizer/features/credits.h>
#include <httplib.h>
#undef MessageBox

using namespace app::classes;

namespace randomizer::league {
    namespace {
        enum class SubmissionStatus {
            Uploading,
            Done,
            Error,
            Cancelled,
        };

        const core::api::uber_states::UberState game_finished_uber_state(34543, 11226);

        std::atomic upload_attempt = 1;
        auto is_showing_league_summary_screen = false;
        std::unique_ptr<core::api::graphics::Sprite> black_background;
        std::shared_ptr<core::api::messages::MessageBox> league_submission_status_text_box;
        std::atomic submission_status = SubmissionStatus::Uploading;
        std::shared_ptr<std::thread> submit_thread;
        std::mutex status_message_mutex;
        std::string status_message;

        void update_status_text_box() {
            if (!is_showing_league_summary_screen) {
                league_submission_status_text_box = nullptr;
                return;
            }

            if (league_submission_status_text_box == nullptr) {
                league_submission_status_text_box = std::make_shared<core::api::messages::MessageBox>();
            }

            league_submission_status_text_box->alignment().set(app::AlignmentMode__Enum::Center);
            league_submission_status_text_box->horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Center);
            league_submission_status_text_box->vertical_anchor().set(app::VerticalAnchorMode__Enum::Top);
            league_submission_status_text_box->position().set(app::Vector3{0.f, 1.5f, 0.f});
            league_submission_status_text_box->fade_in().set(false);
            league_submission_status_text_box->fade_out().set(false);
            league_submission_status_text_box->show_box().set(false);

            std::string text;

            const auto time = timing::get_in_game_time();
            auto hours = static_cast<int>(std::floor(time / 60.f / 60.f));
            auto minutes = static_cast<int>(std::floor(time / 60.f)) % 60;
            auto seconds = static_cast<int>(std::floor(time)) % 60;
            auto milliseconds = static_cast<int>(std::fmod(time, 1.f) * 1000.f);

            text += "<s_1.8>";

            if (hours > 0) {
                text += std::format("{}:", hours);
            }

            text += std::format("{:02}:{:02}</><s_0.9>.{:03}</>", minutes, seconds, milliseconds);

            text += "\n\n";

            status_message_mutex.lock();
            switch (submission_status) {
                case SubmissionStatus::Uploading:
                    text += "Uploading save file...";
                    if (upload_attempt > 1) {
                        text += std::format("\n<s_0.8>Attempt {}</>", upload_attempt.load());
                    }

                    if (status_message.length() > 0) {
                        text += std::format("\n<s_0.7>{}</>", status_message);
                    }

                    break;
                case SubmissionStatus::Done:
                    text += "Your run has been $submitted$.\n"
                            "\n"
                            "Press [MenuSelect] to continue";
                    break;
                case SubmissionStatus::Error:
                    text += "Your run could @not be submitted@.";

                    if (status_message.length() > 0) {
                        text += std::format("\n<s_0.8>{}</>", status_message);
                    }

                    text += "\n\nPress [MenuSelect] to continue";

                    break;
            }
            status_message_mutex.unlock();

            league_submission_status_text_box->show(true, false);
            league_submission_status_text_box->text().set(text);
        }

        void leave_league_summary_screen() {
            is_showing_league_summary_screen = false;

            core::api::faderb::fade_in(1.f);
            core::events::schedule_task(1.f, [] {
                submission_status = SubmissionStatus::Cancelled;
                black_background = nullptr;
                league_submission_status_text_box = nullptr;
                GameStateMachine::SetToGame(GameStateMachine::get_Instance());
                il2cpp::unity::set_active(core::api::game::player::sein(), true);
                core::api::game::game_controller()->fields.m_lockInput = false;
                SeinDamageReciever::ToggleColliders(core::api::game::player::sein()->fields.Mortality->fields.DamageReciever, true);
                features::credits::start();
            });
        }

        IL2CPP_INTERCEPT(ScenesManager, void, TestForFallOutOfWorld, (app::ScenesManager* this_ptr)) {
            if (is_showing_league_summary_screen) {
                return;
            }

            next::ScenesManager::TestForFallOutOfWorld(this_ptr);
        }

        void set_status_message_thread_safe(const std::string& message) {
            status_message_mutex.lock();
            status_message = message;
            status_message_mutex.unlock();
        }

        void start_submission_thread(const std::string& save_file_path) {
            using namespace std::chrono_literals;

            if (!get_multiverse_id().has_value()) {
                submission_status = SubmissionStatus::Error;
                update_status_text_box();
                return;
            }

            if (submit_thread != nullptr && submit_thread->joinable()) {
                submission_status = SubmissionStatus::Cancelled;
                submit_thread->join();
            }

            submission_status = SubmissionStatus::Uploading;
            const auto host = core::settings::host();
            const auto insecure = core::settings::insecure();
            const auto multiverse_id = get_multiverse_id().value();
            const auto jwt = randomizer::online::get_jwt();

            submit_thread = std::make_shared<std::thread>([host, insecure, multiverse_id, jwt, save_file_path]() {
                upload_attempt.store(0);

                std::ifstream input(save_file_path, std::ios::binary);
                std::vector<char> save_file_data(std::istreambuf_iterator<char>(input), {});

                while (submission_status.load() == SubmissionStatus::Uploading) {
                    const auto attempt = upload_attempt.fetch_add(1) + 1;

                    if (attempt > 1) {
                        core::events::schedule_task_for_next_update(update_status_text_box);
                        std::this_thread::sleep_for(10s);
                    }

                    try {
                        httplib::Client client(std::format("{}://{}", insecure ? "http" : "https", host));

                        auto result = client.Post(std::format("/api/league/{}/submission", multiverse_id), {
                            {"User-Agent", std::format("OriAndTheWillOfTheWispsRandomizer/{}", randomizer_version().to_string())},
                            {"Authorization", std::format("Bearer {}", jwt)}
                        }, save_file_data.data(), save_file_data.size(), "application/octet-stream");

                        if (result.error() != httplib::Error::Success) {
                            set_status_message_thread_safe("Request failed");
                            continue;
                        }

                        if (result->status == httplib::StatusCode::Created_201) {
                            submission_status = SubmissionStatus::Done;
                            break;
                        }

                        if (result->status == httplib::StatusCode::UnprocessableContent_422) {
                            submission_status = SubmissionStatus::Error;
                            set_status_message_thread_safe(result->body);
                            break;
                        }

                        set_status_message_thread_safe(std::format("Request failed ({}, {})", result->status, result->body));
                    } catch (std::exception& e) {
                        set_status_message_thread_safe(std::format("Request failed ({})", e.what()));
                    }
                }

                core::events::schedule_task_for_next_update(update_status_text_box);
            });
        }

        IL2CPP_INTERCEPT(PetrifiedOwlBossDeathReactionBehaviour, void, OnExitTask, (app::PetrifiedOwlBossDeathReactionBehaviour * this_ptr, app::IContext* context)) {
            game_finished_uber_state.set(true);
            timing::force_set_game_finished(true);  // Need this because we immediately set the GameStateMachine to TitleScreen in league games...

            Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(this_ptr->fields.DeathTimeline));

            const auto shriek_entity = reinterpret_cast<app::PetrifiedOwlBossEntity*>(this_ptr->fields._._._.m_entity);

            PetrifiedOwlBossEntity::ResetAllBreakableStates(shriek_entity);

            core::api::uber_states::UberState(shriek_entity->fields.PhasesState).set(0);

            this_ptr->fields.m_checkpoint.Mode = app::CheckpointFunctionality_CheckpointPositionMode__Enum::ManualPosition;

            // Imitate CheckpointFunctionality but with coordinates at Shriek TP
            PlatformMovement::OverridePositionNextSave(
                reinterpret_cast<app::PlatformMovement*>(core::api::game::player::sein()->fields.PlatformBehaviour->fields.PlatformMovement),
                app::Vector3{553.947, -3609.157, 0.f}
            );
            core::api::game::player::refill_energy();
            core::api::game::player::refill_health();
            GameController::CreateCheckpoint(core::api::game::game_controller(), true, true);

            const auto multiverse_info = randomizer::multiplayer_universe().multiverse_info();
            if (multiverse_info != nullptr && multiverse_info->handlertype() == Network::MultiverseInfoMessage_GameHandlerType_League) {
                il2cpp::unity::set_position(core::api::game::player::sein(), {0.f, 0.f, 0.f});
                core::api::game::player::snap_camera();
                il2cpp::unity::set_active(core::api::game::player::sein(), false);

                core::api::game::game_controller()->fields.m_lockInput = true;
                SeinDamageReciever::ToggleColliders(core::api::game::player::sein()->fields.Mortality->fields.DamageReciever, false);

                is_showing_league_summary_screen = true;

                GameStateMachine::SetToTitleScreen(GameStateMachine::get_Instance());

                black_background = std::make_unique<core::api::graphics::Sprite>();
                black_background->enabled(true);
                black_background->local_scale({1000, 1000, 1});
                black_background->local_position({0, 0, 0});
                black_background->texture(core::api::graphics::textures::get_texture("file:assets/textures/black_pixel.png"));

                update_status_text_box();

                const auto events = Moon::Wwise::Wwise::get_Events();
                const auto menu = Game::UI::get_Menu();
                Moon::Wwise::WwiseEventSystem::FireAndForget_1(
                    events,
                    menu->fields.Sounds->fields.ResetMusicStatesEvent,
                    reinterpret_cast<app::ISoundHost*>(Moon::Wwise::Wwise::get_DefaultDevSoundHost())
                );

                core::events::schedule_task(2.f, [] {
                    core::api::faderb::fade_out(1.f);
                    core::api::audio::play_sound(SoundEventID::LeagueSubmitted);

                    const auto save_controller = core::api::game::save_controller();
                    const auto current_save_file_path = il2cpp::convert_csstring(SaveGameController::get_CurrentSaveFileInfo(save_controller)->fields.m_FullSaveFilePath);
                    start_submission_thread(current_save_file_path);
                });
            } else {
                const auto resolved_epilogue_timeline = il2cpp::invoke<app::MoonTimeline>(shriek_entity->fields.EpilogueTimeline, "Resolve", 0);
                Moon::Timeline::TimelineEntity::StartPlayback_1(reinterpret_cast<app::TimelineEntity*>(resolved_epilogue_timeline));
            }
        }

        auto on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](GameEvent event, EventTiming timing) {
            if (is_showing_league_summary_screen) {
                const auto menu_select_input = types::Input_Cmd::get_class()->static_fields->MenuSelect;

                if (!il2cpp::unity::is_valid(menu_select_input)) {
                    return;
                }

                if (submission_status != SubmissionStatus::Uploading && Core::Input_InputButtonProcessor::get_OnPressed(menu_select_input)) {
                    leave_league_summary_screen();
                }
            }
        });
    }
}
