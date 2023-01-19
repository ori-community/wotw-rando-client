#include <TAS/runtime/timeline.h>
#include <TAS/runtime/timeline_json_loader.h>

#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SinMovement.h>
#include <Modloader/app/methods/UnityEngine/Application.h>
#include <Modloader/app/methods/UnityEngine/QualitySettings.h>
#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Modloader/app/types/FixedRandom.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/memory.h>

#include <Core/api/game/game.h>
#include <Core/api/game/loading_detection.h>
#include <Core/api/game/player.h>
#include <Core/input/simulator.h>
#include <Core/ipc/ipc.h>
#include <Core/async_update.h>

#include <Modloader/common.h>
#include <Modloader/windows_api/console.h>

#include <thread>

using namespace app::classes;
using namespace modloader::win;

namespace tas::runtime {
    using namespace timeline;

    struct TASState {
        Timeline current_timeline;
        bool framestepping_enabled = false;
        bool timeline_playback_active = false;
    };

    TASState state;
    bool framestep_requested = false;

    namespace {
        IL2CPP_INTERCEPT(UnityEngine::Time, float, get_deltaTime, ()) {
            auto fps = static_cast<int>(state.current_timeline.get_fps());
            auto delta_time = state.current_timeline.get_delta_time();

            UnityEngine::Application::set_targetFrameRate(fps);
            UnityEngine::Time::set_captureFramerate(fps);
            UnityEngine::Time::set_fixedDeltaTime(delta_time);
            UnityEngine::Time::set_maximumDeltaTime(delta_time);
            UnityEngine::QualitySettings::set_vSyncCount(0);

            return delta_time;
        }

        IL2CPP_INTERCEPT(UnityEngine::Time, float, get_fixedDeltaTime, ()) {
            return state.current_timeline.get_delta_time();
        }

        IL2CPP_INTERCEPT(SinMovement, void, UpdateMovement, (app::SinMovement * this_ptr, float time)) {
            // Disable camera swaying
        }

        IL2CPP_INTERCEPT(ScenesManager, bool, get_InstantLoadScenes, (app::ScenesManager * this_ptr)) {
            return true;
        }

        /**
         * This is a separate IPC call because it is called from a different
         * thread. get_loading_state() is atomic.
         */
        void notify_loading_state_changed() {
            auto request = core::ipc::make_request("notify_loading_state_changed");
            request["payload"] = game::loading_detection::get_loading_state();
            core::ipc::send_message(request);
        }

        namespace loading_state_detection {
            std::atomic<LoadingState> last_notified_loading_state = LoadingState::NotLoading;

            void on_async_update(float delta) {
                auto current_state = game::loading_detection::get_loading_state();

                if (last_notified_loading_state != current_state) {
                    last_notified_loading_state = current_state;
                    notify_loading_state_changed();
                }
            }
        }

        void serialize_state(nlohmann::json& j) {
            j["timeline_fps"] = state.current_timeline.get_fps();
            j["timeline_current_frame"] = state.current_timeline.get_current_frame();
            j["timeline_playback_active"] = state.timeline_playback_active;
            j["timeline_current_rng_state"] = state.current_timeline.get_state().current_rng_state;
            j["framestepping_enabled"] = state.framestepping_enabled;

            loading_state_detection::last_notified_loading_state = game::loading_detection::get_loading_state();
            j["loading_state"] = loading_state_detection::last_notified_loading_state;

            auto position = game::player::get_position();
            j["ori_position"]["x"] = position.x;
            j["ori_position"]["y"] = position.y;

            auto real_mouse_position_in_ui_space = core::input::get_real_mouse_position_in_ui_space();
            j["real_mouse_position"]["x"] = real_mouse_position_in_ui_space.x;
            j["real_mouse_position"]["y"] = real_mouse_position_in_ui_space.y;
        }

        void notify_state_changed() {
            auto request = core::ipc::make_request("notify_tas_state_changed");
            serialize_state(request["payload"]);
            core::ipc::send_message(request);
        }

        void on_before_unity_loop(GameEvent event, EventTiming timing) {
            if (state.framestepping_enabled) {
                while (!framestep_requested && state.framestepping_enabled) {
                    game::event_bus().trigger_event(GameEvent::TASPausedUpdate, EventTiming::Before);
                    std::this_thread::sleep_for(std::chrono::nanoseconds(static_cast<unsigned long long>(state.current_timeline.get_delta_time() * 1000000000.f)));
                    game::event_bus().trigger_event(GameEvent::TASPausedUpdate, EventTiming::After);
                }

                framestep_requested = false;
            }

            if (state.timeline_playback_active) {
                if (game::loading_detection::get_loading_state() == LoadingState::NotLoading) {
                    state.current_timeline.advance();
                }

                types::FixedRandom::get_class()->static_fields->FixedUpdateIndex = state.current_timeline.get_state().current_rng_state;
            }
        }

        void on_after_unity_loop(GameEvent event, EventTiming timing) {
            notify_state_changed();
        }

        namespace ipc_handlers {
            void load_timeline_from_file(const nlohmann::json& j) {
                nlohmann::json tas_config;

                if (load_from_json_file(state.current_timeline, j.value("path", "tas.json"), tas_config)) {
                    if (state.timeline_playback_active) {
                        state.current_timeline.seek(state.current_timeline.get_current_frame());
                    }

                    auto request = core::ipc::make_request("notify_tas_timeline_loaded");
                    request["payload"]["tas_config"] = tas_config;
                    core::ipc::send_message(request);

                    notify_state_changed();
                }
            }

            void set_framestepping_enabled(const nlohmann::json& j) {
                state.framestepping_enabled = j.at("payload").at("enabled").get<bool>();
                notify_state_changed();
            }

            void framestep(const nlohmann::json& j) {
                framestep_requested = true;
            }

            void set_timeline_playback_active(const nlohmann::json& j) {
                state.timeline_playback_active = j.at("payload").at("active").get<bool>();

                if (state.timeline_playback_active) {
                    core::input::enable_all_simulators();
                } else {
                    core::input::disable_all_simulators();
                }

                notify_state_changed();
            }

            void rewind_timeline(const nlohmann::json& j) {
                state.current_timeline.rewind();
                notify_state_changed();
            }

            void get_state(const nlohmann::json& j) {
                auto response = core::ipc::respond_to(j);
                serialize_state(response["payload"]);
                core::ipc::send_message(response);
            }
        } // namespace ipc_handlers

        namespace cli_handlers {
            void reload_everything(std::string const& command, std::vector<console::CommandParam> const& params) {
                game::reload_everything();
            }

            void load(std::string const& command, std::vector<console::CommandParam> const& params) {
                game::load();
            }
        } // namespace cli_handlers

        void initialize() {
            core::ipc::register_request_handler("tas.load_timeline_from_file", &ipc_handlers::load_timeline_from_file);
            core::ipc::register_request_handler("tas.set_framestepping_enabled", &ipc_handlers::set_framestepping_enabled);
            core::ipc::register_request_handler("tas.framestep", &ipc_handlers::framestep);
            core::ipc::register_request_handler("tas.set_timeline_playback_active", &ipc_handlers::set_timeline_playback_active);
            core::ipc::register_request_handler("tas.rewind_timeline", &ipc_handlers::rewind_timeline);
            core::ipc::register_request_handler("tas.get_state", &ipc_handlers::get_state);

            core::async_update::event_bus().register_handler(&loading_state_detection::on_async_update);
            game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::Before, &on_before_unity_loop);
            game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, &on_after_unity_loop);

            console::register_command({ "tas", "game", "reload" }, &cli_handlers::reload_everything, true);
            console::register_command({ "tas", "game", "load" }, &cli_handlers::load, true);

            state.current_timeline.event_bus().register_handler(EventTiming::After, [](timeline::TimelineEvent event, EventTiming timing) {
                switch (event) {
                    case timeline::TimelineEvent::Rewind:
                    case timeline::TimelineEvent::Seek: {
                        game::save_controller()->fields.m_lastSavedFrameIndex = -1;
                    }
                }
            });
        }

        CALL_ON_INIT(initialize);
    } // namespace
} // namespace tas::runtime