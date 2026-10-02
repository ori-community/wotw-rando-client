#include <Randomizer/game/shops/shop.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/PurchaseThingScreen.h>
#include <Modloader/app/types/BuilderScreen.h>
#include <Modloader/app/types/GardenerScreen.h>
#include <Modloader/app/types/MapmakerScreen.h>
#include <Modloader/app/types/SpiritShardsShopScreen.h>
#include <Modloader/app/types/WeaponmasterScreen.h>

#include <Core/uber_states/core_uber_states.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <variant>

namespace randomizer::game::shops {
    using namespace app::classes;

    std::shared_ptr<ShopCollection>& shops() {
        static auto shop_collection = std::make_shared<ShopCollection>();
        return shop_collection;
    }

    ShopUIShopSlot::ShopUIShopSlot(const is_purchased_state_t& is_purchased_state) : ShopSlot(is_purchased_state) {
        core::reactivity::watch_effect().effect(icon_texture_identifier).after([&] {
            m_icon_cache = std::nullopt;
        }).finalize_inplace(m_icon_effect);
    }

    SlotVisibility ShopUIShopSlot::visibility() const {
        if (*is_hidden) {
            return SlotVisibility::Hidden;
        }

        return *is_locked ? SlotVisibility::Locked : SlotVisibility::Visible;
    }

    std::shared_ptr<core::api::graphics::textures::Texture> ShopUIShopSlot::icon() {
        if (!m_icon_cache.has_value()) {
            m_icon_cache = icon_texture_identifier.get().load();
        }

        return *m_icon_cache;
    }

    nlohmann::json ShopUIShopSlot::serialize() const {
        return {
            {"name", name.get()},
            {"description", description.get()},
            {"icon_texture_identifier", icon_texture_identifier.get()},
            {"is_locked", is_locked.get()},
            {"is_hidden", is_hidden.get()},
            {"cost", cost.get()},
        };
    }

    void ShopUIShopSlot::deserialize(const nlohmann::json& json) {
        name.set(json["name"].get<std::string>());
        description.set(json["description"].get<std::string>());
        icon_texture_identifier.set(json["icon_texture_identifier"].get<core::api::graphics::textures::TextureIdentifier>());
        is_locked.set(json["is_locked"].get<bool>());
        is_hidden.set(json["is_hidden"].get<bool>());
        cost.set(json["cost"].get<int>());
    }

    nlohmann::json CostOnlyShopSlot::serialize() const {
        return {
            {"cost", cost.get()},
        };
    }

    void CostOnlyShopSlot::deserialize(const nlohmann::json& json) {
        cost.set(json["cost"].get<int>());
    }

    ShopCollection::ShopCollection() :
        m_opher_shop({
            uber_states::state<"opherShop", "waterBreath">(),
            uber_states::state<"opherShop", "spear">(),
            uber_states::state<"opherShop", "hammer">(),
            uber_states::state<"opherShop", "fastTravel">(),
            uber_states::state<"opherShop", "shuriken">(),
            uber_states::state<"opherShop", "blaze">(),
            uber_states::state<"opherShop", "sentry">(),
            uber_states::state<"opherShop", "explodingSpear">(),
            uber_states::state<"opherShop", "hammerShockwave">(),
            uber_states::state<"opherShop", "staticShuriken">(),
            uber_states::state<"opherShop", "chargeBlaze">(),
            uber_states::state<"opherShop", "rapidSentry">(),
        }),
        m_twillen_shop({
            uber_states::state<"twillenShop", "overcharge">(),
            uber_states::state<"twillenShop", "tripleJump">(),
            uber_states::state<"twillenShop", "wingclip">(),
            uber_states::state<"twillenShop", "swap">(),
            uber_states::state<"twillenShop", "lightHarvest">(),
            uber_states::state<"twillenShop", "vitality">(),
            uber_states::state<"twillenShop", "energy">(),
            uber_states::state<"twillenShop", "finesse">(),
        }),
        m_lupo_shop({
            uber_states::state<"lupoShop", "hcMapIcons">(),
            uber_states::state<"lupoShop", "shardMapIcons">(),
            uber_states::state<"lupoShop", "ecMapIcons">(),
        }),
        m_lupo_maps_shop({
            core::uber_states::state<"npcsStateGroup", "hasMapInkwaterMarsh">(),
            core::uber_states::state<"npcsStateGroup", "hasMapKwoloksHollow">(),
            core::uber_states::state<"npcsStateGroup", "hasMapWellspring">(),
            core::uber_states::state<"npcsStateGroup", "hasMapHowlsOrigin">(),
            core::uber_states::state<"npcsStateGroup", "hasMapBaursReach">(),
            core::uber_states::state<"npcsStateGroup", "hasMapLumaPools">(),
            core::uber_states::state<"npcsStateGroup", "hasMapMouldwoodDepths">(),
            core::uber_states::state<"npcsStateGroup", "hasMapWindsweptWastes">(),
            core::uber_states::state<"npcsStateGroup", "hasMapWillowsEnd">(),
        }),
        m_grom_shop({
            uber_states::state<"gromShop", "theGorlekTouch">(),
            uber_states::state<"gromShop", "clearTheCaveEntrance">(),
            uber_states::state<"gromShop", "repairTheSpiritWell">(),
            uber_states::state<"gromShop", "thornySituation">(),
            uber_states::state<"gromShop", "roofsOverHeads">(),
            uber_states::state<"gromShop", "onwardsAndUpwards">(),
            uber_states::state<"gromShop", "dwellingRepairs">(),
        }),
        m_tuley_shop({
            uber_states::state<"tuleyShop", "selaFlowers">(),
            uber_states::state<"tuleyShop", "blueMoon">(),
            uber_states::state<"tuleyShop", "springPlants">(),
            uber_states::state<"tuleyShop", "lastTree">(),
            uber_states::state<"tuleyShop", "lightcatchers">(),
            uber_states::state<"tuleyShop", "stickyGrass">(),
        }) {
        register_slots(m_opher_shop);
        register_slots(m_twillen_shop);
        register_slots(m_lupo_shop);
        register_slots(m_lupo_maps_shop);
        register_slots(m_grom_shop);
        register_slots(m_tuley_shop);
    }

    const std::unordered_map<ShopSlot::is_purchased_state_id_t, ShopCollection::any_shop_slot_reference_t>& ShopCollection::slots() {
        return m_slots;
    }

    nlohmann::json ShopCollection::json_serialize() {
        return {
            {"opher", opher_shop().serialize()},
            {"twillen", twillen_shop().serialize()},
            {"lupo", lupo_shop().serialize()},
            {"lupo_maps", lupo_maps_shop().serialize()},
            {"grom", grom_shop().serialize()},
            {"tuley", tuley_shop().serialize()},
        };
    }

    void ShopCollection::json_deserialize(nlohmann::json& j) {
        opher_shop().deserialize(j.at("opher"));
        twillen_shop().deserialize(j.at("twillen"));
        lupo_shop().deserialize(j.at("lupo"));
        lupo_maps_shop().deserialize(j.at("lupo_maps"));
        grom_shop().deserialize(j.at("grom"));
        tuley_shop().deserialize(j.at("tuley"));
    }

    std::optional<ShopCollection::any_shop_slot_reference_t> shop_slot_from_state(const ShopSlot::is_purchased_state_id_t state_id) {
        const auto it = shops()->slots().find(state_id);
        if (it == shops()->slots().end()) {
            return std::nullopt;
        }

        return it->second;
    }

    bool is_owned(ShopSlot& slot) {
        return slot.is_purchased_state.get();
    }

    void buy_item(ShopSlot& slot) {
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
            case ShopType::Tuley: {
                const auto* const gardener_screen_class = types::GardenerScreen::get_class();
                auto* const gardener_screen = gardener_screen_class->static_fields->_Instance_k__BackingField;
                return gardener_screen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(gardener_screen));
            }
            default:
                return false;
        }
    }
} // namespace randomizer::game::shops
