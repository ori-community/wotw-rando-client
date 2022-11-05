#include <TAS/runtime/runtime.h>
#include <TAS/runtime/timeline.h>

#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Modloader/app/methods/UnityEngine/Application.h>
#include <Modloader/app/methods/UnityEngine/QualitySettings.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <Modloader/windows_api/memory.h>

#include <Core/ipc/ipc.h>
#include <Core/api/game/game.h>
#include <Core/input/simulator.h>

#include <Modloader/common.h>

#include <thread>

using namespace app::classes;

namespace tas::runtime {
    using namespace timeline;

    Timeline current_timeline;
    bool framestepping_enabled = false;
    bool framestep_requested = false;
    bool timeline_playback_active = false;

    namespace {
        IL2CPP_INTERCEPT(UnityEngine::Time, float, get_deltaTime, ()) {
            UnityEngine::Application::set_targetFrameRate(current_timeline.get_fps());
            UnityEngine::Time::set_captureFramerate(current_timeline.get_fps());
            UnityEngine::Time::set_fixedDeltaTime(current_timeline.get_delta_time());
            UnityEngine::Time::set_maximumDeltaTime(current_timeline.get_delta_time());
            UnityEngine::QualitySettings::set_vSyncCount(0);

            return current_timeline.get_delta_time();
        }

        IL2CPP_INTERCEPT(UnityEngine::Time, float, get_fixedDeltaTime, ()) {
            return current_timeline.get_delta_time();
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
            if (framestepping_enabled) {
                while (!framestep_requested && framestepping_enabled) {
                    game::event_bus().trigger_event(GameEvent::TASUpdate, EventTiming::Before);
                    std::this_thread::sleep_for(std::chrono::nanoseconds (static_cast<unsigned long long>(current_timeline.get_delta_time() * 1000000000ULL)));
                    game::event_bus().trigger_event(GameEvent::TASUpdate, EventTiming::After);
                }

                framestep_requested = false;
            }

            if (timeline_playback_active) {
                current_timeline.advance();
            }

            next_unityplayer_update();
        }

        namespace ipc_handlers {
            void set_framestepping_enabled(const nlohmann::json& j) {
                framestepping_enabled = j.at("payload").at("enabled").get<bool>();
            }

            void framestep(const nlohmann::json& j) {
                framestep_requested = true;
            }

            void set_timeline_playback_active(const nlohmann::json& j) {
                timeline_playback_active = j.at("payload").at("active").get<bool>();

                if (timeline_playback_active) {
                    core::input::enable_all_simulators();
                } else {
                    core::input::disable_all_simulators();
                }
            }

            void rewind_timeline(const nlohmann::json& j) {
                current_timeline.rewind();
            }
        }

        void initialize() {
            current_timeline.load_entries({
                    std::make_shared<ActionTimelineEntry>(0, 100, Action::Left),
                    std::make_shared<ActionTimelineEntry>(120, 15, Action::Right),
                    std::make_shared<ActionTimelineEntry>(150, 1, Action::Left),
                    std::make_shared<ActionTimelineEntry>(151, 1, Action::Dash),
                    std::make_shared<ActionTimelineEntry>(152, 120, Action::Right),
                    std::make_shared<ActionTimelineEntry>(152, 30, Action::Ability1),
            });

            core::ipc::register_request_handler("tas.set_framestepping_enabled", ipc_handlers::set_framestepping_enabled);
            core::ipc::register_request_handler("tas.framestep", ipc_handlers::framestep);
            core::ipc::register_request_handler("tas.set_timeline_playback_active", ipc_handlers::set_timeline_playback_active);
            core::ipc::register_request_handler("tas.rewind_timeline", ipc_handlers::rewind_timeline);
        }

        CALL_ON_INIT(initialize);
    }
}