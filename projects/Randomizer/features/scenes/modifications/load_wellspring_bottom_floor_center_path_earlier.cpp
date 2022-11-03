#include <Modloader/il2cpp_helpers.h>

#include <Modloader/common.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Core/api/scenes/scene_load.h>

using namespace app::classes;

namespace {
    /**
     * This extends the loading zone of the path between Wellspring floor 1 entrance and exit
     * to not suck.
     */

    void extend_water_mill_a_exit() {
        auto metadata = ScenesManager::GetSceneInformation(scenes::get_scenes_manager(), il2cpp::string_new("waterMillAExit"));

        auto& rect = metadata->fields.ScenePaddingBoundaries->fields._items->vector[0];
        rect.m_XMin -= 200.f;
        rect.m_YMin -= 200.f;
        rect.m_Width += 200.f;
        rect.m_Height += 200.f;
    }

    void extend_water_mill_b_get_leash() {
        auto metadata = ScenesManager::GetSceneInformation(scenes::get_scenes_manager(), il2cpp::string_new("waterMillBGetLeash"));

        auto& rect = metadata->fields.ScenePaddingBoundaries->fields._items->vector[0];
        rect.m_XMin -= 100.f;
        rect.m_YMin -= 100.f;
        rect.m_Width += 100.f;
        rect.m_Height += 100.f;
    }

    CALL_ON_INIT(extend_water_mill_a_exit);
    CALL_ON_INIT(extend_water_mill_b_get_leash);
} // namespace