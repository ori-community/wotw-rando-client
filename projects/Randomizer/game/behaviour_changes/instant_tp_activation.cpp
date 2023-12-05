#include <Randomizer/constants.h>

#include <Common/ext.h>

#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/types/PlayerUberStateGroup.h>
#include <Modloader/interception.h>
#include <Modloader/interception_macros.h>

#include <Core/enums/teleporter_type.h>

#include <Randomizer/seed/seed.h>

#include <unordered_map>

using namespace app::classes;

namespace {
    std::unordered_map<std::pair<app::GameWorldAreaID__Enum, int>, TeleporterType, pair_hash> area_to_tp = {
        { std::make_pair(app::GameWorldAreaID__Enum::InkwaterMarsh, 2701), TeleporterType::Marsh },
        { std::make_pair(app::GameWorldAreaID__Enum::InkwaterMarsh, 4298), TeleporterType::HowlsDen },
        { std::make_pair(app::GameWorldAreaID__Enum::WaterMill, 5947), TeleporterType::Wellspring },
        { std::make_pair(app::GameWorldAreaID__Enum::MidnightBurrow, 4817), TeleporterType::Burrows },
        { std::make_pair(app::GameWorldAreaID__Enum::KwoloksHollow, 5414), TeleporterType::Hollow },
        { std::make_pair(app::GameWorldAreaID__Enum::WellspringGlades, 5176), TeleporterType::Glades },
        { std::make_pair(app::GameWorldAreaID__Enum::BaursReach, 5735), TeleporterType::Reach },
        { std::make_pair(app::GameWorldAreaID__Enum::MouldwoodDepths, 5083), TeleporterType::Depths },
        { std::make_pair(app::GameWorldAreaID__Enum::SilentWoodland, 7197), TeleporterType::WestWoods },
        { std::make_pair(app::GameWorldAreaID__Enum::SilentWoodland, 7388), TeleporterType::EastWoods },
        { std::make_pair(app::GameWorldAreaID__Enum::SilentWoodland, 6967), TeleporterType::FeedingGrounds },
        { std::make_pair(app::GameWorldAreaID__Enum::WindsweptWastes, 6092), TeleporterType::Wastes },
        { std::make_pair(app::GameWorldAreaID__Enum::WindsweptWastes, 6119), TeleporterType::OuterRuins },
        { std::make_pair(app::GameWorldAreaID__Enum::WindtornRuins, 5448), TeleporterType::InnerRuins },
        { std::make_pair(app::GameWorldAreaID__Enum::LumaPools, 6073), TeleporterType::EastPools },
        { std::make_pair(app::GameWorldAreaID__Enum::LumaPools, 6148), TeleporterType::WestPools },
        { std::make_pair(app::GameWorldAreaID__Enum::WillowsEnd, 6124), TeleporterType::WillowsEnd },
        { std::make_pair(app::GameWorldAreaID__Enum::WillowsEnd, 6432), TeleporterType::Shriek },
    };

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation, void, SetAreaState, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldAreaID__Enum area_id, int index, app::WorldMapAreaState__Enum state, app::Vector3 position)) {
        next::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
        if (state != app::WorldMapAreaState__Enum::Visited) {
            return;
        }

        const auto it = area_to_tp.find(std::make_pair(area_id, index));
        if (it == area_to_tp.end()) {
            return;
        }

        if (it->second == TeleporterType::EastPools && !core::api::uber_states::UberState(5377, 63173).get<bool>()) {
            // Don't grant TP if we haven't lowered the water.
            return;
        }

        tp_type_to_state(it->second).set(true);
    }
} // namespace
