#include <Randomizer/game/shops/shop.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/PurchaseThingScreen.h>
#include <Modloader/app/types/BuilderScreen.h>
#include <Modloader/app/types/MapmakerScreen.h>
#include <Modloader/app/types/SpiritShardsShopScreen.h>
#include <Modloader/app/types/WeaponmasterScreen.h>

#include <variant>

namespace randomizer::game::shops {
    using namespace app::classes;

    ShopCollection& shops() {
        static ShopCollection shop_collection;
        return shop_collection;
    }

    ShopUIShopSlot::ShopUIShopSlot() {
        core::reactivity::watch_effect().effect(icon_texture_identifier).after([&] {
            icon_cache = std::nullopt;
        }).finalize_inplace(icon_effect);
    }

    SlotVisibility ShopUIShopSlot::visibility() const {
        if (*is_hidden) {
            return SlotVisibility::Hidden;
        }

        return *is_locked ? SlotVisibility::Locked : SlotVisibility::Visible;
    }

    std::shared_ptr<core::api::graphics::textures::TextureData> ShopUIShopSlot::icon() {
        if (!icon_cache.has_value()) {
            icon_cache = core::api::graphics::textures::get_texture_from_identifier(icon_texture_identifier.get());
        }

        return *icon_cache;
    }

    ShopCollection::ShopCollection() :
        m_opher_shop({
            core::api::uber_states::UberState(UberStateGroup::OpherShop, static_cast<int>(app::AbilityType__Enum::WaterBreath)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, static_cast<int>(app::AbilityType__Enum::SpiritSpearSpell)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, static_cast<int>(app::AbilityType__Enum::Hammer)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, 105), // Fast Travel
            core::api::uber_states::UberState(UberStateGroup::OpherShop, static_cast<int>(app::AbilityType__Enum::ChakramSpell)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, static_cast<int>(app::AbilityType__Enum::Blaze)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, static_cast<int>(app::AbilityType__Enum::TurretSpell)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, 1000 + static_cast<int>(app::AbilityType__Enum::SpiritSpearSpell)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, 1000 + static_cast<int>(app::AbilityType__Enum::Hammer)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, 1000 + static_cast<int>(app::AbilityType__Enum::ChakramSpell)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, 1000 + static_cast<int>(app::AbilityType__Enum::Blaze)),
            core::api::uber_states::UberState(UberStateGroup::OpherShop, 1000 + static_cast<int>(app::AbilityType__Enum::TurretSpell)),
        }),
        m_twillen_shop({
            core::api::uber_states::UberState(UberStateGroup::TwillenShop, static_cast<int>(app::SpiritShardType__Enum::GlassCannon)),
            core::api::uber_states::UberState(UberStateGroup::TwillenShop, static_cast<int>(app::SpiritShardType__Enum::TripleJump)),
            core::api::uber_states::UberState(UberStateGroup::TwillenShop, static_cast<int>(app::SpiritShardType__Enum::AntiAir)),
            core::api::uber_states::UberState(UberStateGroup::TwillenShop, static_cast<int>(app::SpiritShardType__Enum::Swap)),
            core::api::uber_states::UberState(UberStateGroup::TwillenShop, static_cast<int>(app::SpiritShardType__Enum::SpiritLightLuck)),
            core::api::uber_states::UberState(UberStateGroup::TwillenShop, static_cast<int>(app::SpiritShardType__Enum::Vitality)),
            core::api::uber_states::UberState(UberStateGroup::TwillenShop, static_cast<int>(app::SpiritShardType__Enum::Energy)),
            core::api::uber_states::UberState(UberStateGroup::TwillenShop, static_cast<int>(app::SpiritShardType__Enum::CombatLuck)),
        }),
        m_lupo_shop({
            core::api::uber_states::UberState(UberStateGroup::LupoShop, 19396),
            core::api::uber_states::UberState(UberStateGroup::LupoShop, 57987),
            core::api::uber_states::UberState(UberStateGroup::LupoShop, 41666),
        }),
        m_lupo_maps_shop({
            core::api::uber_states::UberState(48248, 18767), // Marsh
            core::api::uber_states::UberState(48248, 3638), // Hollow
            core::api::uber_states::UberState(48248, 1590), // Wellspring
            core::api::uber_states::UberState(48248, 45538), // Burrows
            core::api::uber_states::UberState(48248, 29604), // Reach
            core::api::uber_states::UberState(48248, 1557), // Pools
            core::api::uber_states::UberState(48248, 48423), // Depths
            core::api::uber_states::UberState(48248, 61146), // Wastes
            core::api::uber_states::UberState(48248, 4045), // Willow
        }),
        m_grom_shop({
            core::api::uber_states::UberState(UberStateGroup::GromShop, 15068), // Beautify
            core::api::uber_states::UberState(UberStateGroup::GromShop, 51230), // Houses
            core::api::uber_states::UberState(UberStateGroup::GromShop, 23607), // Houses B
            core::api::uber_states::UberState(UberStateGroup::GromShop, 40448), // Houses C
            core::api::uber_states::UberState(UberStateGroup::GromShop, 16586), // Open Cave
            core::api::uber_states::UberState(UberStateGroup::GromShop, 18751), // Remove Thorns
            core::api::uber_states::UberState(UberStateGroup::GromShop, 16825), // Spirit Well
        }),
        m_tuley_shop({
            core::api::uber_states::UberState(UberStateGroup::TuleyShop, 47651), // Bash Plants
            core::api::uber_states::UberState(UberStateGroup::TuleyShop, 16254), // Flowers
            core::api::uber_states::UberState(UberStateGroup::TuleyShop, 33011), // Grapple Plants
            core::api::uber_states::UberState(UberStateGroup::TuleyShop, 64583), // Grass
            core::api::uber_states::UberState(UberStateGroup::TuleyShop, 38393), // Spring Plants
            core::api::uber_states::UberState(UberStateGroup::TuleyShop, 40006), // Tree
        }) {
        register_slots(m_opher_shop);
        register_slots(m_twillen_shop);
        register_slots(m_lupo_shop);
        register_slots(m_lupo_maps_shop);
        register_slots(m_grom_shop);
        register_slots(m_tuley_shop);
    }

    const std::unordered_map<core::api::uber_states::UberState, ShopCollection::any_shop_slot_reference_t>& ShopCollection::slots() {
        return m_slots;
    }

    std::optional<ShopCollection::any_shop_slot_reference_t> shop_slot_from_state(const core::api::uber_states::UberState state) {
        const auto it = shops().slots().find(state);
        if (it == shops().slots().end()) {
            return std::nullopt;
        }

        return it->second;
    }

    bool is_owned(ShopSlot const& slot) {
        return slot.is_purchased_state.get<bool>();
    }

    void buy_item(ShopSlot const& slot) {
        slot.is_purchased_state.set(true);
    }

    bool is_in_shop(const ShopType type) {
        const auto game_controller = core::api::game::game_controller();
        if (!game_controller || GameController::get_GameInTitleScreen(game_controller)) {
            return false;
        }

        switch (type) {
            case ShopType::Lupo: {
                const auto* const mapmaker_screen_class = types::MapmakerScreen::get_class();
                auto* const mapmaker_screen = mapmaker_screen_class->static_fields->Instance;
                return mapmaker_screen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(mapmaker_screen));
            }
            case ShopType::Grom: {
                const auto* const builder_screen_class = types::BuilderScreen::get_class();
                auto* const builder_screen = builder_screen_class->static_fields->_Instance_k__BackingField;
                return builder_screen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(builder_screen));
            }
            case ShopType::Opher: {
                const auto weaponmaster_screen = types::WeaponmasterScreen::get_class()->static_fields->_Instance_k__BackingField;
                return weaponmaster_screen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(weaponmaster_screen));
            }
            case ShopType::Twillen: {
                const auto* const shop_screen = types::SpiritShardsShopScreen::get_class();
                const auto spirit_shards_shop_screen = shop_screen->static_fields->Instance;
                return spirit_shards_shop_screen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(spirit_shards_shop_screen));
            }
            case ShopType::Tuley:
            default:
                return false;
        }
    }
} // namespace randomizer::game::shops
