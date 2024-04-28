#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/screen_position.h>
#include <Core/settings.h>
#include <optional>

#include <Modloader/app/methods/AreaMapCanvas.h>
#include <Modloader/app/methods/AreaMapCanvasOverlay.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/GameWorldArea.h>
#include <Modloader/app/methods/MenuTabManager.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/methods/ScalePositionForAspectRatio.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/PerformBackOutAction.h>
#include <Modloader/app/methods/UnityEngine/GL.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Graphics.h>
#include <Modloader/app/methods/UnityEngine/Material.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/types/AreaMapCanvas.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/AspectRatioManager.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/MenuTabManager.h>
#include <Modloader/app/types/ScalePositionForAspectRatio.h>
#include <Modloader/app/types/GameStateMachine.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    using namespace app::classes;

    constexpr float MAP_SCALE = 0.0175f;

    std::optional<app::GameObject*> minimap_go;
    std::optional<app::GameObject*> minimap_pivot_go;
    std::optional<app::GameObject*> player_position_go;
    std::vector<app::AreaMapCanvas*> canvases;
    app::Vector3 minimap_camera_position;
    app::Vector3 minimap_player_position;
    auto minimap_width = 16.f / 9.f;
    auto minimap_height = 1.f;
    auto area_segment_updated_this_frame = false;
    auto use_custom_map_mask = false;

    void update_canvas(app::AreaMapCanvas* canvas) {
        modloader::ScopedSetter _(use_custom_map_mask, true);
        AreaMapCanvas::UpdateAreaMaskTextureA(canvas);
        AreaMapCanvas::UpdateAreaMaskTextureB(canvas);
        UberShaderAPI::SetColor_1(canvas->fields.m_mapPlaneTextureRenderer, app::UberShaderProperty_Color__Enum::MainColor, {1, 1, 1, 0.75});

        const auto area_map_ui = types::AreaMapUI::get_class()->static_fields->Instance;
        if (area_map_ui != nullptr) {
            auto overlays = area_map_ui->fields.m_canvasOverlays;
            if (overlays != nullptr) {
                for (const auto& overlay: il2cpp::ArrayIterator(overlays)) {
                    AreaMapCanvasOverlay::ApplyMasks(overlay);
                }
            }
        }
    }

    IL2CPP_INTERCEPT(AreaMapCanvas, void, GenerateAreaMaskTexture, (app::AreaMapCanvas * this_ptr, app::RenderTexture* destination)) {
        if (!use_custom_map_mask) {
            next::AreaMapCanvas::GenerateAreaMaskTexture(this_ptr, destination);
            return;
        }

        const auto bounds = GameWorldArea::get_Bounds(this_ptr->fields.Area);

        UnityEngine::Graphics::SetRenderTarget_3(this_ptr->fields.m_worldmapCanvasRenderTexture);

        const auto [x, y, z] = minimap_camera_position;

        const std::vector<app::Vector3> mask_rect {
            {x - (minimap_width * 1.f) / MAP_SCALE, y - (minimap_height * 2.f) / MAP_SCALE, 0},
            {x + (minimap_width * 2.f) / MAP_SCALE, y - (minimap_height * 2.f) / MAP_SCALE, 0},
            {x - (minimap_width * 1.f) / MAP_SCALE, y + (minimap_height * 1.f) / MAP_SCALE, 0},
            {x + (minimap_width * 2.f) / MAP_SCALE, y + (minimap_height * 1.f) / MAP_SCALE, 0},
        };

        const std::vector<app::Vector3> erase_rect {
            {x - 50000, y - 50000, 0},
            {x + 50000, y - 50000, 0},
            {x - 50000, y + 50000, 0},
            {x + 50000, y + 50000, 0},
        };

        UnityEngine::GL::LoadPixelMatrix_2(
            bounds.m_Center.x - bounds.m_Extents.x + 0.5f,
            bounds.m_Center.x + bounds.m_Extents.x + 0.5f,
            bounds.m_Center.y - bounds.m_Extents.y + 0.5f,
            bounds.m_Center.y + bounds.m_Extents.y + 0.5f
        );

        UnityEngine::Material::SetPass(this_ptr->fields.m_areaMaskRenderingMaterial, 0);

        UnityEngine::GL::Begin(4);

        UnityEngine::GL::Color({0, 0, 0, 0});
        UnityEngine::GL::Vertex(erase_rect.at(0));
        UnityEngine::GL::Vertex(erase_rect.at(1));
        UnityEngine::GL::Vertex(erase_rect.at(2));
        UnityEngine::GL::Vertex(erase_rect.at(1));
        UnityEngine::GL::Vertex(erase_rect.at(2));
        UnityEngine::GL::Vertex(erase_rect.at(3));

        UnityEngine::GL::Color({1, 1, 1, 1});
        UnityEngine::GL::Vertex(mask_rect.at(0));
        UnityEngine::GL::Vertex(mask_rect.at(1));
        UnityEngine::GL::Vertex(mask_rect.at(2));
        UnityEngine::GL::Vertex(mask_rect.at(1));
        UnityEngine::GL::Vertex(mask_rect.at(2));
        UnityEngine::GL::Vertex(mask_rect.at(3));

        UnityEngine::GL::End();

        AreaMapCanvas::BlurTextures(this_ptr, this_ptr->fields.m_worldmapCanvasRenderTexture, destination);
    }

    IL2CPP_INTERCEPT(AreaMapUI, void, Init, (app::AreaMapUI* this_ptr)) {
        next::AreaMapUI::Init(this_ptr);

        if (core::settings::enable_minimap() && !minimap_go.has_value()) {
            minimap_go = types::GameObject::create();
            UnityEngine::GameObject::ctor_1(*minimap_go, il2cpp::string_new("minimap"));

            player_position_go = il2cpp::unity::instantiate_object(this_ptr->fields.PlayerPositionMarkerPrefab);
            il2cpp::unity::set_parent(*player_position_go, *minimap_go);

            const auto map_pivot_go = il2cpp::unity::find_child(this_ptr, "mapPivot");
            minimap_pivot_go = il2cpp::unity::instantiate_object(map_pivot_go);
            il2cpp::unity::set_parent(*minimap_pivot_go, *minimap_go);
            il2cpp::unity::set_active_recursively(*minimap_pivot_go, true);
            il2cpp::unity::set_local_scale(*minimap_pivot_go, {MAP_SCALE, MAP_SCALE, 1.f});

            const auto position = core::api::screen_position::get(core::api::screen_position::ScreenPosition::BottomRight, false);
            il2cpp::unity::set_local_position(*minimap_go, {position.x, position.y, -1.f});

            canvases = il2cpp::unity::get_components_in_children<app::AreaMapCanvas>(*minimap_pivot_go, types::AreaMapCanvas::get_class());
            for (const auto& canvas : canvases) {
                modloader::ScopedSetter _(use_custom_map_mask, true);

                canvas->fields.m_inited = false;
                AreaMapCanvas::Init(canvas);
                AreaMapCanvas::ResetMap(canvas);

                update_canvas(canvas);
            }

            const auto scale_position_component = il2cpp::unity::add_component<app::ScalePositionForAspectRatio>(
                *minimap_go,
                types::ScalePositionForAspectRatio::get_class()
            );
            ScalePositionForAspectRatio::ctor(scale_position_component);

            core::api::game::add_to_container(core::api::game::RandoContainer::GameObjects, *minimap_go);
        }
    }

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation, void, SetAreaState, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldAreaID__Enum area_id, int index, app::WorldMapAreaState__Enum state, app::Vector3 position)) {
        next::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
        area_segment_updated_this_frame = true;
    }

    bool should_hide_minimap() {
        const auto menu_tab_manager = types::MenuTabManager::get_class()->static_fields->Instance;

        if (menu_tab_manager != nullptr && menu_tab_manager->fields.m_backgroundState == app::MenuTabBackground__Enum::Black) {
            return true;
        }

        const auto game_state_machine = types::GameStateMachine::get_class()->static_fields->m_instance;

        if (game_state_machine != nullptr) {
            const auto state = game_state_machine->fields._CurrentState_k__BackingField;
            if (
                state == app::GameStateMachine_State__Enum::Logos ||
                state == app::GameStateMachine_State__Enum::Prologue ||
                state == app::GameStateMachine_State__Enum::StartScreen ||
                state == app::GameStateMachine_State__Enum::TitleScreen ||
                state == app::GameStateMachine_State__Enum::WatchCutscenes
            ) {
                return true;
            }
        }

        return PerformBackOutAction::get_IsAbandonChallangeActive();
    }

    void update_minimap_visibility() {
        if (core::settings::enable_minimap() && minimap_go.has_value()) {
            il2cpp::unity::set_active(*minimap_go, !should_hide_minimap());
        }
    }

    IL2CPP_INTERCEPT(MenuTabManager, void, UpdateBackgroundState, (app::MenuTabManager* this_ptr)) {
        const auto state_before = this_ptr->fields.m_backgroundState;
        next::MenuTabManager::UpdateBackgroundState(this_ptr);
        if (this_ptr->fields.m_backgroundState != state_before) {
            update_minimap_visibility();
        }
    }

    IL2CPP_INTERCEPT(GameStateMachine, void, set_CurrentState, (app::GameStateMachine * this_ptr, app::GameStateMachine_State__Enum value)) {
        next::GameStateMachine::set_CurrentState(this_ptr, value);
        update_minimap_visibility();
    }

    IL2CPP_INTERCEPT(PerformBackOutAction, void, ActivateAbandonChallange, (app::ConditionUberState * abandon_challange_condition)) {
        next::PerformBackOutAction::ActivateAbandonChallange(abandon_challange_condition);
        update_minimap_visibility();
    }

    IL2CPP_INTERCEPT(PerformBackOutAction, void, ClearAbandonChallangeCondition, ()) {
        next::PerformBackOutAction::ClearAbandonChallangeCondition();
        update_minimap_visibility();
    }

    void load_areamap_ui_for_minimap_if_needed() {
        if (core::settings::enable_minimap() && !minimap_go.has_value()) {
            const auto area_map_ui = types::AreaMapUI::get_class()->static_fields->Instance;
            if (area_map_ui != nullptr) {
                AreaMapUI::Init(area_map_ui);
            }
        }
    }

    [[maybe_unused]] auto on_finished_loading_save = core::api::game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, [](auto, auto) {
        load_areamap_ui_for_minimap_if_needed();
    });

    [[maybe_unused]] auto on_new_save = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [](auto, auto) {
        load_areamap_ui_for_minimap_if_needed();
    });

    [[maybe_unused]] auto on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        if (core::settings::enable_minimap()) {
            if (!minimap_go.has_value()) {
                load_areamap_ui_for_minimap_if_needed();

                if (!minimap_go.has_value()) {
                    return;
                }
            }

            minimap_width = types::AspectRatioManager::get_class()->static_fields->m_aspectRatio;

            const auto current_scene = core::api::scenes::current_scene();

            minimap_camera_position = (current_scene != nullptr && current_scene->fields.OverrideOriPositionInMap)
                ? current_scene->fields.MapPositionOverride
                : core::api::game::player::get_camera_position();

            minimap_player_position = (current_scene != nullptr && current_scene->fields.OverrideOriPositionInMap)
                ? current_scene->fields.MapPositionOverride
                : core::api::game::player::get_position();

            il2cpp::unity::set_local_position(
                *player_position_go,
                {(minimap_player_position.x - minimap_camera_position.x) * MAP_SCALE - minimap_width, (minimap_player_position.y - minimap_camera_position.y) * MAP_SCALE + minimap_height, 0.f}
            );

            il2cpp::unity::set_local_position(
                *minimap_pivot_go,
                {-minimap_camera_position.x * MAP_SCALE - minimap_width, -minimap_camera_position.y * MAP_SCALE + minimap_height, 0.f}
            );

            for (const auto& canvas : canvases) {
                update_canvas(canvas);
            }
        } else if (minimap_go.has_value()) {
            il2cpp::unity::destroy_object(*minimap_go);
            minimap_go = std::nullopt;
            minimap_pivot_go = std::nullopt;
            player_position_go = std::nullopt;
            canvases.clear();
        }
    });
}
