#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/DebugRendererSettings_SettingsPattern.h>
#include <Modloader/app/methods/Moon/VisualDebug/DebugRenderer.h>
#include <Modloader/app/methods/Moon/ImGuiManager.h>

namespace randomizer::debug_renderer {
    using namespace app::classes;

    IL2CPP_INTERCEPT(void, DebugRendererSettings_SettingsPattern, Init, app::DebugRendererSettings_SettingsPattern* this_ptr) {
        this_ptr->fields.SceneBounds = false;
        this_ptr->fields.ScenePaddingBoundaries = false;
        this_ptr->fields.ScenePaddingBoundariesBorder = false;
        this_ptr->fields.SceneLoadingBoundaries = false;
        this_ptr->fields.Colliders = true;
        this_ptr->fields.TriggerColliders = false;
        this_ptr->fields.DisabledColliders = false;
        this_ptr->fields.DamageColliders = true;
        this_ptr->fields.InvisibleCheckpoints = true;
        this_ptr->fields.SolidsColliders = false;
        this_ptr->fields.SeinCharacterColliders = true;
        this_ptr->fields.Rigidbodies = false;
        this_ptr->fields.EarlyZObjects = false;
        this_ptr->fields.Verlet = false;
        this_ptr->fields.Legend = true;
        next::DebugRendererSettings_SettingsPattern::Init(this_ptr);
    }

    IL2CPP_INTERCEPT(void, Moon::VisualDebug::DebugRenderer, set_Enabled, bool value) {
        if (value == Moon::VisualDebug::DebugRenderer::get_Enabled()) {
            return;
        }

        next::Moon::VisualDebug::DebugRenderer::set_Enabled(value);

        // This fixes the debug renderer with enabled HDR output.
        // Without ImGUI enabled, the rendering pipeline stops because the debug
        // renderer overlay is rendered in the non-HDR pipeline.
        if (value) {
            Moon::ImGuiManager::RegisterClient();
        } else {
            Moon::ImGuiManager::UnregisterClient();
        }
    }
}
