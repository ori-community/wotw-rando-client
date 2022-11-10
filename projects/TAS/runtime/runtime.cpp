#include <TAS/runtime/timeline.h>
#include <TAS/runtime/timeline_json_loader.h>

#include <Modloader/app/methods/UnityEngine/Application.h>
#include <Modloader/app/methods/UnityEngine/QualitySettings.h>
#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Modloader/app/methods/SinMovement.h>
#include <Modloader/app/types/FixedRandom.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/memory.h>

#include <Core/api/game/game.h>
#include <Core/input/simulator.h>
#include <Core/ipc/ipc.h>

#include <Modloader/common.h>

#include <thread>

using namespace app::classes;

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

        IL2CPP_INTERCEPT(SinMovement, void, UpdateMovement, (app::SinMovement* this_ptr, float time)) {
            // Disable camera swaying
        }

        unsigned long last_notified_frame = 0;
        void notify_current_timeline_current_frame_changed() {
            if (state.current_timeline.get_current_frame() != last_notified_frame) {
                auto request = core::ipc::make_request("notify_tas_current_frame_updated");
                request["payload"]["current_frame"] = state.current_timeline.get_current_frame();
                core::ipc::send_message(std::move(request));
                last_notified_frame = state.current_timeline.get_current_frame();
            }
        }

        void (*(next_unityplayer_update))() = nullptr;
        void* yz = (void*)(modloader::win::memory::resolve_unity_player_rva(0x824700));
        void unityplayer_update();

        modloader::interception::intercept unityplayer_update_intercept(
                reinterpret_cast<void**>(&yz),
                reinterpret_cast<void**>(&next_unityplayer_update),
                reinterpret_cast<void*>(unityplayer_update),
                "unityplayer_update"
        );

        void unityplayer_update() {
            if (state.framestepping_enabled) {
                while (!framestep_requested && state.framestepping_enabled) {
                    game::event_bus().trigger_event(GameEvent::TASUpdate, EventTiming::Before);
                    std::this_thread::sleep_for(std::chrono::nanoseconds(static_cast<unsigned long long>(state.current_timeline.get_delta_time() * 1000000000ULL)));
                    game::event_bus().trigger_event(GameEvent::TASUpdate, EventTiming::After);
                }

                framestep_requested = false;
            }

            if (state.timeline_playback_active) {
                state.current_timeline.advance();

                types::FixedRandom::get_class()->static_fields->FixedUpdateIndex = state.current_timeline.get_state().current_rng_state;

                notify_current_timeline_current_frame_changed();
            }

            next_unityplayer_update();
        }

        namespace ipc_handlers {
            void load_timeline_from_file(const nlohmann::json& j) {
                load_from_json_file(state.current_timeline, j.value("path", "tas.json"));

                if (state.timeline_playback_active) {
                    state.current_timeline.seek(state.current_timeline.get_current_frame());
                }

                auto request = core::ipc::make_request("notify_tas_timeline_loaded");
                core::ipc::send_message(request);
            }

            void set_framestepping_enabled(const nlohmann::json& j) {
                state.framestepping_enabled = j.at("payload").at("enabled").get<bool>();
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
            }

            void rewind_timeline(const nlohmann::json& j) {
                state.current_timeline.rewind();
                notify_current_timeline_current_frame_changed();
            }

            void get_state(const nlohmann::json& j) {
                auto response = core::ipc::respond_to(j);
                response["payload"]["timeline_fps"] = state.current_timeline.get_fps();
                response["payload"]["timeline_current_frame"] = state.current_timeline.get_current_frame();
                response["payload"]["timeline_playback_active"] = state.timeline_playback_active;
                response["payload"]["framestepping_enabled"] = state.framestepping_enabled;
                core::ipc::send_message(response);
            }

            void get_real_mouse_position(const nlohmann::json& j) {
                auto response = core::ipc::respond_to(j);

                auto real_mouse_position_in_ui_space = core::input::get_real_mouse_position_in_ui_space();

                response["payload"]["x"] = real_mouse_position_in_ui_space.x;
                response["payload"]["y"] = real_mouse_position_in_ui_space.y;
                response["payload"]["space"] = "UI"; // Hardcoded for now

                core::ipc::send_message(response);
            }
        } // namespace ipc_handlers

        void initialize() {
            core::ipc::register_request_handler("tas.load_timeline_from_file", &ipc_handlers::load_timeline_from_file);
            core::ipc::register_request_handler("tas.set_framestepping_enabled", &ipc_handlers::set_framestepping_enabled);
            core::ipc::register_request_handler("tas.framestep", &ipc_handlers::framestep);
            core::ipc::register_request_handler("tas.set_timeline_playback_active", &ipc_handlers::set_timeline_playback_active);
            core::ipc::register_request_handler("tas.rewind_timeline", &ipc_handlers::rewind_timeline);
            core::ipc::register_request_handler("tas.get_state", &ipc_handlers::get_state);
            core::ipc::register_request_handler("tas.get_real_mouse_position", &ipc_handlers::get_real_mouse_position);
        }

        CALL_ON_INIT(initialize);
    } // namespace
} // namespace tas::runtime