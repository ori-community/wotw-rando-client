#include <Core/api/game/game.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/enums/static_text_entries.h>
#include <Core/text/text_database.h>

#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/interception_macros.h>

#include <Randomizer/randomizer.h>

namespace randomizer::game::map {
    using namespace app::classes;

    namespace {
        // TODO: Move this somewhere else.
        enum class ZoneType {
            Marsh,
            Hollow,
            Glades,
            Wellspring,
            Pools,
            Burrows,
            Reach,
            Woods,
            Depths,
            Wastes,
            Ruins,
            Willow,
            Shop,
            Void
        };

        std::unordered_map<app::GameWorldAreaID__Enum, ZoneType> zone_converter{
            { app::GameWorldAreaID__Enum::None, ZoneType::Void },
            { app::GameWorldAreaID__Enum::InkwaterMarsh, ZoneType::Marsh },
            { app::GameWorldAreaID__Enum::KwoloksHollow, ZoneType::Hollow },
            { app::GameWorldAreaID__Enum::WellspringGlades, ZoneType::Glades },
            { app::GameWorldAreaID__Enum::WaterMill, ZoneType::Wellspring },
            { app::GameWorldAreaID__Enum::LumaPools, ZoneType::Pools },
            { app::GameWorldAreaID__Enum::MidnightBurrow, ZoneType::Burrows },
            { app::GameWorldAreaID__Enum::BaursReach, ZoneType::Reach },
            { app::GameWorldAreaID__Enum::SilentWoodland, ZoneType::Woods },
            { app::GameWorldAreaID__Enum::MouldwoodDepths, ZoneType::Depths },
            { app::GameWorldAreaID__Enum::WindsweptWastes, ZoneType::Wastes },
            { app::GameWorldAreaID__Enum::WindtornRuins, ZoneType::Ruins },
            { app::GameWorldAreaID__Enum::WillowsEnd, ZoneType::Willow },
        };

        app::GameWorldAreaID__Enum area_id = app::GameWorldAreaID__Enum::None;
        core::api::messages::MessageBox info_box;

        IL2CPP_INTERCEPT(GameMapUI, void, FixedUpdate, (app::GameMapUI * this_ptr)) {
            next::GameMapUI::FixedUpdate(this_ptr);
            auto area = GameMapUI::get_CurrentHighlightedArea(this_ptr);
            if (area == nullptr || area->fields.Area == nullptr) {
                return;
            }

            auto aid = area->fields.Area->fields.WorldMapAreaUniqueID;
            auto it = zone_converter.find(aid);
            if (aid != area_id && it != zone_converter.end()) {
                area_id = aid;
                auto& seed = game_seed();
                // Maybe do an uberstate set instead?
                seed.grant({ UberStateGroup::PseuodoLocs, 100 + static_cast<int>(it->second) }, 0);
                // TODO: Add progress hint (Different file).
            }

            info_box.text(core::text::get_all_text(*static_text_entries::));
        }

        auto on_open_map = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::After, [](auto, auto) {
            area_id = app::GameWorldAreaID__Enum::None;
            info_box.position() = app::Vector3{};
            info_box.show_box(false);
            info_box.text(" ");
            info_box.show(true, false);
        });

        auto on_close_map = core::api::game::event_bus().register_handler(GameEvent::CloseAreaMap, EventTiming::After, [](auto, auto) {
            area_id = app::GameWorldAreaID__Enum::None;
            info_box.hide(true);
        });
    } // namespace
} // namespace randomizer::game::map
