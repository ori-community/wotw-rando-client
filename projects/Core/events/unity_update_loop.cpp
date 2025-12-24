#include <Core/api/game/game.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/memory.h>
#include <Profiler/tracy.h>

namespace core::events {
    namespace {
        void (*(next_unityplayer_update))() = nullptr;
        void* unityplayer_update_rva = (void*)(modloader::win::memory::resolve_unity_player_rva(0x824700));
        void unityplayer_update();

        modloader::interception::Intercept unityplayer_update_intercept(
            reinterpret_cast<void**>(&unityplayer_update_rva),
            reinterpret_cast<void**>(&next_unityplayer_update),
            reinterpret_cast<void*>(unityplayer_update),
            "unityplayer_update"
        );

        void unityplayer_update() {
            api::game::event_bus().trigger_event(GameEvent::UnityUpdateLoop, EventTiming::Before);
            next_unityplayer_update();
            api::game::event_bus().trigger_event(GameEvent::UnityUpdateLoop, EventTiming::After);
            FrameMark;
        }
    }
} // namespace
