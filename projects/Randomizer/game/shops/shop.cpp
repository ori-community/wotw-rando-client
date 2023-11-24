#include <game/shops/shop.h>
#include <randomizer.h>

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

    bool initialized = false;

    std::vector<opher_key> opher_keys = {
        std::make_pair(app::AbilityType__Enum::WaterBreath, app::AbilityType__Enum::None),
        std::make_pair(app::AbilityType__Enum::SpiritSpearSpell, app::AbilityType__Enum::None),
        std::make_pair(app::AbilityType__Enum::Hammer, app::AbilityType__Enum::None),
        std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::None),
        std::make_pair(app::AbilityType__Enum::ChakramSpell, app::AbilityType__Enum::None),
        std::make_pair(app::AbilityType__Enum::Blaze, app::AbilityType__Enum::None),
        std::make_pair(app::AbilityType__Enum::TurretSpell, app::AbilityType__Enum::None),
        std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::SpiritSpearSpell),
        std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::Hammer),
        std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::ChakramSpell),
        std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::Blaze),
        std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::TurretSpell),
    };

    std::vector<twillen_key> twillen_keys = {
        app::SpiritShardType__Enum::GlassCannon,
        app::SpiritShardType__Enum::TripleJump,
        app::SpiritShardType__Enum::AntiAir,
        app::SpiritShardType__Enum::Swap,
        app::SpiritShardType__Enum::SpiritLightLuck,
        app::SpiritShardType__Enum::Vitality,
        app::SpiritShardType__Enum::Energy,
        app::SpiritShardType__Enum::CombatLuck,
    };

    std::vector<lupo_key> lupo_keys = {
        core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 19396),
        core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 57987),
        core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 41666),
    };

    std::vector<grom_key> grom_keys = {
        core::api::uber_states::UberState(42178, 15068), // Beautify
        core::api::uber_states::UberState(42178, 51230), // Houses
        core::api::uber_states::UberState(42178, 23607), // Houses B
        core::api::uber_states::UberState(42178, 40448), // Houses C
        core::api::uber_states::UberState(42178, 16586), // Open Cave
        core::api::uber_states::UberState(42178, 18751), // Remove Thorns
        core::api::uber_states::UberState(42178, 16825), // Spirit Well
    };

    std::vector<tuley_key> tuley_keys = {
        core::api::uber_states::UberState(42178, 47651), // Bash Plants
        core::api::uber_states::UberState(42178, 16254), // Flowers
        core::api::uber_states::UberState(42178, 33011), // Grapple Plants
        core::api::uber_states::UberState(42178, 64583), // Grass
        core::api::uber_states::UberState(42178, 38393), // Spring Plants
        core::api::uber_states::UberState(42178, 40006), // Tree
    };

    ShopData<opher_key, pair_hash> opher(opher_keys);
    ShopData<twillen_key> twillen(twillen_keys);
    ShopData<lupo_key> lupo(lupo_keys);
    ShopData<grom_key> grom(grom_keys);
    ShopData<tuley_key> tuley(tuley_keys);

    ShopData<opher_key, pair_hash>& opher_shop() {
        if (!initialized) {
            reset_shop_data();
        }

        return opher;
    }

    ShopData<twillen_key>& twillen_shop() {
        if (!initialized) {
            reset_shop_data();
        }

        return twillen;
    }

    ShopData<lupo_key>& lupo_shop() {
        if (!initialized) {
            reset_shop_data();
        }

        return lupo;
    }

    ShopData<grom_key>& grom_shop() {
        if (!initialized) {
            reset_shop_data();
        }

        return grom;
    }

    ShopData<tuley_key>& tuley_shop() {
        if (!initialized) {
            reset_shop_data();
        }

        return tuley;
    }

    // Need to use core::api::uber_states::UberState directly because lupo, grom and tuley all use it
    using universal_key = std::variant<opher_key, twillen_key, core::api::uber_states::UberState>;
    std::unordered_map<core::api::uber_states::UberState, universal_key> state_to_key;

    ShopSlot* shop_slot_from_state(const core::api::uber_states::UberState state) {
        const auto it = state_to_key.find(state);
        if (it == state_to_key.end()) {
            return nullptr;
        }

        switch (it->second.index()) {
            case 0:
                return opher.slot(std::get<0>(it->second));
            case 1:
                return twillen.slot(std::get<1>(it->second));
            case 2:
                return lupo.slot(std::get<2>(it->second));
            case 3:
                return grom.slot(std::get<2>(it->second));
            default:
                return tuley.slot(std::get<2>(it->second));
        }
    }

    bool is_owned(ShopSlot const& slot) {
        return slot.state.get() > 0.5;
    }

    void buy_item(ShopSlot const& slot) {
        slot.state.set(slot.state.get() + 1);
    }

    bool is_in_shop(const ShopType type) {
        const auto game_controller = core::api::game::controller();
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
    };

    // Resets all data to default before the seed changes them.
    void reset_shop_data() {
        state_to_key = std::unordered_map<core::api::uber_states::UberState, universal_key>{
            // Opher
            { core::api::uber_states::UberState(1, static_cast<int>(app::AbilityType__Enum::WaterBreath)), std::make_pair(app::AbilityType__Enum::WaterBreath, app::AbilityType__Enum::None) },
            { core::api::uber_states::UberState(1, static_cast<int>(app::AbilityType__Enum::SpiritSpearSpell)), std::make_pair(app::AbilityType__Enum::SpiritSpearSpell, app::AbilityType__Enum::None) },
            { core::api::uber_states::UberState(1, static_cast<int>(app::AbilityType__Enum::Hammer)), std::make_pair(app::AbilityType__Enum::Hammer, app::AbilityType__Enum::None) },
            { core::api::uber_states::UberState(1, static_cast<int>(app::AbilityType__Enum::TeleportSpell)), std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::None) },
            { core::api::uber_states::UberState(1, static_cast<int>(app::AbilityType__Enum::ChakramSpell)), std::make_pair(app::AbilityType__Enum::ChakramSpell, app::AbilityType__Enum::None) },
            { core::api::uber_states::UberState(1, static_cast<int>(app::AbilityType__Enum::Blaze)), std::make_pair(app::AbilityType__Enum::Blaze, app::AbilityType__Enum::None) },
            { core::api::uber_states::UberState(1, static_cast<int>(app::AbilityType__Enum::TurretSpell)), std::make_pair(app::AbilityType__Enum::TurretSpell, app::AbilityType__Enum::None) },
            { core::api::uber_states::UberState(1, 1000 + static_cast<int>(app::AbilityType__Enum::SpiritSpearSpell)), std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::SpiritSpearSpell) },
            { core::api::uber_states::UberState(1, 1000 + static_cast<int>(app::AbilityType__Enum::Hammer)), std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::Hammer) },
            { core::api::uber_states::UberState(1, 1000 + static_cast<int>(app::AbilityType__Enum::ChakramSpell)), std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::ChakramSpell) },
            { core::api::uber_states::UberState(1, 1000 + static_cast<int>(app::AbilityType__Enum::Blaze)), std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::Blaze) },
            { core::api::uber_states::UberState(1, 1000 + static_cast<int>(app::AbilityType__Enum::TurretSpell)), std::make_pair(app::AbilityType__Enum::None, app::AbilityType__Enum::TurretSpell) },

            // Twillen
            { core::api::uber_states::UberState(2, static_cast<int>(app::SpiritShardType__Enum::GlassCannon)), app::SpiritShardType__Enum::GlassCannon },
            { core::api::uber_states::UberState(2, static_cast<int>(app::SpiritShardType__Enum::TripleJump)), app::SpiritShardType__Enum::TripleJump },
            { core::api::uber_states::UberState(2, static_cast<int>(app::SpiritShardType__Enum::AntiAir)), app::SpiritShardType__Enum::AntiAir },
            { core::api::uber_states::UberState(2, static_cast<int>(app::SpiritShardType__Enum::Swap)), app::SpiritShardType__Enum::Swap },
            { core::api::uber_states::UberState(2, static_cast<int>(app::SpiritShardType__Enum::SpiritLightLuck)), app::SpiritShardType__Enum::SpiritLightLuck },
            { core::api::uber_states::UberState(2, static_cast<int>(app::SpiritShardType__Enum::Vitality)), app::SpiritShardType__Enum::Vitality },
            { core::api::uber_states::UberState(2, static_cast<int>(app::SpiritShardType__Enum::Energy)), app::SpiritShardType__Enum::Energy },
            { core::api::uber_states::UberState(2, static_cast<int>(app::SpiritShardType__Enum::CombatLuck)), app::SpiritShardType__Enum::CombatLuck },

            // Lupo
            { core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 19396), core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 19396) },
            { core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 57987), core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 57987) },
            { core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 41666), core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 41666) },

            // Grom
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 15068)), core::api::uber_states::UberState(42178, 15068) }, // Beautify
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 51230)), core::api::uber_states::UberState(42178, 51230) }, // Houses
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 23607)), core::api::uber_states::UberState(42178, 23607) }, // Houses B
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 40448)), core::api::uber_states::UberState(42178, 40448) }, // Houses C
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 16586)), core::api::uber_states::UberState(42178, 16586) }, // Open Cave
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 18751)), core::api::uber_states::UberState(42178, 18751) }, // Remove Thorns
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 16825)), core::api::uber_states::UberState(42178, 16825) }, // Spirit Well

            // Tuley
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 47651)), core::api::uber_states::UberState(42178, 47651) }, // Bash Plants
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 16254)), core::api::uber_states::UberState(42178, 16254) }, // Flowers
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 33011)), core::api::uber_states::UberState(42178, 33011) }, // Grapple Plants
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 64583)), core::api::uber_states::UberState(42178, 64583) }, // Grass
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 38393)), core::api::uber_states::UberState(42178, 38393) }, // Spring Plants
            { core::api::uber_states::UberState(core::api::uber_states::UberState(42178, 40006)), core::api::uber_states::UberState(42178, 40006) }, // Tree
        };

        std::vector<std::tuple<int, ShopSlot*, core::api::uber_states::UberState, core::api::uber_states::UberState>> shop_data{
            // Opher
            { 13000, opher.slot(opher_keys[0]), { UberStateGroup::OpherWeapon, 23 }, { UberStateGroup::OpherWeapon, 10023 } },
            { 13010, opher.slot(opher_keys[1]), { UberStateGroup::OpherWeapon, 74 }, { UberStateGroup::OpherWeapon, 10074 } },
            { 13020, opher.slot(opher_keys[2]), { UberStateGroup::OpherWeapon, 98 }, { UberStateGroup::OpherWeapon, 10098 } },
            { 13030, opher.slot(opher_keys[3]), { UberStateGroup::OpherWeapon, 105 }, { UberStateGroup::OpherWeapon, 10105 } },
            { 13040, opher.slot(opher_keys[4]), { UberStateGroup::OpherWeapon, 106 }, { UberStateGroup::OpherWeapon, 10106 } },
            { 13050, opher.slot(opher_keys[5]), { UberStateGroup::OpherWeapon, 115 }, { UberStateGroup::OpherWeapon, 10115 } },
            { 13060, opher.slot(opher_keys[6]), { UberStateGroup::OpherWeapon, 116 }, { UberStateGroup::OpherWeapon, 10116 } },
            { 13070, opher.slot(opher_keys[7]), { UberStateGroup::OpherWeapon, 1074 }, { UberStateGroup::OpherWeapon, 11074 } },
            { 13080, opher.slot(opher_keys[8]), { UberStateGroup::OpherWeapon, 1098 }, { UberStateGroup::OpherWeapon, 11098 } },
            { 13090, opher.slot(opher_keys[9]), { UberStateGroup::OpherWeapon, 1106 }, { UberStateGroup::OpherWeapon, 11106 } },
            { 13100, opher.slot(opher_keys[10]), { UberStateGroup::OpherWeapon, 1115 }, { UberStateGroup::OpherWeapon, 11115 } },
            { 13110, opher.slot(opher_keys[11]), { UberStateGroup::OpherWeapon, 1116 }, { UberStateGroup::OpherWeapon, 11116 } },

            // Twillen
            { 14000, twillen.slot(twillen_keys[0]), { UberStateGroup::TwillenShard, 1 }, { UberStateGroup::TwillenShard, 101 } },
            { 14010, twillen.slot(twillen_keys[1]), { UberStateGroup::TwillenShard, 2 }, { UberStateGroup::TwillenShard, 102 } },
            { 14020, twillen.slot(twillen_keys[2]), { UberStateGroup::TwillenShard, 3 }, { UberStateGroup::TwillenShard, 103 } },
            { 14030, twillen.slot(twillen_keys[3]), { UberStateGroup::TwillenShard, 5 }, { UberStateGroup::TwillenShard, 105 } },
            { 14040, twillen.slot(twillen_keys[4]), { UberStateGroup::TwillenShard, 19 }, { UberStateGroup::TwillenShard, 119 } },
            { 14050, twillen.slot(twillen_keys[5]), { UberStateGroup::TwillenShard, 22 }, { UberStateGroup::TwillenShard, 122 } },
            { 14060, twillen.slot(twillen_keys[6]), { UberStateGroup::TwillenShard, 26 }, { UberStateGroup::TwillenShard, 126 } },
            { 14070, twillen.slot(twillen_keys[7]), { UberStateGroup::TwillenShard, 40 }, { UberStateGroup::TwillenShard, 140 } },

            // Lupo
            { 10000, lupo.slot(lupo_keys[0]), { UberStateGroup::npcsStateGroup, 19396 }, { UberStateGroup::npcsStateGroup, 19396 + 1 } },
            { 10010, lupo.slot(lupo_keys[1]), { UberStateGroup::npcsStateGroup, 57987 }, { UberStateGroup::npcsStateGroup, 57987 + 1 } },
            { 10020, lupo.slot(lupo_keys[2]), { UberStateGroup::npcsStateGroup, 41666 }, { UberStateGroup::npcsStateGroup, 41666 + 1 } },

            // Grom
            { 11000, grom.slot(grom_keys[0]), { UberStateGroup::GromShop, 15068 }, { UberStateGroup::GromShop, 15068 + 1 } },
            { 11010, grom.slot(grom_keys[1]), { UberStateGroup::GromShop, 51230 }, { UberStateGroup::GromShop, 51230 + 1 } },
            { 11020, grom.slot(grom_keys[2]), { UberStateGroup::GromShop, 23607 }, { UberStateGroup::GromShop, 23607 + 1 } },
            { 11030, grom.slot(grom_keys[3]), { UberStateGroup::GromShop, 40448 }, { UberStateGroup::GromShop, 40448 + 1 } },
            { 11040, grom.slot(grom_keys[4]), { UberStateGroup::GromShop, 16586 }, { UberStateGroup::GromShop, 16586 + 1 } },
            { 11050, grom.slot(grom_keys[5]), { UberStateGroup::GromShop, 18751 }, { UberStateGroup::GromShop, 18751 + 1 } },
            { 11060, grom.slot(grom_keys[6]), { UberStateGroup::GromShop, 16825 }, { UberStateGroup::GromShop, 16825 + 1 } },

            { 12000, tuley.slot(tuley_keys[0]), { UberStateGroup::TuleyShop, 47651 }, { UberStateGroup::TuleyShop, 47651 + 1 } },
            { 12010, tuley.slot(tuley_keys[1]), { UberStateGroup::TuleyShop, 16254 }, { UberStateGroup::TuleyShop, 16254 + 1 } },
            { 12020, tuley.slot(tuley_keys[2]), { UberStateGroup::TuleyShop, 33011 }, { UberStateGroup::TuleyShop, 33011 + 1 } },
            { 12030, tuley.slot(tuley_keys[3]), { UberStateGroup::TuleyShop, 64583 }, { UberStateGroup::TuleyShop, 64583 + 1 } },
            { 12040, tuley.slot(tuley_keys[4]), { UberStateGroup::TuleyShop, 38393 }, { UberStateGroup::TuleyShop, 38393 + 1 } },
            { 12050, tuley.slot(tuley_keys[5]), { UberStateGroup::TuleyShop, 40006 }, { UberStateGroup::TuleyShop, 40006 + 1 } },
        };

        for (auto& [text_id, slot, state, cost] : shop_data) {
            slot->state = state;
            slot->cost = cost;
            slot->normal.name.assign(text_id);
            slot->normal.name.text_processor(general_text_processor());
            slot->normal.description.assign(text_id + 1);
            slot->normal.description.text_processor(general_text_processor());
            slot->normal.icon = core::api::graphics::textures::get_texture("shard:0");
            slot->locked.name.assign(text_id + 2);
            slot->normal.name.text_processor(general_text_processor());
            slot->locked.description.assign(text_id + 3);
            slot->normal.description.text_processor(general_text_processor());
            slot->locked.icon = core::api::graphics::textures::get_texture("shard:0");
            slot->hidden.name.assign(text_id + 4);
            slot->hidden.name.text_processor(general_text_processor());
            slot->hidden.description.assign(text_id + 5);
            slot->hidden.description.text_processor(general_text_processor());
            slot->hidden.icon = core::api::graphics::textures::get_texture("shard:0");
            // TODO: Change this to default to Hidden
            slot->visibility = SlotVisibility::Visible;
            slot->uses_energy = false;
        }

        initialized = true;
    }

    auto on_before_seed_loaded = event_bus().register_handler(RandomizerEvent::SeedLoaded, EventTiming::Before, [](auto, auto) {
        reset_shop_data();
    });

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        reset_shop_data();
    });
} // namespace randomizer::game::shops
