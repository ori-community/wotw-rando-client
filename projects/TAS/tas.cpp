#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Modloader/app/methods/UnityEngine/Application.h>
#include <Modloader/app/methods/UnityEngine/QualitySettings.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <Modloader/windows_api/memory.h>

#include <Core/ipc/ipc.h>
#include <Randomizer/input/simulator.h>

#include "tas.h"
#include <Modloader/common.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <chrono>
#include <string>
#include <thread>

using namespace app::classes;

namespace tas {
    namespace {
        constexpr int FRAMERATE = 60;
        constexpr float DELTA_TIME = 1.f / FRAMERATE;

        IL2CPP_INTERCEPT(UnityEngine::Time, float, get_deltaTime, ()) {
            UnityEngine::Application::set_targetFrameRate(FRAMERATE);
            UnityEngine::Time::set_captureFramerate(FRAMERATE);
            UnityEngine::Time::set_fixedDeltaTime(DELTA_TIME);
            UnityEngine::Time::set_maximumDeltaTime(DELTA_TIME);
            UnityEngine::QualitySettings::set_vSyncCount(0);

            return DELTA_TIME;
        }

        IL2CPP_INTERCEPT(UnityEngine::Time, float, get_fixedDeltaTime, ()) {
            return DELTA_TIME;
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
                    game::event_bus().trigger_event(GameEvent::TASUpdate, EventTiming::Start);
                    std::this_thread::sleep_for(std::chrono::nanoseconds (static_cast<unsigned long long>(DELTA_TIME * 1000000000ULL)));
                    game::event_bus().trigger_event(GameEvent::TASUpdate, EventTiming::End);
                }

                // TODO: Run tas

                framestep_requested = false;
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
        }

        void initialize() {
            randomizer::ipc::register_request_handler("tas.set_framestepping_enabled", ipc_handlers::set_framestepping_enabled);
            randomizer::ipc::register_request_handler("tas.framestep", ipc_handlers::framestep);
        }

        CALL_ON_INIT(initialize);
    }
}