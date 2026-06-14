#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/types/Renderer.h>
#include <Core/api/graphics/textures.h>
#include <Core/api/game/player.h>
#include <Core/api/game/game.h>
#include <Core/settings.h>
#include <Randomizer/macros.h>
#include <filesystem>

using namespace app::classes;

RANDOMIZER_C_DLLEXPORT void apply_sein_character_texture() {
    auto sein = game::player::sein();

    if (!il2cpp::unity::is_valid(sein)) {
        return;
    }

    std::filesystem::path model_texture_path = core::settings::ori_model_texture();

    if (std::filesystem::exists(model_texture_path)) {
        auto model_go = il2cpp::unity::find_child(
                sein,
                std::vector<std::string_view>{ "ori3D", "mirrorHolder", "rigHolder", "oriRig", "Model_GRP", "body_MDL" }
        );

        auto model_renderer = il2cpp::unity::get_component<app::Renderer>(model_go, types::Renderer::get_class());

        auto model_texture = core::textures::get_texture(L"file:" + model_texture_path.wstring());
        model_texture->apply(model_renderer);
    }

    std::filesystem::path model_emissivity_mask_texture_path = core::settings::ori_model_emissivity_mask_texture();

    if (std::filesystem::exists(model_emissivity_mask_texture_path)) {
        auto model_emissivity_go = il2cpp::unity::find_child(
                sein,
                std::vector<std::string_view>{ "ori3D", "mirrorHolder", "rigHolder", "oriRig", "Model_GRP", "body_emissivity_MDL" }
        );

        auto model_emissivity_renderer = il2cpp::unity::get_component<app::Renderer>(model_emissivity_go, types::Renderer::get_class());

        auto model_emissivity_mask_texture = core::textures::get_texture(L"file:" + model_emissivity_mask_texture_path.wstring());
        model_emissivity_mask_texture->apply(model_emissivity_renderer);
    }
}

namespace {
    IL2CPP_INTERCEPT(void, SeinCharacter, Awake, app::SeinCharacter* this_ptr) {
        next::SeinCharacter::Awake(this_ptr);
        apply_sein_character_texture();
    }
}