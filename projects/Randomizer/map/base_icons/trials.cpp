#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<std::array<MapIcon::ptr_t, 3>, 8> icons;

    enum class TrialIconType {
        End,
        StartUnfinished,
        StartFinished,
    };

    MapIcon::visibility_effect_fn_t trial_visibility_effect(
        const core::api::uber_states::UberState& state,
        const std::optional<randomizer::location_data::Location>& location,
        const TrialIconType type
    ) {
        return [=](const MapFilter& filter) -> MapIcon::visibility_t {
            switch (filter) {
                case MapFilter::InLogic:
                case MapFilter::Collectibles: {
                    // TODO[InLogicFilter]:
                    const auto should_show_as_out_of_logic = filter == MapFilter::InLogic && location.has_value() /* replace with in-logic check */;

                    const auto visible_visibility = should_show_as_out_of_logic
                        ? MapIcon::Visibilities::out_of_logic()
                        : MapIcon::Visibilities::visible;

                    switch (type) {
                        case TrialIconType::End:
                            return visible_visibility;
                        case TrialIconType::StartUnfinished:
                            return state.get<int>() == 1
                                ? visible_visibility
                                : MapIcon::Visibilities::invisible;
                        case TrialIconType::StartFinished:
                            return state.get<int>() >= 2
                                ? visible_visibility
                                : MapIcon::Visibilities::invisible;
                    }
                } break;
                default:;
            }

            return MapIcon::Visibilities::invisible;
        };
    }

    std::array<MapIcon::ptr_t, 3> make_trial_icon(const app::Vector2 start_position, const app::Vector2& end_position, const core::api::uber_states::UberState& state) {
        const auto location = randomizer::location_collection().location(
            core::api::uber_states::UberStateCondition(state, BooleanOperator::GreaterOrEquals, 2)
        );

        return {
            std::make_shared<MapIcon>(MapIcon::Type::RaceEnd, "Spirit Trial End", end_position, trial_visibility_effect(state, location, TrialIconType::End)),
            std::make_shared<MapIcon>(MapIcon::Type::RaceStart, "Spirit Trial Start", start_position, trial_visibility_effect(state, location, TrialIconType::StartUnfinished)),
            std::make_shared<MapIcon>(MapIcon::Type::RaceStartFinished, "Spirit Trial Start", start_position, trial_visibility_effect(state, location, TrialIconType::StartFinished)),
        };
    }

    [[maybe_unused]]
    auto on_location_collection_loaded = randomizer::event_bus().register_handler(
        randomizer::RandomizerEvent::LocationCollectionLoaded,
        EventTiming::After,
        [](auto, auto) {
            icons = {
                // MarshPastOpher.SpiritTrial
                make_trial_icon({-614, -4319}, {-423.68, -4306.3604}, core::api::uber_states::UberState(44964, 45951)),
                // WestHollow.SpiritTrial
                make_trial_icon({-115, -4259}, {-175.43, -4440.89}, core::api::uber_states::UberState(44964, 25545)),
                // OuterWellspring.SpiritTrial
                make_trial_icon({-668, -3937}, {-834.55005, -3893.5503}, core::api::uber_states::UberState(44964, 11512)),
                // EastPools.SpiritTrial
                make_trial_icon({-1417, -4126}, {-1485.9731, -4059.728}, core::api::uber_states::UberState(44964, 54686)),
                // WoodsMain.SpiritTrial
                make_trial_icon({820, -4047}, {859.62, -3938.6702}, core::api::uber_states::UberState(44964, 22703)),
                // LowerReach.SpiritTrial
                make_trial_icon({75, -4046}, {101.933716, -4046.7227}, core::api::uber_states::UberState(44964, 23661)),
                // LowerDepths.SpiritTrial
                make_trial_icon({478, -4517}, {573.47345, -4510.134}, core::api::uber_states::UberState(44964, 28552)),
                // LowerWastes.SpiritTrial
                make_trial_icon({1527, -4009}, {1580.71, -3898.5503}, core::api::uber_states::UberState(44964, 30767)),
            };
        }
    );
}
