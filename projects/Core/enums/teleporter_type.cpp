#include <Core/enums/teleporter_type.h>

namespace {
    std::unordered_map<TeleporterType, core::api::uber_states::UberState> teleporters{
            { TeleporterType::Burrows, core::api::uber_states::UberState(24922, 42531) },
            { TeleporterType::HowlsDen, core::api::uber_states::UberState(11666, 61594) },
            { TeleporterType::Wellspring, core::api::uber_states::UberState(53632, 18181) },
            { TeleporterType::Reach, core::api::uber_states::UberState(28895, 54235) },
            { TeleporterType::Hollow, core::api::uber_states::UberState(937, 26601) },
            { TeleporterType::Depths, core::api::uber_states::UberState(18793, 38871) },
            { TeleporterType::WestWoods, core::api::uber_states::UberState(58674, 7071) },
            { TeleporterType::EastWoods, core::api::uber_states::UberState(58674, 1965) },
            { TeleporterType::FeedingGrounds, core::api::uber_states::UberState(58674, 10029) },
            { TeleporterType::Wastes, core::api::uber_states::UberState(20120, 49994) },
            { TeleporterType::OuterRuins, core::api::uber_states::UberState(20120, 41398) },
            { TeleporterType::WillowsEnd, core::api::uber_states::UberState(16155, 41465) },
            { TeleporterType::InnerRuins, core::api::uber_states::UberState(10289, 4928) },
            { TeleporterType::EastPools, core::api::uber_states::UberState(945, 58183) },
            { TeleporterType::WestPools, core::api::uber_states::UberState(945, 1370) },
            { TeleporterType::Shriek, core::api::uber_states::UberState(16155, 50867) },
            { TeleporterType::Marsh, core::api::uber_states::UberState(21786, 10185) },
            { TeleporterType::Glades, core::api::uber_states::UberState(42178, 42096) }
    };
}

CORE_DLLEXPORT std::unordered_map<TeleporterType, core::api::uber_states::UberState> const& teleporter_map() {
    return teleporters;
}

CORE_DLLEXPORT core::api::uber_states::UberState tp_type_to_state(const TeleporterType type) {
    return teleporters[type];
}
