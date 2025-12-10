#include "map_icons.h"


#include <Core/api/game/game.h>
#include <Modloader/app/methods/AreaMapIcon.h>
#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/GameMapPins.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/QuestIconsUI.h>
#include <Modloader/app/methods/RuntimeWorldMapIcon.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/Mesh.h>
#include <Modloader/app/methods/UnityEngine/MeshFilter.h>
#include <Modloader/app/types/AreaMapIcon.h>
#include <Modloader/app/types/GameMapPins.h>
#include <Modloader/app/types/GameMapUI.h>
#include <Modloader/app/types/Int32.h>
#include <Modloader/app/types/Mesh.h>
#include <Modloader/app/types/MeshFilter.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/Vector2.h>
#include <Modloader/app/types/Vector3.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/map/map_icons.h>
#include <Randomizer/randomizer.h>
#include <frozen/string.h>
#include <frozen/unordered_map.h>

#include <Core/api/game/ui.h>
#include <Core/settings.h>
#include <Modloader/app/methods/IconPlacementScaler.h>

namespace randomizer::map::icons {
    enum class Event {
        IconPositionUpdateRequested,  // Emitted when the vanilla map wants to update icon positions
        IconLabelUpdateRequested,  // Emitted when the vanilla map wants to update icon labels
    };

    struct IconScale {
        /** Scale for icons that use adaptive scaling (become bigger when zoomed out) */
        float adaptive;

        /** Scale for icons that scale linearly with the map zoom */
        float linear;

        /** Returns the scale factor for a given scale mode */
        float get_factor_for(MapIcon::ScaleMode mode) const {
            switch (mode) {
                case MapIcon::ScaleMode::Adaptive: return adaptive;
                case MapIcon::ScaleMode::Linear: return linear;
            }

            throw std::runtime_error("Unknown scale mode");
        }
    };

    common::EventBus<void, Event> icons_event_bus;
    common::EventBus<IconScale> icons_scale_event_bus;
    std::unordered_map<MapIcon::id_t, map_icon_handle_t> map_icons_that_can_be_teleported_to;
    core::Property<bool> show_transparent_out_of_logic_icons{true};

    [[maybe_unused]]
    auto on_settings_loaded = core::settings::event_bus().register_handler(core::settings::SettingsEvent::Load, EventTiming::After, [](auto, auto) {
        show_transparent_out_of_logic_icons.set(core::settings::show_transparent_out_of_logic_icons());
    });

    IconScale get_desired_icon_scale() {
        const auto area_map = core::api::game::ui::area_map();

        if (area_map == nullptr) {
            return IconScale{1.f, 1.f};
        }

        const auto zoom = AreaMapNavigation::get_Zoom(area_map->fields._Navigation_k__BackingField);
        return IconScale{
            std::lerp(0.35f, 1.8f, zoom * 25.f),
            zoom * 55.f,
        };
    }

    enum class VanillaIconPrefabType {
        Keystone,
        Eyestone,
        Mapstone,
        BreakableWall,
        BreakableWallBroken,
        StompableFloor,
        StompableFloorBroken,
        EnergyGateOpen,
        KeystoneDoorTwo,
        KeystoneDoorFour,
        KeystoneDoorOpen,
        AbilityPedestal,
        HealthUpgrade,
        EnergyUpgrade,
        SavePedestal,
        AbilityPoint,
        Experience,
        MapstonePickup,
        EnergyGateTwelve,
        EnergyGateTen,
        EnergyGateEight,
        EnergyGateSix,
        EnergyGateFour,
        EnergyGateTwo,
        NPC,
        QuestItem,
        Shard,
        ShardSlot,
        TeleportPrefab,
        QuestStart,
        QuestEnd,
        RaceStart,
        RaceEnd,
        WatermillDoor,
        TempleDoor,
        SmallDoor,
        Shrine,
        Loremaster,
        Weaponmaster,
        Gardener,
        Mapmaker,
        Shardtrader,
        Wanderer,
        Treekeeper,
        Builder,
        Kwolok,
        Statistician,
        CreepHeart,
        HealthFragment,
        EnergyFragment,
        Ore,
        Seed,
        Miner,
        Spiderling,
        Moki,
        MokiBrave,
        MokiAdventurer,
        MokiArtist,
        MokiDarkness,
        MokiFashionable,
        MokiFisherman,
        MokiFrozen,
        MokiKwolokAmulet,
        MokiSpyglass,
        Ku,
        IceFisher,
        Siira,
    };

    enum class VanillaIconPrefabVariant {
        Active,
        Inactive,
        Special,
    };

    std::optional<app::GameObject*> instantiate_vanilla_map_icon(const app::WorldMapIconType__Enum type) {
        const auto area_map = core::api::game::ui::area_map();

        if (area_map == nullptr) {
            return std::nullopt;
        }

        return il2cpp::unity::instantiate_object(AreaMapIconManager::GetIcon(area_map->fields._IconManager_k__BackingField, type));
    }


    // Icon recipes define how to generate GameObjects from MapIcon::Type.
    // See the implementations below.

    /** An Icon Recipe to create a single variant of a vanilla icon */
    struct VanillaIconRecipe {
        constexpr VanillaIconRecipe(app::WorldMapIconType__Enum prefab_type) :
            prefab_type(prefab_type),
            variant(VanillaIconPrefabVariant::Active),
            label_y_offset(0.f) {}

        constexpr VanillaIconRecipe(app::WorldMapIconType__Enum prefab_type, VanillaIconPrefabVariant variant, float label_y_offset = 0.f) :
            prefab_type(prefab_type),
            variant(variant),
            label_y_offset(label_y_offset) {}

        constexpr VanillaIconRecipe(app::WorldMapIconType__Enum prefab_type, float label_y_offset, VanillaIconPrefabVariant variant = VanillaIconPrefabVariant::Active) :
            prefab_type(prefab_type),
            variant(variant),
            label_y_offset(label_y_offset) {}

        /** The vanilla icon prefab to instantiate this icon from */
        app::WorldMapIconType__Enum prefab_type;

        /** Some icons have multiple variants; specifies which variant to use when instantiating the vanilla icon prefab */
        VanillaIconPrefabVariant variant;

        /** Some icons have a label that is not positioned correctly. This defines an offset on the Y axis. */
        float label_y_offset;

        /** Instantiate an icon from this recipe */
        [[nodiscard]] std::optional<app::GameObject*> instantiate() const {
            const auto game_object = instantiate_vanilla_map_icon(prefab_type);

            if (!game_object.has_value()) {
                return std::nullopt;
            }

            const auto area_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(*game_object, types::AreaMapIcon::get_class());
            il2cpp::unity::set_active(area_map_icon->fields.MapIconActive, variant == VanillaIconPrefabVariant::Active);
            il2cpp::unity::set_active(area_map_icon->fields.MapIconInactive, variant == VanillaIconPrefabVariant::Inactive);
            il2cpp::unity::set_active(area_map_icon->fields.MapIconSpecial, variant == VanillaIconPrefabVariant::Special);
            il2cpp::unity::set_active(area_map_icon->fields.AttentionMarker, false);

            // Offset the icon label
            auto label_position = il2cpp::unity::get_local_position(area_map_icon->fields.Label);
            label_position.y += label_y_offset;
            il2cpp::unity::set_local_position(area_map_icon->fields.Label, label_position);

            return game_object;
        }
    };

    /** An Icon Recipe to create an icon with a custom texture */
    struct CustomIconRecipe {
        constexpr explicit CustomIconRecipe(const frozen::string& texture_identifier, float scale = 1.f) :
            texture_identifier(texture_identifier),
            scale(scale) {}

        /** The texture identifier to retrieve the texture of this icon */
        frozen::string texture_identifier;

        /** Icon scale */
        float scale;

        /** Instantiate an icon from this recipe */
        [[nodiscard]] std::optional<app::GameObject*> instantiate() const {
            // Create a new game object from a health cell
            const auto game_object = instantiate_vanilla_map_icon(app::WorldMapIconType__Enum::HealthFragment);

            if (!game_object.has_value()) {
                return std::nullopt;
            }

            // Disable all but the Active icon variant
            const auto area_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(*game_object, types::AreaMapIcon::get_class());
            il2cpp::unity::set_active(area_map_icon->fields.MapIconActive, true);
            il2cpp::unity::set_active(area_map_icon->fields.MapIconInactive, false);
            il2cpp::unity::set_active(area_map_icon->fields.MapIconSpecial, false);
            il2cpp::unity::set_active(area_map_icon->fields.AttentionMarker, false);

            // Generate two triangles that form a square.
            const auto icon_game_object = area_map_icon->fields.MapIconActive;
            il2cpp::unity::set_local_scale(icon_game_object, app::Vector3(0.4f * scale, 0.4f * scale, 0.3f));
            const auto filter = il2cpp::unity::get_component<app::MeshFilter>(icon_game_object, types::MeshFilter::get_class());
            const auto mesh = types::Mesh::create();
            const auto vertices = types::Vector3::create_array({
                {-.5f, -.5f, 0.f},
                {.5f,  -.5f, 0.f},
                {-.5f, .5f,  0.f},
                {.5f,  .5f,  0.f},
            });

            const auto triangles = types::Int32::create_array({0, 2, 1, 2, 3, 1});

            // Generate UVs for that square
            const auto renderer = il2cpp::unity::get_component<app::Renderer>(icon_game_object, types::Renderer::get_class());
            const auto [x, y, z, w] = UberShaderAPI::GetTextureAtlasScrollRotData(renderer, app::UberShaderProperty_Texture__Enum::MainTexture);
            const auto uv = types::Vector2::create_array(
                std::vector<app::Vector2>{
                    {x,     y    },
                    {x + z, y    },
                    {x,     y + w},
                    {x + z, y + w},
                }
            );

            UnityEngine::Mesh::ctor(mesh);
            UnityEngine::Mesh::set_vertices(mesh, vertices);
            UnityEngine::Mesh::set_triangles(mesh, triangles);
            UnityEngine::Mesh::set_uv(mesh, uv);
            UnityEngine::MeshFilter::set_mesh(filter, mesh);

            const auto texture_identifier_string = std::string(texture_identifier.begin(), texture_identifier.end());
            core::api::graphics::textures::get_texture_from_identifier(texture_identifier_string)->apply(renderer);

            UberShaderAPI::SetVector_1(renderer, app::UberShaderProperty_Vector__Enum::MainTexScaleAndOffset, {0, 0, 1, 1});

            return game_object;
        }
    };

    // Polymorphism doesn't work in a constexpr context...
    using icon_recipe_t = std::variant<VanillaIconRecipe, CustomIconRecipe>;

    constexpr frozen::unordered_map<MapIcon::Type, icon_recipe_t, 88> MAP_ICON_RECIPES = {
        {MapIcon::Type::Keystone, VanillaIconRecipe(app::WorldMapIconType__Enum::Keystone)},
        {MapIcon::Type::Mapstone, VanillaIconRecipe(app::WorldMapIconType__Enum::Mapstone)},
        {MapIcon::Type::BreakableWall, VanillaIconRecipe(app::WorldMapIconType__Enum::BreakableWall)},
        {MapIcon::Type::BreakableWallBroken, VanillaIconRecipe(app::WorldMapIconType__Enum::BreakableWallBroken)},
        {MapIcon::Type::StompableFloor, VanillaIconRecipe(app::WorldMapIconType__Enum::StompableFloor)},
        {MapIcon::Type::StompableFloorBroken, VanillaIconRecipe(app::WorldMapIconType__Enum::StompableFloorBroken)},
        {MapIcon::Type::EnergyGateTwo, VanillaIconRecipe(app::WorldMapIconType__Enum::EnergyGateTwo)},
        {MapIcon::Type::EnergyGateOpen, VanillaIconRecipe(app::WorldMapIconType__Enum::EnergyGateOpen)},
        {MapIcon::Type::KeystoneDoorFour, VanillaIconRecipe(app::WorldMapIconType__Enum::KeystoneDoorFour)},
        {MapIcon::Type::KeystoneDoorOpen, VanillaIconRecipe(app::WorldMapIconType__Enum::KeystoneDoorOpen)},
        {MapIcon::Type::AbilityPedestal, VanillaIconRecipe(app::WorldMapIconType__Enum::AbilityPedestal, -0.05f)},
        {MapIcon::Type::HealthUpgrade, VanillaIconRecipe(app::WorldMapIconType__Enum::HealthUpgrade)},
        {MapIcon::Type::EnergyUpgrade, VanillaIconRecipe(app::WorldMapIconType__Enum::EnergyUpgrade)},
        {MapIcon::Type::SavePedestal, VanillaIconRecipe(app::WorldMapIconType__Enum::SavePedestal)},
        {MapIcon::Type::AbilityPoint, VanillaIconRecipe(app::WorldMapIconType__Enum::AbilityPoint)},
        {MapIcon::Type::KeystoneDoorTwo, VanillaIconRecipe(app::WorldMapIconType__Enum::KeystoneDoorTwo)},
        {MapIcon::Type::Experience, VanillaIconRecipe(app::WorldMapIconType__Enum::Experience, -0.1f)},
        {MapIcon::Type::MapstonePickup, VanillaIconRecipe(app::WorldMapIconType__Enum::MapstonePickup, 0.13f)},
        {MapIcon::Type::EnergyGateTwelve, VanillaIconRecipe(app::WorldMapIconType__Enum::EnergyGateTwelve)},
        {MapIcon::Type::EnergyGateTen, VanillaIconRecipe(app::WorldMapIconType__Enum::EnergyGateTen)},
        {MapIcon::Type::EnergyGateEight, VanillaIconRecipe(app::WorldMapIconType__Enum::EnergyGateEight)},
        {MapIcon::Type::EnergyGateSix, VanillaIconRecipe(app::WorldMapIconType__Enum::EnergyGateSix)},
        {MapIcon::Type::EnergyGateFour, VanillaIconRecipe(app::WorldMapIconType__Enum::EnergyGateFour)},
        {MapIcon::Type::SpiritShard, VanillaIconRecipe(app::WorldMapIconType__Enum::SpiritShard)},
        {MapIcon::Type::NPC, VanillaIconRecipe(app::WorldMapIconType__Enum::NPC)},
        {MapIcon::Type::QuestItem, VanillaIconRecipe(app::WorldMapIconType__Enum::QuestItem, -0.1f)},
        {MapIcon::Type::ShardSlotUpgrade, VanillaIconRecipe(app::WorldMapIconType__Enum::ShardSlotUpgrade)},
        {MapIcon::Type::Teleporter, VanillaIconRecipe(app::WorldMapIconType__Enum::Teleporter)},
        {MapIcon::Type::Ore, VanillaIconRecipe(app::WorldMapIconType__Enum::Ore)},
        {MapIcon::Type::QuestStart, VanillaIconRecipe(app::WorldMapIconType__Enum::QuestStart)},
        {MapIcon::Type::QuestEnd, VanillaIconRecipe(app::WorldMapIconType__Enum::QuestEnd)},
        {MapIcon::Type::RaceStart, VanillaIconRecipe(app::WorldMapIconType__Enum::RaceStart)},
        {MapIcon::Type::HealthFragment, VanillaIconRecipe(app::WorldMapIconType__Enum::HealthFragment, 0.07f)},
        {MapIcon::Type::EnergyFragment, VanillaIconRecipe(app::WorldMapIconType__Enum::EnergyFragment, 0.05f)},
        {MapIcon::Type::Seed, VanillaIconRecipe(app::WorldMapIconType__Enum::Seed)},
        {MapIcon::Type::RaceEnd, VanillaIconRecipe(app::WorldMapIconType__Enum::RaceEnd)},
        {MapIcon::Type::Eyestone, CustomIconRecipe("file:assets/map_icons/eyestone.png", 1.f)},  // Vanilla Eyestone icon is empty
        {MapIcon::Type::WatermillDoor, VanillaIconRecipe(app::WorldMapIconType__Enum::WatermillDoor)},
        {MapIcon::Type::TempleDoor, VanillaIconRecipe(app::WorldMapIconType__Enum::TempleDoor)},
        {MapIcon::Type::SmallDoor, VanillaIconRecipe(app::WorldMapIconType__Enum::SmallDoor)},
        {MapIcon::Type::Shrine, VanillaIconRecipe(app::WorldMapIconType__Enum::Shrine)},
        {MapIcon::Type::Loremaster, VanillaIconRecipe(app::WorldMapIconType__Enum::Loremaster)},
        {MapIcon::Type::Weaponmaster, VanillaIconRecipe(app::WorldMapIconType__Enum::Weaponmaster)},
        {MapIcon::Type::Gardener, VanillaIconRecipe(app::WorldMapIconType__Enum::Gardener)},
        {MapIcon::Type::Mapmaker, VanillaIconRecipe(app::WorldMapIconType__Enum::Mapmaker)},
        {MapIcon::Type::Shardtrader, VanillaIconRecipe(app::WorldMapIconType__Enum::Shardtrader)},
        {MapIcon::Type::Wanderer, VanillaIconRecipe(app::WorldMapIconType__Enum::Wanderer)},
        {MapIcon::Type::Treekeeper, VanillaIconRecipe(app::WorldMapIconType__Enum::Treekeeper)},
        {MapIcon::Type::Builder, VanillaIconRecipe(app::WorldMapIconType__Enum::Builder)},
        {MapIcon::Type::Kwolok, VanillaIconRecipe(app::WorldMapIconType__Enum::Kwolok)},
        {MapIcon::Type::Statistician, VanillaIconRecipe(app::WorldMapIconType__Enum::Statistician)},
        {MapIcon::Type::CreepHeart, VanillaIconRecipe(app::WorldMapIconType__Enum::CreepHeart)},
        {MapIcon::Type::Miner, VanillaIconRecipe(app::WorldMapIconType__Enum::Miner)},
        {MapIcon::Type::Spiderling, VanillaIconRecipe(app::WorldMapIconType__Enum::Spiderling)},
        {MapIcon::Type::Moki, VanillaIconRecipe(app::WorldMapIconType__Enum::Moki)},
        {MapIcon::Type::MokiBrave, VanillaIconRecipe(app::WorldMapIconType__Enum::MokiBrave)},
        {MapIcon::Type::MokiAdventurer, VanillaIconRecipe(app::WorldMapIconType__Enum::MokiAdventurer)},
        {MapIcon::Type::MokiArtist, VanillaIconRecipe(app::WorldMapIconType__Enum::MokiArtist)},
        {MapIcon::Type::MokiDarkness, VanillaIconRecipe(app::WorldMapIconType__Enum::MokiDarkness)},
        {MapIcon::Type::MokiFashionable, VanillaIconRecipe(app::WorldMapIconType__Enum::MokiFashionable)},
        {MapIcon::Type::MokiFisherman, VanillaIconRecipe(app::WorldMapIconType__Enum::MokiFisherman)},
        {MapIcon::Type::MokiFrozen, VanillaIconRecipe(app::WorldMapIconType__Enum::MokiFrozen)},
        {MapIcon::Type::MokiKwolokAmulet, VanillaIconRecipe(app::WorldMapIconType__Enum::MokiKwolokAmulet)},
        {MapIcon::Type::MokiSpyglass, VanillaIconRecipe(app::WorldMapIconType__Enum::MokiSpyglass)},
        {MapIcon::Type::Ku, VanillaIconRecipe(app::WorldMapIconType__Enum::Ku)},
        {MapIcon::Type::IceFisher, VanillaIconRecipe(app::WorldMapIconType__Enum::IceFisher)},
        {MapIcon::Type::Siira, VanillaIconRecipe(app::WorldMapIconType__Enum::Siira)},
        {MapIcon::Type::SavePedestalInactive, VanillaIconRecipe(app::WorldMapIconType__Enum::SavePedestal, VanillaIconPrefabVariant::Inactive)},
        {MapIcon::Type::RaceStartFinished, VanillaIconRecipe(app::WorldMapIconType__Enum::RaceStart, VanillaIconPrefabVariant::Special)},
        {MapIcon::Type::RaceEndFinished, VanillaIconRecipe(app::WorldMapIconType__Enum::RaceEnd, VanillaIconPrefabVariant::Special)},
        {MapIcon::Type::CleanWater, CustomIconRecipe("file:assets/map_icons/clean_water.png", 1.f)},
        {MapIcon::Type::BonusItem, CustomIconRecipe("file:assets/map_icons/bonus_item.png", 1.f)},
        {MapIcon::Type::LaunchFragment, CustomIconRecipe("file:assets/map_icons/launch_fragment.png", 1.f)},
        {MapIcon::Type::PurpleFloor, CustomIconRecipe("file:assets/map_icons/purple_floor.png", 0.8f)},
        {MapIcon::Type::PurpleWall, CustomIconRecipe("file:assets/map_icons/purple_wall.png", 0.8f)},
        {MapIcon::Type::YellowWall, CustomIconRecipe("file:assets/map_icons/yellow_wall.png", 0.8f)},
        {MapIcon::Type::OneWayWallLeft, CustomIconRecipe("file:assets/map_icons/oneway_wall_left.png", 0.8f)},
        {MapIcon::Type::OneWayWallRight, CustomIconRecipe("file:assets/map_icons/oneway_wall_right.png", 0.8f)},
        {MapIcon::Type::IceFloor, CustomIconRecipe("file:assets/map_icons/ice_floor.png", 0.8f)},
        {MapIcon::Type::IceWall, CustomIconRecipe("file:assets/map_icons/ice_wall.png", 0.8f)},
        {MapIcon::Type::VerticalDoor, CustomIconRecipe("file:assets/map_icons/blocked_wall.png", 0.8f)},
        {MapIcon::Type::HorizontalDoor, CustomIconRecipe("file:assets/map_icons/blocked_floor.png", 0.8f)},
        {MapIcon::Type::Lever, CustomIconRecipe("file:assets/map_icons/lever.png", 0.6f)},
        {MapIcon::Type::Door, CustomIconRecipe("file:assets/map_icons/door.png", 1.4f)},
        {MapIcon::Type::DoorUnknown, CustomIconRecipe("file:assets/map_icons/door_unknown.png", 1.4f)},
        {MapIcon::Type::DoorSmall, CustomIconRecipe("file:assets/map_icons/door.png", 0.85f)},
        {MapIcon::Type::DoorSmallUnknown, CustomIconRecipe("file:assets/map_icons/door_unknown.png", 0.85f)},
        {MapIcon::Type::Wisp, CustomIconRecipe("file:assets/icons/wheel/wisps_progress.png", 1.f)},
    };

    MapIcon::id_t next_icon_id = 0;

    MapIcon::visibility_t MapIcon::Visibilities::out_of_logic() {
        return show_transparent_out_of_logic_icons.get()
            ? std::make_optional(0.25)
            : std::nullopt;
    }

    MapIcon::MapIcon() : MapIcon(Type::HealthFragment, "", {0, 0}) {}

    MapIcon::MapIcon(Type type, const std::string& label_text, const app::Vector2& world_position)
    : MapIcon(type, label_text, world_position, [](auto) { return 1.f; }) {}

    MapIcon::MapIcon(const Type type, const std::string& label_text, const app::Vector2& world_position, const visibility_effect_fn_t& visibility_effect_fn)
        : MapIcon(type, label_text, world_position, visibility_effect_fn, false) {}

    MapIcon::MapIcon(const Type type, const std::string& label_text, const app::Vector2& world_position, const visibility_effect_fn_t& visibility_effect_fn, const float rotation)
        : MapIcon(type, label_text, world_position, visibility_effect_fn, ScaleMode::Adaptive, rotation, false) {}

    MapIcon::MapIcon(const Type type, const std::string& label_text, const app::Vector2& world_position, const visibility_effect_fn_t& visibility_effect_fn, const ScaleMode scale_mode)
        : MapIcon(type, label_text, world_position, visibility_effect_fn, scale_mode, 0.f, false) {}

    MapIcon::MapIcon(const Type type, const std::string& label_text, const app::Vector2& world_position, const visibility_effect_fn_t& visibility_effect_fn, const ScaleMode scale_mode, const float rotation)
        : MapIcon(type, label_text, world_position, visibility_effect_fn, scale_mode, rotation, false) {}

    MapIcon::MapIcon(const Type type, const std::string& label_text, const app::Vector2& world_position, const visibility_effect_fn_t& visibility_effect_fn, const bool can_be_teleported_to)
        : MapIcon(type, label_text, world_position, visibility_effect_fn, ScaleMode::Adaptive, 0.f, can_be_teleported_to) {}

    MapIcon::MapIcon(
        const Type type,
        const std::string& label_text,
        const app::Vector2& world_position,
        const visibility_effect_fn_t& visibility_effect_fn,
        const ScaleMode scale_mode,
        const float rotation,
        const bool can_be_teleported_to
    ) :
        type(type),
        visibility_effect_fn(visibility_effect_fn),
        world_position(world_position),
        rotation(rotation),
        scale_mode(scale_mode),
        can_be_teleported_to(can_be_teleported_to),
        label_text(label_text),
        m_id(++next_icon_id) {

        m_handles.visible_effect = core::reactivity::watch_effect()
            .effect([this] {
                const auto visibility = this->visibility_effect_fn.get()(filter::current_map_filter().get());

                core::reactivity::run_after_effects([this, visibility] {
                    if (visibility == m_visibility.get()) {
                        return;
                    }

                    m_visibility.set(visibility);

                    const auto game_object = get_game_object();

                    if (visibility.has_value() && *visibility > 0.f) {
                        if (game_object.has_value()) {
                            il2cpp::unity::set_active(*game_object, true);
                        } else {
                            m_handles.type_effect = core::reactivity::watch_effect()
                                .effect(this->type)
                                .after([&] {
                                    try_recreate_game_object();
                                })
                                .finalize();
                        }

                        // Set up effects that are only needed when the icon is visible
                        m_handles.position_effect = core::reactivity::watch_effect()
                            .effect(this->world_position)
                            .after([&] {
                                if (!try_create_game_object_if_not_exists()) {
                                    return;
                                }

                                try_update_map_position();
                            })
                            .finalize();

                        m_handles.rotation_effect = core::reactivity::watch_effect()
                            .effect(this->rotation)
                            .after([&] {
                                if (!try_create_game_object_if_not_exists()) {
                                    return;
                                }

                                try_update_rotation();
                            })
                            .finalize();

                        m_handles.scale_mode_effect = core::reactivity::watch_effect()
                            .effect(this->scale_mode)
                            .after([&] {
                                if (!try_create_game_object_if_not_exists()) {
                                    return;
                                }

                                try_set_scale(get_desired_icon_scale());
                            })
                            .finalize();

                        m_handles.position_update_requested_event = icons_event_bus.register_handler(Event::IconPositionUpdateRequested, [&](auto) {
                            try_update_map_position();
                        });

                        m_handles.label_update_requested_event = icons_event_bus.register_handler(Event::IconLabelUpdateRequested, [&](auto) {
                            try_update_label();
                        });

                        m_handles.area_map_opened_event = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::Before, [&](auto, auto) {
                            try_create_game_object_if_not_exists();
                        });

                        m_handles.icon_scale_update_requested_event = icons_scale_event_bus.register_handler([&](const IconScale& scale) {
                            try_set_scale(scale);
                        });

                        try_set_opacity(*visibility);
                    } else {
                        if (game_object.has_value()) {
                            il2cpp::unity::set_active(*game_object, false);
                        }

                        // Remove reactive effects because we don't need to update icons that are invisible
                        m_handles.type_effect = nullptr;
                        m_handles.position_effect = nullptr;
                        m_handles.rotation_effect = nullptr;
                        m_handles.scale_mode_effect = nullptr;
                        m_handles.position_update_requested_event = nullptr;
                        m_handles.label_update_requested_event = nullptr;
                        m_handles.area_map_opened_event = nullptr;
                        m_handles.icon_scale_update_requested_event = nullptr;
                    }
                });
            })
            .trigger_on_load()
            .finalize();

        m_handles.can_teleport_to_effect = core::reactivity::watch_effect()
            .effect(std::vector<const core::BaseProperty*>{&this->can_be_teleported_to, &m_visibility})
            .after([&] {
                if (this->can_be_teleported_to.get() && m_visibility.get().has_value() && *m_visibility.get() > 0.f) {
                    map_icons_that_can_be_teleported_to.emplace(m_id, shared_from_this());
                    m_handles.remove_from_map_icons_that_can_be_teleported_to_list = common::Droppable::create([&] {
                         map_icons_that_can_be_teleported_to.erase(m_id);
                    });
                } else {
                    m_handles.remove_from_map_icons_that_can_be_teleported_to_list = nullptr;
                }
            })
            .finalize();
    }

    MapIcon::~MapIcon() {
        destroy_game_object_if_exists();
    }

    MapIcon::id_t MapIcon::get_id() const {
        return m_id;
    }

    void MapIcon::destroy_game_object_if_exists() {
        const auto game_object = get_game_object();
        if (!game_object.has_value()) {
            return;
        }

        il2cpp::unity::destroy_object(*game_object);
        m_game_object.reset();
    }

    void MapIcon::try_update_map_position() const {
        const auto area_map_ui = core::api::game::ui::area_map();

        if (area_map_ui == nullptr || !m_game_object.has_value()) {
            return;
        }

        const auto map_position = AreaMapNavigation::WorldToMapPosition(area_map_ui->fields._Navigation_k__BackingField, world_position.get());
        il2cpp::unity::set_local_position(**m_game_object, map_position);
    }

    void MapIcon::try_update_rotation() const {
        if (!m_game_object.has_value()) {
            return;
        }

        const auto area_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(**m_game_object, types::AreaMapIcon::get_class());

        const auto target_rotation = app::Vector3{0, 0, rotation.get()};

        if (il2cpp::unity::is_valid(area_map_icon->fields.MapIconActive)) {
            il2cpp::unity::set_local_rotation(area_map_icon->fields.MapIconActive, target_rotation);
        }

        if (il2cpp::unity::is_valid(area_map_icon->fields.MapIconInactive)) {
            il2cpp::unity::set_local_rotation(area_map_icon->fields.MapIconInactive, target_rotation);
        }

        if (il2cpp::unity::is_valid(area_map_icon->fields.MapIconSpecial)) {
            il2cpp::unity::set_local_rotation(area_map_icon->fields.MapIconSpecial, target_rotation);
        }
    }

    void MapIcon::try_set_scale(const IconScale& scale) const {
        if (!m_game_object.has_value()) {
            return;
        }

        const float scale_factor = scale.get_factor_for(scale_mode.get());

        il2cpp::unity::set_local_scale(**m_game_object, app::Vector3{scale_factor, scale_factor, 1.f});
    }

    void MapIcon::try_update_label() const {
        const auto game_map_ui = types::GameMapUI::get_class()->static_fields->Instance;

        if (game_map_ui == nullptr || !m_game_object.has_value()) {
            return;
        }

        const auto area_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(**m_game_object, types::AreaMapIcon::get_class());

        if (GameMapUI::get_ShowIconLabels(game_map_ui)) {
            AreaMapIcon::SetMessageProvider(area_map_icon, label_text.get_provider());
            AreaMapIcon::ShowLabel(area_map_icon);
        } else {
            AreaMapIcon::HideLabel(area_map_icon);
        }
    }

    void MapIcon::try_set_opacity(float opacity) const {
        const auto game_object = get_game_object();
        if (!game_object.has_value()) {
            return;
        }

        const auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(*game_object, types::Renderer::get_class(), true);
        for (const auto& renderer : renderers) {
            const auto it = m_original_renderer_colors.find(renderer);
            if (it == m_original_renderer_colors.end()) {
                continue;
            }

            UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, it->second * app::Color{1.f, 1.f, 1.f, opacity});
        }
    }

    std::optional<app::GameObject*> MapIcon::get_game_object() const {
        if (!m_game_object.has_value()) {
            return std::nullopt;
        }

        const auto game_object = **m_game_object;

        if (!il2cpp::unity::is_valid(game_object)) {
            return std::nullopt;
        }

        return game_object;
    }

    bool MapIcon::try_add_icon_to_map_if_missing() const {
        const auto game_object = get_game_object();

        if (!game_object.has_value()) {
            return false;
        }

        if (il2cpp::unity::get_parent(*game_object) != nullptr) {
            return true;
        }

        const auto game_map_pins = types::GameMapPins::get_class()->static_fields->Instance;

        if (game_map_pins == nullptr) {
            return false;
        }

        // This is where the vanilla map places its icons
        il2cpp::unity::set_parent(*game_object, game_map_pins->fields.MapPinHolder);

        return true;
    }

    bool MapIcon::try_recreate_game_object() {
        destroy_game_object_if_exists();

        const auto& recipe = MAP_ICON_RECIPES.at(type.get());
        const auto game_object = recipe | vx::match {
            [](const VanillaIconRecipe& r) {
                return r.instantiate();
            },
            [](const CustomIconRecipe& r) {
                return r.instantiate();
            }
        };

        if (!game_object.has_value()) {
            return false;
        }

        m_game_object = il2cpp::WeakGCRef(*game_object);
        try_add_icon_to_map_if_missing();
        try_update_map_position();
        try_update_label();
        try_set_scale(get_desired_icon_scale());
        try_update_rotation();

        // Grab the original main texture colors of all renderers.
        // Used for opacity colors later...
        m_original_renderer_colors.clear();
        const auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(*game_object, types::Renderer::get_class(), true);
        for (const auto& renderer : renderers) {
            m_original_renderer_colors.emplace(renderer, UberShaderAPI::GetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor));
        }

        const auto visibility = m_visibility.get();
        if (visibility.has_value()) {
            try_set_opacity(*visibility);
        }

        return true;
    }

    bool MapIcon::try_create_game_object_if_not_exists() {
        const auto game_object = get_game_object();

        if (game_object.has_value()) {
            return try_add_icon_to_map_if_missing();
        }

        return try_recreate_game_object();
    }

    namespace {
        using namespace app::classes;

        // We prevent any vanilla icons from showing up because we do icons ourselves.
        IL2CPP_INTERCEPT(void, AreaMapIconManager, ShowAreaIcons, app::AreaMapIconManager* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, QuestIconsUI, UpdateIcons, app::QuestIconsUI* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, QuestIconsUI, ShowObjectiveMarker, app::QuestIconsUI* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, RuntimeWorldMapIcon, Show, app::RuntimeWorldMapIcon* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, RuntimeWorldMapIcon, Hide, app::RuntimeWorldMapIcon* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, GameMapPins, UpdatePinsOnMap, app::GameMapPins* this_ptr, bool visible) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, IconPlacementScaler, UpdateIconPositions, app::IconPlacementScaler* this_ptr, bool force_update) {
            icons_event_bus.trigger_event(Event::IconPositionUpdateRequested);
            icons_scale_event_bus.trigger_event(get_desired_icon_scale());
        }

        IL2CPP_INTERCEPT(void, AreaMapIconManager, UpdateLabelState, app::AreaMapIconManager* this_ptr) {
            icons_event_bus.trigger_event(Event::IconLabelUpdateRequested);
        }

        IL2CPP_INTERCEPT(bool, AreaMapIcon, ShouldShowAttentionMarker, app::AreaMapIcon* this_ptr, app::GameWorldAreaID__Enum area_id) { return false; }

        IL2CPP_INTERCEPT(bool, GameMapUI, IsCursorOverTeleporter, app::GameMapUI * this_ptr, app::Vector2* target) {
            const auto cursor = GameMapUI::get_FocusLocation(this_ptr);

            auto min_distance = 1.02 * 1.02;
            bool found_icon_in_range = false;
            for (auto const& icon: map_icons_that_can_be_teleported_to | std::views::values) {
                const auto position = AreaMapNavigation::WorldToMapPosition(
                    this_ptr->fields.m_areaMap->fields._Navigation_k__BackingField, icon->world_position.get()
                );

                const auto difference = cursor - app::Vector2{position.x, position.y};
                const auto magnitude_squared = difference.x * difference.x + difference.y * difference.y;
                if (magnitude_squared < min_distance) {
                    found_icon_in_range = true;
                    *target = icon->world_position.get();
                    min_distance = magnitude_squared;
                }
            }

            return found_icon_in_range;
        }
    } // namespace

    namespace utils {
        std::tuple<MapIcon::ptr_t, MapIcon::ptr_t> create_warp_icon(
            const app::Vector2& world_position,
            const core::api::uber_states::UberState& is_active_state,
            const std::string& label_text
        ) {
            return std::make_tuple(
                std::make_shared<MapIcon>(
                    MapIcon::Type::SavePedestal,
                    label_text,
                    world_position,
                    [is_active_state](auto) {
                        return is_active_state.get<bool>()
                            ? MapIcon::Visibilities::visible
                            : MapIcon::Visibilities::invisible;
                    },
                    true
                ),
                std::make_shared<MapIcon>(
                    MapIcon::Type::SavePedestalInactive,
                    label_text,
                    world_position,
                    [is_active_state](auto) {
                        return is_active_state.get<bool>()
                            ? MapIcon::Visibilities::invisible
                            : MapIcon::Visibilities::visible;
                    }
                )
            );
        }
    }
} // namespace randomizer::map::icons
