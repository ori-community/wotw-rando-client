#include <Modloader/app/methods/Moon/Race/RaceData.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/interception_macros.h>
#include <optional>

#include <unordered_map>


#include "Core/api/messages/text_style.h"
#include "Core/api/system/message_provider.h"
#include "Core/text/text_database.h"

using namespace app::classes;

namespace {
    enum class SpiritTrialLocation {
        Marsh,
        Depths,
        Wastes,
        Pools,
        Reach,
        Woods,
        Hollow,
        Wellspring,
    };

    std::unordered_map<SpiritTrialLocation, il2cpp::WeakGCRef<app::MessageBox>> trial_text_boxes;

    std::optional<SpiritTrialLocation> determine_trial_location_from_trial_state(app::SerializedIntUberState* uber_state) {
        if (uber_state->fields.Group->fields._.m_id->fields.m_id != 44964) {
            return std::nullopt;
        }

        switch (uber_state->fields._.m_id->fields.m_id) {
            case 23661:
                return std::make_optional(SpiritTrialLocation::Reach);
            case 30767:
                return std::make_optional(SpiritTrialLocation::Wastes);
            case 45951:
                return std::make_optional(SpiritTrialLocation::Marsh);
            case 25545:
                return std::make_optional(SpiritTrialLocation::Hollow);
            case 54686:
                return std::make_optional(SpiritTrialLocation::Pools);
            case 28552:
                return std::make_optional(SpiritTrialLocation::Depths);
            case 22703:
                return std::make_optional(SpiritTrialLocation::Woods);
            case 11512:
                return std::make_optional(SpiritTrialLocation::Wellspring);
            default:
                return std::nullopt;
        }
    }

    std::string_view get_text_for_spirit_trial(SpiritTrialLocation location) {
        switch (location) {
            case SpiritTrialLocation::Marsh:
                return core::text::get_text(*static_text_entry::TrialTextMarsh);
            case SpiritTrialLocation::Depths:
                return core::text::get_text(*static_text_entry::TrialTextDepths);
            case SpiritTrialLocation::Wastes:
                return core::text::get_text(*static_text_entry::TrialTextWastes);
            case SpiritTrialLocation::Pools:
                return core::text::get_text(*static_text_entry::TrialTextPools);
            case SpiritTrialLocation::Reach:
                return core::text::get_text(*static_text_entry::TrialTextReach);
            case SpiritTrialLocation::Woods:
                return core::text::get_text(*static_text_entry::TrialTextWoods);
            case SpiritTrialLocation::Hollow:
                return core::text::get_text(*static_text_entry::TrialTextHollow);
            case SpiritTrialLocation::Wellspring:
                return core::text::get_text(*static_text_entry::TrialTextWellspring);
            default:
                throw std::exception("Unexpected trial location.");
        }
    }

    // TODO: Update text when text database content changes

    IL2CPP_INTERCEPT(Moon::Race::RaceData, void, Awake, (app::RaceData* this_ptr)) {
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

            auto text = get_text_for_spirit_trial(location.value());
            text_style::create_styles(message_box->fields.TextBox, text);
            message_box->fields.MessageProvider = core::api::system::create_message_provider(text);
            MessageBox::RefreshText_1(message_box);

            trial_text_boxes[location.value()] = il2cpp::WeakGCRef(message_box);
        }
    }
}
