#include <Core/enums/map_icon.h>
#include <Modloader/modloader.h>
#include <unordered_map>

#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/AreaMapIcon.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/Renderer.h>

#include <Core/api/graphics/textures.h>

using namespace app::classes;

namespace {
    std::unordered_map<MapIcon, std::shared_ptr<core::api::graphics::textures::TextureData>> icon_textures;

    auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icon_textures = {
            {MapIcon::CleanWater, core::api::graphics::textures::get_texture("file:assets/map_icons/clean_water.png")},
            {MapIcon::BonusItem, core::api::graphics::textures::get_texture("file:assets/map_icons/bonus_item.png")},
            {MapIcon::LaunchFragment, core::api::graphics::textures::get_texture("file:assets/map_icons/launch_fragment.png")},
        };
    });
}

CORE_DLLEXPORT app::GameObject* map_icon_to_game_object(MapIcon icon) {
    const auto manager = types::AreaMapUI::get_class()->static_fields->Instance->fields._IconManager_k__BackingField;
    if (static_cast<int>(icon) <= static_cast<int>(MapIcon::Siira)) {
        const auto prefab = AreaMapIconManager::GetIcon(manager, static_cast<app::WorldMapIconType__Enum>(icon));
        return prefab == nullptr ? nullptr : reinterpret_cast<app::GameObject*>(UnityEngine::Object::Instantiate_3(reinterpret_cast<app::Object_1*>(prefab)));
    }

    const auto texture = icon_textures.find(icon);
    if (texture == icon_textures.end() || !il2cpp::unity::is_valid(texture->second->get())) {
        return nullptr;
    }

    const auto prefab = AreaMapIconManager::GetIcon(manager, app::WorldMapIconType__Enum::Keystone);
    const auto game_object = il2cpp::unity::instantiate_object(prefab);
    const auto area_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(game_object, types::AreaMapIcon::get_class());
    const auto icon_game_object = area_map_icon->fields.MapIconActive;
    const auto renderer = il2cpp::unity::get_component<app::Renderer>(icon_game_object, types::Renderer::get_class());
    texture->second->apply(renderer);
    UberShaderAPI::SetVector_1(renderer, app::UberShaderProperty_Vector__Enum::MainTexScaleAndOffset, {0, 0, 1, 1});
    return game_object;
}
