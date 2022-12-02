#include <Core/api/game/game.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/app/methods/PetrifiedOwlBossEntity.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <constants.h>

#include <Core/api/graphics/sprite.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/settings.h>
#include <Modloader/common.h>
#include <Modloader/interception_macros.h>

using namespace app::classes;

namespace {
    struct ShrekState {
        const std::wstring texture_path;
        const float scale;
    };

    std::vector<ShrekState> states{
        ShrekState{ L"file:assets/shrek/0.png", 9.f },
        ShrekState{ L"file:assets/shrek/1.png", 8.f },
    };

    std::unique_ptr<core::Sprite> shrek;
    float time_to_reset_state = 0.f;

    void set_state(int index) {
        const auto state = states[index];
        core::textures::MaterialParams params;
        params.uvs = std::optional<app::Vector4>({ 0.f, 0.f, 1.f, 1.f });
        shrek->texture(core::textures::get_texture(state.texture_path), std::make_optional(params));
        shrek->local_scale(app::Vector3{ state.scale, state.scale, state.scale });
    }

    IL2CPP_INTERCEPT(PetrifiedOwlBossEntity, void, OnDamageReceived, (app::PetrifiedOwlBossEntity* this_ptr, app::DamageResult damage)) {
        next::PetrifiedOwlBossEntity::OnDamageReceived(this_ptr, damage);

        if (core::settings::shriek_is_shrek()) {
            set_state(1);
            time_to_reset_state = 0.5f;
        }
    }

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "willowPowlBackground") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto head_c1_skn_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "petrifiedOwlBossSetup",
                            "petrifiedOwlBossEntity",
                            "petrifiedOwlEntity",
                            "petrifiedOwlRig",
                            "Skeleton_GRP",
                            "root_JNT",
                            "spineC1_mainJoint1_JNT",
                            "spineC1_mainJoint2_JNT",
                            "spineC1_mainJoint3_JNT",
                            "spineC1_mainJoint4_JNT",
                            "spineC1_mainJoint5_JNT",
                            "neckC1_base1_JNT",
                            "headC1_base1_JNT",
                            "headC1_base1_SKN" }
            );

            shrek = std::make_unique<core::Sprite>();

            shrek->set_parent(head_c1_skn_go);
            shrek->local_position(app::Vector3{ 0.f, 3.f, -1.f });
            shrek->layer(Layer::Art);
            shrek->enabled(true);

            auto model_grp_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "petrifiedOwlBossSetup",
                            "petrifiedOwlBossEntity",
                            "petrifiedOwlEntity",
                            "petrifiedOwlRig",
                            "model_GRP" }
            );

            il2cpp::unity::destroy_object(il2cpp::unity::find_child(model_grp_go, "EyeL_MDL"));
            il2cpp::unity::destroy_object(il2cpp::unity::find_child(model_grp_go, "EyeR_MDL"));
            il2cpp::unity::destroy_object(il2cpp::unity::find_child(model_grp_go, "Head_MDL"));
            il2cpp::unity::destroy_object(il2cpp::unity::find_child(model_grp_go, "HornL_Broken_MDL"));
            il2cpp::unity::destroy_object(il2cpp::unity::find_child(model_grp_go, "HornR_Broken_MDL"));
            il2cpp::unity::destroy_object(il2cpp::unity::find_child(model_grp_go, "Mask_Broken_01_MDL"));
            il2cpp::unity::destroy_object(il2cpp::unity::find_child(model_grp_go, "Mask_Broken_02_MDL"));

            set_state(0);
        }
    }

    void on_update(GameEvent game_event, EventTiming timing) {
        if (time_to_reset_state > 0.f) {
            time_to_reset_state -= TimeUtility::get_deltaTime();

            if (time_to_reset_state <= 0.f) {
                set_state(0);
            }
        }
    }

    void initialize() {
        if (core::settings::shriek_is_shrek()) {
            scenes::event_bus().register_handler(&on_scene_load);
            game::event_bus().register_handler(GameEvent::Update, EventTiming::After, &on_update);
        }
    }

    CALL_ON_INIT(initialize);
} // namespace