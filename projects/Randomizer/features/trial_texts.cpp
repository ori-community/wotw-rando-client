#include <Randomizer/randomizer.h>

#include <Core/api/messages/text_style.h>
#include <Core/api/system/message_provider.h>
#include <Core/enums/uber_state.h>
#include <Core/property/reactivity.h>
#include <Core/text/text_database.h>

#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/Moon/Race/RaceData.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/interception_macros.h>

#include <functional>
#include <memory>
#include <optional>
#include <unordered_map>

using namespace app::classes;

namespace {
    enum class SpiritTrialLocation {
        Marsh,
        Hollow,
        Wellspring,
        Woods,
        Reach,
        Depths,
        Pools,
        Wastes,
    };

    std::string_view get_text_for_spirit_trial(SpiritTrialLocation location);

    randomizer::seed::SeedEvent get_event_uber_state_for_spirit_trial(SpiritTrialLocation location) {
        switch (location) {
            case SpiritTrialLocation::Marsh:
                return randomizer::seed::SeedEvent::InkwaterTrialTextRequest;
            case SpiritTrialLocation::Hollow:
                return randomizer::seed::SeedEvent::HollowTrialTextRequest;
            case SpiritTrialLocation::Wellspring:
                return randomizer::seed::SeedEvent::WellspringTrialTextRequest;
            case SpiritTrialLocation::Woods:
                return randomizer::seed::SeedEvent::WoodsTrialTextRequest;
            case SpiritTrialLocation::Reach:
                return randomizer::seed::SeedEvent::ReachTrialTextRequest;
            case SpiritTrialLocation::Depths:
                return randomizer::seed::SeedEvent::DepthsTrialTextRequest;
            case SpiritTrialLocation::Pools:
                return randomizer::seed::SeedEvent::LumaTrialTextRequest;
            case SpiritTrialLocation::Wastes:
                return randomizer::seed::SeedEvent::WastesTrialTextRequest;
            default:
                throw std::exception("Unexpected trial location.");
        }
    }

    struct TrialMessageBoxRef {
        SpiritTrialLocation location;
        il2cpp::WeakGCRef<app::MessageBox> message_box;
        std::shared_ptr<core::reactivity::ReactiveEffect> reactive_effect;

        void update_message_box() {
            const auto text = get_text_for_spirit_trial(location);
            text_style::create_styles((*message_box)->fields.TextBox, text);
            (*message_box)->fields.MessageProvider = core::api::system::create_message_provider(text);
            MessageBox::RefreshText_1(*message_box);
        }
    };

    std::unordered_map<SpiritTrialLocation, TrialMessageBoxRef> trial_text_boxes;

    std::optional<SpiritTrialLocation> determine_trial_location_from_trial_state(app::SerializedIntUberState* uber_state) {
        if (uber_state->fields.Group->fields._.m_id->fields.m_id != 44964) {
            return std::nullopt;
        }

        switch (uber_state->fields._.m_id->fields.m_id) {
            case 45951:
                return std::make_optional(SpiritTrialLocation::Marsh);
            case 25545:
                return std::make_optional(SpiritTrialLocation::Hollow);
            case 11512:
                return std::make_optional(SpiritTrialLocation::Wellspring);
            case 22703:
                return std::make_optional(SpiritTrialLocation::Woods);
            case 23661:
                return std::make_optional(SpiritTrialLocation::Reach);
            case 28552:
                return std::make_optional(SpiritTrialLocation::Depths);
            case 54686:
                return std::make_optional(SpiritTrialLocation::Pools);
            case 30767:
                return std::make_optional(SpiritTrialLocation::Wastes);
            default:
                return std::nullopt;
        }
    }

    std::string_view get_text_for_spirit_trial(SpiritTrialLocation location) {
        switch (location) {
            case SpiritTrialLocation::Marsh:
                return core::text::get_text(*static_text_entry::TrialTextMarsh);
            case SpiritTrialLocation::Hollow:
                return core::text::get_text(*static_text_entry::TrialTextHollow);
            case SpiritTrialLocation::Wellspring:
                return core::text::get_text(*static_text_entry::TrialTextWellspring);
            case SpiritTrialLocation::Woods:
                return core::text::get_text(*static_text_entry::TrialTextWoods);
            case SpiritTrialLocation::Reach:
                return core::text::get_text(*static_text_entry::TrialTextReach);
            case SpiritTrialLocation::Depths:
                return core::text::get_text(*static_text_entry::TrialTextDepths);
            case SpiritTrialLocation::Pools:
                return core::text::get_text(*static_text_entry::TrialTextPools);
            case SpiritTrialLocation::Wastes:
                return core::text::get_text(*static_text_entry::TrialTextWastes);
            default:
                throw std::exception("Unexpected trial location.");
        }
    }

    // TODO: Update text when text database content changes

    IL2CPP_INTERCEPT(Moon::Race::RaceData, void, Awake, (app::RaceData * this_ptr)) {
        next::Moon::Race::RaceData::Awake(this_ptr);

        auto location = determine_trial_location_from_trial_state(this_ptr->fields.m_raceState);

        if (!location.has_value()) {
            return;
        }

        auto text_go = il2cpp::unity::find_child(
            this_ptr,
            std::vector<std::string>{
                "raceStart",
                "ui",
                "timeline",
                "container",
                "challenge",
                "challengeText",
                "text",
            }
        );

        if (text_go != nullptr) {
            auto icon_go = il2cpp::unity::find_child(
                this_ptr,
                std::vector<std::string>{
                    "raceStart",
                    "ui",
                    "timeline",
                    "container",
                    "challenge",
                    "challengeText",
                    "rewardIcon",
                }
            );

            il2cpp::unity::destroy_object(icon_go);

            il2cpp::unity::set_local_position(text_go, app::Vector3{-1.f, 0.f, 0.3f});

            auto message_box = il2cpp::unity::get_component<app::MessageBox>(text_go, types::MessageBox::get_class());
            message_box->fields.TextBox->fields.alignment = app::AlignmentMode__Enum::Center;
            message_box->fields.TextBox->fields.horizontalAnchor = app::HorizontalAnchorMode__Enum::Center;


            trial_text_boxes.insert_or_assign(
                location.value(),
                TrialMessageBoxRef{
                    .location = location.value(),
                    .message_box = il2cpp::WeakGCRef(message_box),
                }
            );

            auto& box = trial_text_boxes.at(location.value());
            box.reactive_effect = core::reactivity::watch_effect()
                .before([location]() {
                    randomizer::game_seed().trigger(get_event_uber_state_for_spirit_trial(location.value()));
                })
                .effect([location] {
                    const auto ref_it = trial_text_boxes.find(location.value());
                    if (ref_it == trial_text_boxes.end()) {
                        return;
                    }

                    auto ref = ref_it->second;

                    if (ref.message_box.is_valid()) {
                        ref.update_message_box();
                    } else {
                        trial_text_boxes.erase(location.value());
                    }
                })
                .finalize();
        }
    }
} // namespace
