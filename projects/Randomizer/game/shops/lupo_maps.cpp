#include <Randomizer/game/shops/lupo_maps.h>
#include <Modloader/app/methods/CartographerEntity.h>


namespace randomizer::game::shops::lupo_maps {
    core::api::uber_states::UberState get_slot_key_for_game_world_area(app::GameWorldAreaID__Enum game_world_area) {
        switch (game_world_area) {
            case app::GameWorldAreaID__Enum::InkwaterMarsh:
                return {48248, 18767};
            case app::GameWorldAreaID__Enum::KwoloksHollow:
                return {48248, 3638};
            case app::GameWorldAreaID__Enum::WaterMill:
                return {48248, 1590};
            case app::GameWorldAreaID__Enum::MidnightBurrow:
                return {48248, 45538};
            case app::GameWorldAreaID__Enum::BaursReach:
                return {48248, 29604};
            case app::GameWorldAreaID__Enum::LumaPools:
                return {48248, 1557};
            case app::GameWorldAreaID__Enum::MouldwoodDepths:
                return {48248, 48423};
            case app::GameWorldAreaID__Enum::WindsweptWastes:
                return {48248, 61146};
            case app::GameWorldAreaID__Enum::WillowsEnd:
                return {48248, 4045};
            default:;
        }

        throw std::exception("Unknown map uber state for game world area");
    }

    ShopCollection::lupo_maps_shop_t::slot_t& get_slot(app::GameWorldAreaID__Enum game_world_area) {
        const auto slot = shops().lupo_maps_shop().slot(get_slot_key_for_game_world_area(game_world_area));

        if (!slot.has_value()) {
            throw std::exception("Missing Lupo Maps shop slot");
        }

        return slot.value().get();
    }

    namespace {
        IL2CPP_INTERCEPT(int, CartographerEntity, get_MapCost, app::CartographerEntity* this_ptr) {
            this_ptr->fields.MapQuestCompletedMapCostModifier = 1.f;
            auto area = CartographerEntity::get_CurrentArea(this_ptr);
            return get_slot(area->fields.WorldMapAreaUniqueID).cost.get();
        }

        IL2CPP_INTERCEPT(app::MessageProvider*, CartographerEntity, get_IntroMessageProvider, app::CartographerEntity* this_ptr) {
            auto area = CartographerEntity::get_CurrentArea(this_ptr);
            auto cost = get_slot(area->fields.WorldMapAreaUniqueID).cost.get();
            area->fields.LupoData.AreaMapSpiritLevelCost = cost;
            area->fields.LupoDataOnCondition.AreaMapSpiritLevelCost = cost;
            return next::CartographerEntity::get_IntroMessageProvider(this_ptr);
        }

        IL2CPP_INTERCEPT(app::MessageProvider*, CartographerEntity, get_SalesPitchMessage, app::CartographerEntity* this_ptr) {
            auto area = CartographerEntity::get_CurrentArea(this_ptr);
            if (area->fields.WorldMapAreaUniqueID == app::GameWorldAreaID__Enum::WillowsEnd) {
                return core::api::system::create_message_provider(
                    "Given the circumstances I would usually give you this for free,\n"
                    "but a speedrunner has got to eat... [AreaMapCost] #Spirit Light#[SpiritLight]"
                );
            }

            return next::CartographerEntity::get_SalesPitchMessage(this_ptr);
        }
    }
} // namespace randomizer::game::shops::lupo_maps
