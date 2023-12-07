#include <Core/api/graphics/textures.h>
#include <Core/enums/map_icon.h>
#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/AreaMapIcon.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <unordered_map>

using namespace app::classes;

namespace {
    std::unordered_map<MapIcon, float> icon_label_offsets{
        {MapIcon::Keystone,             0.0f },
        {MapIcon::Mapstone,             0.0f },
        {MapIcon::BreakableWall,        0.0f },
        {MapIcon::BreakableWallBroken,  0.0f },
        {MapIcon::StompableFloor,       0.0f },
        {MapIcon::StompableFloorBroken, 0.0f },
        {MapIcon::EnergyGateTwo,        0.0f },
        {MapIcon::EnergyGateOpen,       0.0f },
        {MapIcon::KeystoneDoorFour,     0.0f },
        {MapIcon::KeystoneDoorOpen,     0.0f },
        {MapIcon::AbilityPedestal,      -0.05f },
        {MapIcon::HealthUpgrade,        0.0f },
        {MapIcon::EnergyUpgrade,        0.0f },
        {MapIcon::SavePedestal,         0.0f },
        {MapIcon::AbilityPoint,         0.0f },
        {MapIcon::KeystoneDoorTwo,      0.0f },
        {MapIcon::Invisible,            0.0f },
        {MapIcon::Experience,           -0.1f },
        {MapIcon::MapstonePickup,       0.13f},
        {MapIcon::EnergyGateTwelve,     0.0f },
        {MapIcon::EnergyGateTen,        0.0f },
        {MapIcon::EnergyGateEight,      0.0f },
        {MapIcon::EnergyGateSix,        0.0f },
        {MapIcon::EnergyGateFour,       0.0f },
        {MapIcon::SpiritShard,          0.0f },
        {MapIcon::NPC,                  0.0f },
        {MapIcon::QuestItem,            -0.1f },
        {MapIcon::ShardSlotUpgrade,     0.0f },
        {MapIcon::Teleporter,           0.0f },
        {MapIcon::Ore,                  0.0f },
        {MapIcon::QuestStart,           0.0f },
        {MapIcon::QuestEnd,             0.0f },
        {MapIcon::RaceStart,            0.0f },
        {MapIcon::HealthFragment,       0.07f },
        {MapIcon::EnergyFragment,       0.05f },
        {MapIcon::Seed,                 0.0f },
        {MapIcon::RaceEnd,              0.0f },
        {MapIcon::Eyestone,             0.0f },
        {MapIcon::WatermillDoor,        0.0f },
        {MapIcon::TempleDoor,           0.0f },
        {MapIcon::SmallDoor,            0.0f },
        {MapIcon::Shrine,               0.0f },
        {MapIcon::Loremaster,           0.0f },
        {MapIcon::Weaponmaster,         0.0f },
        {MapIcon::Gardener,             0.0f },
        {MapIcon::Mapmaker,             0.0f },
        {MapIcon::Shardtrader,          0.0f },
        {MapIcon::Wanderer,             0.0f },
        {MapIcon::Treekeeper,           0.0f },
        {MapIcon::Builder,              0.0f },
        {MapIcon::Kwolok,               0.0f },
        {MapIcon::Statistician,         0.0f },
        {MapIcon::CreepHeart,           0.0f },
        {MapIcon::Miner,                0.0f },
        {MapIcon::Spiderling,           0.0f },
        {MapIcon::Moki,                 0.0f },
        {MapIcon::MokiBrave,            0.0f },
        {MapIcon::MokiAdventurer,       0.0f },
        {MapIcon::MokiArtist,           0.0f },
        {MapIcon::MokiDarkness,         0.0f },
        {MapIcon::MokiFashionable,      0.0f },
        {MapIcon::MokiFisherman,        0.0f },
        {MapIcon::MokiFrozen,           0.0f },
        {MapIcon::MokiKwolokAmulet,     0.0f },
        {MapIcon::MokiSpyglass,         0.0f },
        {MapIcon::Ku,                   0.0f },
        {MapIcon::IceFisher,            0.0f },
        {MapIcon::Siira,                0.0f },
    };

    std::unordered_map<MapIcon, std::tuple<MapIcon, int>> icon_default_variants{
        {MapIcon::TeleporterInactive,  {MapIcon::Teleporter, 1}},
        {MapIcon::RaceStartUnfinished, {MapIcon::RaceStart, 1} },
    };

    std::unordered_map<MapIcon, std::shared_ptr<core::api::graphics::textures::TextureData>> icon_textures;
    auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icon_textures = {
            {MapIcon::CleanWater,     core::api::graphics::textures::get_texture("file:assets/map_icons/clean_water.png")    },
            {MapIcon::BonusItem,      core::api::graphics::textures::get_texture("file:assets/map_icons/bonus_item.png")     },
            {MapIcon::LaunchFragment, core::api::graphics::textures::get_texture("file:assets/map_icons/launch_fragment.png")},
        };
    });

    void apply_offset(app::GameObject* game_object, const MapIcon icon) {
        if (!il2cpp::unity::is_valid(game_object)) {
            return;
        }

        const auto area_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(game_object, types::AreaMapIcon::get_class());
        const auto offset_it = icon_label_offsets.find(icon);
        if (offset_it == icon_label_offsets.end()) {
            return;
        }

        const auto label_game_object = area_map_icon->fields.Label;
        auto position = il2cpp::unity::get_local_position(label_game_object);
        position.y += offset_it->second;
        il2cpp::unity::set_local_position(label_game_object, position);
    }

    app::GameObject* create_default_icon(const MapIcon icon) {
        const auto manager = types::AreaMapUI::get_class()->static_fields->Instance->fields._IconManager_k__BackingField;
        const auto prefab = AreaMapIconManager::GetIcon(manager, static_cast<app::WorldMapIconType__Enum>(icon));
        if (prefab == nullptr) {
            return nullptr;
        }

        return il2cpp::unity::instantiate_object(prefab);
    }
} // namespace

CORE_DLLEXPORT app::GameObject* map_icon_to_game_object(const MapIcon icon) {
    if (static_cast<int>(icon) <= static_cast<int>(MapIcon::Siira)) {
        const auto game_object = create_default_icon(icon);
        apply_offset(game_object, icon);
        return game_object;
    }

    const auto variant_it = icon_default_variants.find(icon);
    if (variant_it != icon_default_variants.end()) {
        auto [icon_type, variant] = variant_it->second;
        const auto icon_game_object = create_default_icon(icon_type);
        apply_offset(icon_game_object, icon_type);
        const auto area_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(icon_game_object, types::AreaMapIcon::get_class());
        il2cpp::unity::set_active(area_map_icon->fields.MapIconActive, variant == 0);
        il2cpp::unity::set_active(area_map_icon->fields.MapIconInactive, variant == 1);
        il2cpp::unity::set_active(area_map_icon->fields.MapIconSpecial, variant == 2);
        return icon_game_object;
    }

    const auto texture = icon_textures.find(icon);
    if (texture == icon_textures.end() || !il2cpp::unity::is_valid(texture->second->get())) {
        return nullptr;
    }

    const auto game_object = create_default_icon(MapIcon::HealthFragment);
    apply_offset(game_object, MapIcon::HealthFragment);
    apply_offset(game_object, icon);
    const auto area_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(game_object, types::AreaMapIcon::get_class());
    const auto icon_game_object = area_map_icon->fields.MapIconActive;
    il2cpp::unity::set_local_scale(icon_game_object, app::Vector3(0.4, 0.4, 0.3));
    const auto renderer = il2cpp::unity::get_component<app::Renderer>(icon_game_object, types::Renderer::get_class());
    texture->second->apply(renderer);
    UberShaderAPI::SetVector_1(renderer, app::UberShaderProperty_Vector__Enum::MainTexScaleAndOffset, {0, 0, 1, 1});

    return game_object;
}
