#include <Modloader/il2cpp_helpers.h>

#include <Modloader/common.h>
#include <Core/utils/event_bus.h>
#include <Core/api/scenes/scene_load.h>

namespace {
    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state == app::SceneState__Enum::Loaded && metadata->scene_name == "willowCeremonyIntro") {
            /**
             * Why do we need this?
             *
             * Both scenes "willowCeremonyIntro" and "petrifiedOwlBossArena2" keep the "epilogueMaster" scene loaded
             * when the player is inside their padding area. Problem is, that there is a small area in the Shriek
             * escape (bridge tunnel) where the player is not inside either padding area, causing the epilogue to unload.
             * If you manage to kill Shriek while the epilogue is not loaded, the final cutscene will not play and you
             * respawn either in the escape, or if you void/die before starting the escape. The screen will stay dark
             * for some time until it returns back to normal eventually.
             *
             * To fix this problem, we extend the scene padding boundary of the Phase 1 arena scene ("willowCeremonyIntro")
             * ~100 units to the right, causing it to overlap with the boundaries of the Phase 3 scene ("petrifiedOwlBossArena2").
             */
            metadata->scene->fields.MetaData->fields.ScenePaddingBoundaries->fields._items->vector[0].m_Width = 350.f;
        }
    }

    void initialize() {
        scenes::event_bus().register_handler(&on_scene_load);
    }

    CALL_ON_INIT(initialize);
} // namespace