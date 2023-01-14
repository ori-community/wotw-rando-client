#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>

#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    /**
     * This extends the loading zone of the path between Wellspring floor 1 entrance and exit
     * to not suck.
     */

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        // Extend water_mill_a_exit
        {
            auto metadata = ScenesManager::GetSceneInformation(core::api::scenes::get_scenes_manager(), il2cpp::string_new("waterMillAExit"));

            auto& rect = metadata->fields.ScenePaddingBoundaries->fields._items->vector[0];
            rect.m_XMin -= 200.f;
            rect.m_YMin -= 200.f;
            rect.m_Width += 200.f;
            rect.m_Height += 200.f;
        }

        // Extend water_mill_b_get_leash
        {
            auto metadata = ScenesManager::GetSceneInformation(core::api::scenes::get_scenes_manager(), il2cpp::string_new("waterMillBGetLeash"));

            auto& rect = metadata->fields.ScenePaddingBoundaries->fields._items->vector[0];
            rect.m_XMin -= 100.f;
            rect.m_YMin -= 100.f;
            rect.m_Width += 100.f;
            rect.m_Height += 100.f;
        }
    });
} // namespace