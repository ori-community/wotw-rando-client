#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/events/action.h>
#include <Modloader/app/methods/Moon/Timeline/ActivateAnimatorSystem.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/NewSetupStateController.h>
#include <Modloader/app/types/Renderer.h>
#include "Core/api/uber_states/uber_state.h"
#include "Core/enums/uber_state.h"
#include "Core/property/reactivity.h"
#include "Modloader/il2cpp_helpers.h"


namespace {

    core::api::uber_states::UberState water_transparent_state(UberStateGroup::RandoConfig, 204);
    il2cpp::WeakGCRef<app::GameObject> wellspring_background_rectangle_ref;
    il2cpp::WeakGCRef<app::GameObject> wellspring_black_rectangle_ref;
    il2cpp::WeakGCRef<app::GameObject> wellspring_black_rectangle_ref_2;

    il2cpp::WeakGCRef<app::GameObject> silent_swim_dark_overlay_ref;
    il2cpp::WeakGCRef<app::GameObject> silent_swim_dark_overlay_ref_2;
    il2cpp::WeakGCRef<app::GameObject> silent_swim_dark_overlay_ref_3;

    struct CustomWaterModifier {
        std::function<void(app::GameObject*, bool)> update_function;
        std::optional<il2cpp::WeakGCRef<app::GameObject>> scene_root_ref;
        std::shared_ptr<const core::reactivity::ReactiveEffect> effect = nullptr;
    };

    void set_active(app::GameObject* go, bool active) {
        if (il2cpp::unity::is_valid(go)) {
            il2cpp::unity::set_active(go, active);
        }
    }

    void set_color(app::GameObject* go, app::Color color) {
        if (il2cpp::unity::is_valid(go)) {
            const auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(go, types::Renderer::get_class(), true);
            for (const auto& renderer: renderers) {
                UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, color);
            }
        }
    }

    void downswim_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;
        //TODO: Bring back the black overlay but make it transparent
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"waterGroupParent", "waterGroupA", "diseasedWaterSwampNightcrawlerA (2)", "backCenter", "water (7)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"waterGroupParent", "waterGroupA", "diseasedWaterSwampNightcrawlerA (2)", "frontCenter", "water (5)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"waterGroupParent", "waterGroupA", "diseasedWaterSwampNightcrawlerA (2)", "frontCenter", "water (6)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"waterGroupParent", "waterGroupA", "earlyZMesh_waterGroupA"})
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void under_downswim_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;

        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"setups", "poisonedWater", "diseasedWaterSwampNightcrawlerA (1)", "frontCenter", "water (4)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"setups", "poisonedWater", "diseasedWaterSwampNightcrawlerA (1)", "frontCenter", "water (5)"}
            )
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void under_kwolok_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        auto water_gos = il2cpp::unity::find_children(scene_root_go, std::vector<std::string>{"artSetups", "water"});

        std::vector<app::GameObject*> gos_to_disable;
        gos_to_disable.push_back(il2cpp::unity::find_child(water_gos[1], std::vector<std::string>{"corruptedState", "cubicTransparencyMaskF"}));

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    app::GameObject* clean_state_go = nullptr;
    void silent_swim_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "artSetups", "water", "poisonedWater", "corruptedWaterNew", "diseasedWaterSwampNightcrawlerA (1)", "effects", "vignetteMaskC (3)"
                }
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "artSetups", "water", "poisonedWater", "corruptedWaterNew", "diseasedWaterSwampNightcrawlerA (1)", "effects", "vignetteMaskC (5)"
                }
            )
        );
        app::GameObject* dark_overlay_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "artSetups", "water", "poisonedWater", "corruptedWaterNew", "diseasedWaterSwampNightcrawlerA (1)", "frontCenter", "water (4)"
            }
        );
        il2cpp::unity::set_position(dark_overlay_go, app::Vector3{246.0, -4255.5, -3.2});
        il2cpp::unity::set_local_scale(dark_overlay_go, app::Vector3{88.5, 28.9, 1.f});

        if (!silent_swim_dark_overlay_ref.is_valid()) {
            silent_swim_dark_overlay_ref = il2cpp::WeakGCRef<app::GameObject>(il2cpp::unity::instantiate_object(dark_overlay_go));
            il2cpp::unity::set_parent(*silent_swim_dark_overlay_ref, il2cpp::unity::get_parent(dark_overlay_go));
            il2cpp::unity::set_local_position(*silent_swim_dark_overlay_ref, il2cpp::unity::get_local_position(dark_overlay_go));
        }
        app::GameObject* dark_overlay_go_2 = *silent_swim_dark_overlay_ref;
        il2cpp::unity::set_position(dark_overlay_go_2, app::Vector3{300.4, -4223.9, -3.3});
        il2cpp::unity::set_local_scale(dark_overlay_go_2, app::Vector3{45.f, 15.f, 1.f});

        if (!silent_swim_dark_overlay_ref_2.is_valid()) {
            silent_swim_dark_overlay_ref_2 = il2cpp::WeakGCRef<app::GameObject>(il2cpp::unity::instantiate_object(dark_overlay_go));
            il2cpp::unity::set_parent(*silent_swim_dark_overlay_ref_2, il2cpp::unity::get_parent(dark_overlay_go));
            il2cpp::unity::set_local_position(*silent_swim_dark_overlay_ref_2, il2cpp::unity::get_local_position(dark_overlay_go));
        }
        app::GameObject* dark_overlay_go_3 = *silent_swim_dark_overlay_ref_2;
        il2cpp::unity::set_position(dark_overlay_go_3, app::Vector3{351.f, -4254.7, -3.3});
        il2cpp::unity::set_local_scale(dark_overlay_go_3, app::Vector3{45.f, 35.f, 1.f});

        if (!silent_swim_dark_overlay_ref_3.is_valid()) {
            silent_swim_dark_overlay_ref_3 = il2cpp::WeakGCRef<app::GameObject>(il2cpp::unity::instantiate_object(dark_overlay_go));
            il2cpp::unity::set_parent(*silent_swim_dark_overlay_ref_3, il2cpp::unity::get_parent(dark_overlay_go));
            il2cpp::unity::set_local_position(*silent_swim_dark_overlay_ref_3, il2cpp::unity::get_local_position(dark_overlay_go));
        }
        app::GameObject* dark_overlay_go_4 = *silent_swim_dark_overlay_ref_3;
        il2cpp::unity::set_position(dark_overlay_go_4, app::Vector3{325.7, -4260.0, -3.2});
        il2cpp::unity::set_local_scale(dark_overlay_go_4, app::Vector3{30.5, 28.9, 1.f});

        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{"artSetups", "water", "poisonedWater", "corruptedWaterNew", "diseasedWaterSwampNightcrawlerA (1)", "uberWaters"}
            )
        );

        clean_state_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"artSetups", "water", "cleanWater"});

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
        auto water_state_controller_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"artSetups", "waterStateController"});
        auto nssc = il2cpp::unity::get_component<app::NewSetupStateController>(water_state_controller_go, types::NewSetupStateController::get_class());
        nssc->fields.StateHolder->fields.Modifiers->fields._items
            ->vector[1] // Dirty water modifier
            ->fields.m_uberStateModifierDatas->fields._items
            ->vector[0] // Clean water modifier data
            ->fields.Booleans->fields._items
            ->vector[0] = true; // if the setup controller is in the dirty water state it takes the clean water go and sets it to true
        UnityEngine::GameObject::set_active(clean_state_go, !corruption_visible); // if the corruption is removed, these states need to be enabled
        set_color(dark_overlay_go, corruption_visible ? app::Color{0, 0, 0, 1} : app::Color{0, 0, 0, 0.8});
        set_color(dark_overlay_go_2, corruption_visible ? app::Color{0, 0, 0, 1} : app::Color{0, 0, 0, 0.8});
    }

    void under_wellspring_water_visuals_a_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;

        app::GameObject* background_rectangle_go = il2cpp::unity::find_child(
            scene_root_go, std::vector<std::string>{"artSetups", "corruptState", "diseasedWaterNew", "backCenter", "water (5)"}
        );
        il2cpp::unity::set_position(background_rectangle_go, app::Vector3{-832.3, -4092.6, 2.5});
        il2cpp::unity::set_local_scale(background_rectangle_go, app::Vector3{35.f, 20.2, 1.f});

        if (!wellspring_background_rectangle_ref.is_valid()) {
            wellspring_background_rectangle_ref = il2cpp::WeakGCRef<app::GameObject>(il2cpp::unity::instantiate_object(background_rectangle_go));
            il2cpp::unity::set_parent(*wellspring_background_rectangle_ref, il2cpp::unity::get_parent(background_rectangle_go));
            il2cpp::unity::set_local_position(*wellspring_background_rectangle_ref, il2cpp::unity::get_local_position(background_rectangle_go));
        }

        app::GameObject* background_rectangle_go_2 = *wellspring_background_rectangle_ref;
        il2cpp::unity::set_position(background_rectangle_go_2, app::Vector3{-742.3, -4092.6, 2.5});
        il2cpp::unity::set_local_scale(background_rectangle_go_2, app::Vector3{20.f, 20.2, 1.f});

        app::GameObject* black_rectangle_go = il2cpp::unity::find_child(
            scene_root_go, std::vector<std::string>{"artSetups", "corruptState", "diseasedWaterNew", "frontCenter", "waterTempSolution"}
        );

        il2cpp::unity::set_position(black_rectangle_go, app::Vector3{-739.0, -4108.f, -5.1});
        il2cpp::unity::set_local_scale(black_rectangle_go, app::Vector3{20.f, 30.f, 1.f});
        set_color(black_rectangle_go, corruption_visible ? app::Color{0, 0, 0, 1} : app::Color{1, 0, 0.5, 0.75});

        if (!wellspring_black_rectangle_ref.is_valid()) {
            wellspring_black_rectangle_ref = il2cpp::WeakGCRef<app::GameObject>(il2cpp::unity::instantiate_object(black_rectangle_go));
            il2cpp::unity::set_parent(*wellspring_black_rectangle_ref, il2cpp::unity::get_parent(black_rectangle_go));
            il2cpp::unity::set_local_position(*wellspring_black_rectangle_ref, il2cpp::unity::get_local_position(black_rectangle_go));
        }

        app::GameObject* black_rectangle_go_2 = *wellspring_black_rectangle_ref;
        il2cpp::unity::set_position(black_rectangle_go_2, app::Vector3{-767.1, -4130.f, -5.1});
        il2cpp::unity::set_local_scale(black_rectangle_go_2, app::Vector3{35.f, 35.f, 1.f});
        set_color(black_rectangle_go_2, corruption_visible ? app::Color{0, 0, 0, 1} : app::Color{1, 0, 0.5, 0.75});

        if (!wellspring_black_rectangle_ref_2.is_valid()) {
            wellspring_black_rectangle_ref_2 = il2cpp::WeakGCRef<app::GameObject>(il2cpp::unity::instantiate_object(black_rectangle_go));
            il2cpp::unity::set_parent(*wellspring_black_rectangle_ref_2, il2cpp::unity::get_parent(black_rectangle_go));
            il2cpp::unity::set_local_position(*wellspring_black_rectangle_ref_2, il2cpp::unity::get_local_position(black_rectangle_go));
        }

        app::GameObject* black_rectangle_go_3 = *wellspring_black_rectangle_ref_2;
        il2cpp::unity::set_position(black_rectangle_go_3, app::Vector3{-808.0, -4130.f, -5.1});
        il2cpp::unity::set_local_scale(black_rectangle_go_3, app::Vector3{50.f, 28.f, 1.f});
        set_color(black_rectangle_go_3, corruption_visible ? app::Color{0, 0, 0, 1} : app::Color{1, 0, 0.5, 0.75});
    }

    void under_wellspring_water_visuals_b_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_enable;

        gos_to_enable.push_back(il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"artSetups", "cleanState"}));

        il2cpp::unity::destroy_object(il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"dynamicSettings"}));
        for (auto go: gos_to_enable) {
            if (il2cpp::unity::is_valid(go)) {
                Moon::Timeline::ActivateAnimatorSystem::SubmitStaticGameObjectState(Moon::Timeline::ActivateAnimatorSystem::get_Instance(), go, true);
                UnityEngine::GameObject::set_active(go, !corruption_visible); // if the corruption is removed, these states need to be enabled
            }
        }
    }

    void wellspring_top_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;

        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "corruptedGroup", "diseasedWaterWatermillInterior", "waterCards", "water (4)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "corruptedGroup", "diseasedWaterWatermillInterior", "waterCards", "water (8)"}
            )
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void wellspring_waterdash_switch_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;

        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artInteractives", "diseasedWater", "diseasedWaterWatermillInterior", "waterCards", "water (4)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artInteractives", "diseasedWater", "diseasedWaterWatermillInterior", "waterCards", "water (6)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artInteractives", "diseasedWater", "diseasedWaterWatermillInterior", "waterCards", "water (8)"}
            )
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void marsh_to_pools_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;
        //TODO: Bring back the dark overlay and make it transparent
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "diseasedWaterWatermillInterior", "cubicTransparencyMaskC"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "diseasedWaterWatermillInterior", "cubicTransparencyMaskC (1)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "diseasedWaterWatermillInterior", "waterCards", "water (10)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "diseasedWaterWatermillInterior", "waterCards", "water (4)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "diseasedWaterWatermillInterior", "waterCards", "water (6)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "earlyZMesh_corruptWater"})
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void marsh_resilience_shard_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;

        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "diseasedWater", "diseasedWaterSwampNightcrawlerA (1)", "backCenter", "water (5)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{"artSetups", "water", "diseasedWater", "diseasedWaterSwampNightcrawlerA (1)", "frontCenter", "water (4)"}
            )
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void west_marsh_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;

        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{"artSetups", "water", "diseasedWater", "manualToggle", "diseasedWaterSwampNightcrawlerB", "backCenter", "water (5)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{"artSetups", "water", "diseasedWater", "manualToggle", "diseasedWaterSwampNightcrawlerB", "frontCenter", "water (4)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{"artSetups", "water", "diseasedWater", "manualToggle", "diseasedWaterSwampNightcrawlerB", "frontCenter", "water (5)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{"artSetups", "water", "diseasedWater", "manualToggle", "diseasedWaterSwampNightcrawlerC", "backCenter", "water (5)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"artSetups", "water", "diseasedWater", "manualToggle", "corruptCover (1)"})
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"artSetups", "water", "diseasedWater", "manualToggle", "corruptCover (2)"})
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void marsh_east_longswim_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;
        //TODO: Use the purple background from the right side and stretch it to whole water section, remove the darkness in the front cuz it ugly
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "diseasedWater", "diseasedWaterSwampNightcrawlerB (1)", "backCenter", "water (5)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{"artSetups", "water", "diseasedWater", "diseasedWaterSwampNightcrawlerB (1)", "frontCenter", "water (4)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "diseasedWater", "diseasedWaterSwampNightcrawlerB (1)", "corruptCover"}
            )
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void marsh_above_burrows_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;

        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "art",
                    "flattened",
                    "hugeCell",
                    "water (1)_2_31",
                    "waterGroupB",
                    "diseasedWater",
                    "diseasedWaterSwampNightcrawlerA (1)",
                    "backCenter",
                    "water (5)"
                }
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "art",
                    "flattened",
                    "hugeCell",
                    "water (1)_2_31",
                    "waterGroupB",
                    "diseasedWater",
                    "diseasedWaterSwampNightcrawlerA (1)",
                    "frontCenter",
                    "water (4)"
                }
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "art",
                    "flattened",
                    "hugeCell",
                    "water (1)_2_31",
                    "waterGroupB",
                    "diseasedWater",
                    "diseasedWaterSwampNightcrawlerA (1)",
                    "frontCenter",
                    "water (5)"
                }
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "art",
                    "flattened",
                    "hugeCell",
                    "water (1)_2_31",
                    "waterGroupB",
                    "diseasedWater",
                    "diseasedWaterSwampNightcrawlerA (1)",
                    "corruptionUnderwater (1)",
                    "diseasedWaterTentaclesB"
                }
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "art",
                    "flattened",
                    "hugeCell",
                    "water (1)_2_31",
                    "waterGroupB",
                    "diseasedWater",
                    "diseasedWaterSwampNightcrawlerA (1)",
                    "corruptionUnderwater (1)",
                    "gravityElementVeinsD"
                }
            )
        );

        auto water_veins = il2cpp::unity::find_children(
            scene_root_go,
            std::vector<std::string>{
                "art",
                "flattened",
                "hugeCell",
                "water (1)_2_31",
                "waterGroupB",
                "diseasedWater",
                "diseasedWaterSwampNightcrawlerA (1)",
                "corruptionUnderwater (1)",
                "gravityElementVeinsC"
            }
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }

        for (auto go: water_veins) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void west_glades_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;

        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corrupt", "corruptWaterTop", "waterCards (1)", "water (4)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corrupt", "corruptWaterBottom", "waterCards (1)", "water (4)"}
            )
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }
    }

    void glades_town_water_visuals_controller(app::GameObject* scene_root_go, bool corruption_visible) {
        std::vector<app::GameObject*> gos_to_disable;
        //TODO: Make the lupo water path less dark
        gos_to_disable.push_back(
            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "earlyZMesh_corruptWater"})
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "water (1)", "wideGradientCards", "foregroundBottomGradient (1)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "water (1)", "wideGradientCards", "linearLightGradientMask (2)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "water (1)", "wideGradientCards", "linearLightGradientMask (3)"}
            )
        );
        gos_to_disable.push_back(
            il2cpp::unity::find_child(
                scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "water (1)", "wideGradientCards", "linearLightGradientMask (4)"}
            )
        );

        for (auto go: gos_to_disable) {
            if (il2cpp::unity::is_valid(go)) {
                UnityEngine::GameObject::set_active(go, corruption_visible);
            }
        }

        std::vector<app::GameObject*> gos_to_make_transparent;

        auto effects_go = il2cpp::unity::find_child(
            scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "diseasedWaterSwampNightcrawler", "effects"}
        );
        std::vector<app::GameObject*> children = il2cpp::unity::get_children(effects_go);
        for (const auto& child : children) {
            gos_to_make_transparent.push_back(child);
        }

        auto fc_go = il2cpp::unity::find_child(
            scene_root_go, std::vector<std::string>{"artSetups", "water", "corruptWater", "diseasedWaterSwampNightcrawler", "frontCenter"}
        );
        std::vector<app::GameObject*> gradient_masks = il2cpp::unity::get_children(fc_go);
        for (const auto& gradient_mask : gradient_masks) {
            gos_to_make_transparent.push_back(gradient_mask);
        }

        for (auto go: gos_to_make_transparent) {
            if (il2cpp::unity::is_valid(go)) {
                        set_color(go, corruption_visible ? app::Color{0, 0, 0, 1} : app::Color{0, 0, 0, 0.3});
            }
        }
    }

    std::unordered_map<std::string, CustomWaterModifier> water_visuals_map = {
        {"kwoloksCavernBackgroundA",       {downswim_water_visuals_controller}                   },
        {"kwoloksCavernE",                 {under_downswim_water_visuals_controller}             },
        {"kwoloksCavernThroneRoom",        {under_kwolok_water_visuals_controller}               },
        {"silentWoodlandsKwoloksCanal",    {silent_swim_water_visuals_controller}                },
        {"waterMillCEntrance",             {wellspring_top_water_visuals_controller}             },
        {"waterMillEntrance",              {under_wellspring_water_visuals_a_controller}         },
        {"waterMillEntranceBottomRight",   {under_wellspring_water_visuals_b_controller}         },
        {"waterMillCEntrance",             {wellspring_top_water_visuals_controller}             },
        {"wotwSaveRoomC__clone0__clone1",  {wellspring_waterdash_switch_water_visuals_controller}},
        {"kwoloksCavernUpperMainRoom",     {west_glades_water_visuals_controller}                },
        {"wellspringGladesHubB",           {glades_town_water_visuals_controller}                },
        {"lumaPoolsP",                     {marsh_to_pools_water_visuals_controller}             },
        {"swampIntroBottom",               {marsh_resilience_shard_water_visuals_controller}     },
        {"swampIntroTop",                  {marsh_east_longswim_water_visuals_controller}        },
        {"willOfTheWispsLagoonConnection", {west_marsh_water_visuals_controller}                 },
        {"kwoloksCavernO",                 {marsh_above_burrows_water_visuals_controller}        },
    };

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
        if (metadata->state == app::SceneState__Enum::Loaded && metadata->scene_name == "waterMillEntrance") {
            /**
             * We extend the WaterMillEntrance scene padding because moon in their infinite wisdom divided the swim area between 2 seperate scenes
             * and the scene darkening effects were unloading mid swim :)))
             */
            metadata->scene->fields.MetaData->fields.ScenePaddingBoundaries->fields._items->vector[4].m_XMin = -845.f;
            metadata->scene->fields.MetaData->fields.ScenePaddingBoundaries->fields._items->vector[4].m_Width = 146.5f;

            auto water_distortion_go = il2cpp::unity::find_child(
                metadata->scene->fields.SceneRoot, std::vector<std::string>{"artSetups", "cleanState", "cleanedWaterEntrance", "waterDistortions"}
            );
            auto art_setups_go = il2cpp::unity::find_child(metadata->scene->fields.SceneRoot, std::vector<std::string>{"artSetups"});
            il2cpp::unity::set_parent(water_distortion_go, art_setups_go);
            UnityEngine::GameObject::set_active(water_distortion_go, true);
        }
        if (metadata->state != app::SceneState__Enum::Enabled) {
            return;
        }
        if (water_visuals_map.contains(metadata->scene_name)) {
            auto& modifier = water_visuals_map.at(metadata->scene_name);
            modifier.scene_root_ref = il2cpp::WeakGCRef(il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot));
            modifier.effect = core::reactivity::watch_effect()
                                  .effect({water_transparent_state})
                                  .after([&modifier] {
                                      if (!modifier.scene_root_ref.has_value() || !modifier.scene_root_ref->is_valid()) {
                                          modifier.effect = nullptr;
                                          return;
                                      }
                                      modifier.update_function(**modifier.scene_root_ref, !water_transparent_state.get<bool>());
                                  })
                                  .finalize();
        }
    }
    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
} // namespace
