#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/text_id.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/QuestsController.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/types/QuestsUI.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/game/pickups/quests.h>
#include <Randomizer/randomizer.h>

namespace {
    using namespace app::classes;

    IL2CPP_INTERCEPT(void, QuestsUI, OptionChangeCallback, app::QuestsUI* this_ptr) {
        // Noop
    }

    bool allow_showing_description_ui = false;
    IL2CPP_INTERCEPT(void, QuestsUI, OptionPressedCallback, app::QuestsUI* this_ptr) {
        modloader::ScopedSetter setter(allow_showing_description_ui, true);
        randomizer::game::pickups::quests::set_allow_changing_active_quest(true);
        next::QuestsUI::OptionPressedCallback(this_ptr);
        randomizer::game::pickups::quests::set_allow_changing_active_quest(false);

        auto quests_controller = randomizer::game::pickups::quests::controller();
        auto quest = QuestsController::GetActiveQuest(quests_controller);

        QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);

        this_ptr->fields.m_questDetailsUI->fields.QuestRewardMessageBox->fields.MessageProvider = core::text::get_random_provider(
            core::TextID::QuestReward
        );
        MessageBox::RefreshText_1(this_ptr->fields.m_questDetailsUI->fields.QuestRewardMessageBox);

        // Moon pls center the thing dammit
        il2cpp::unity::set_local_position(this_ptr->fields.m_questDetailsUI->fields.QuestRewardMessageBox, app::Vector3{1.13f, -3.7f, 0.f});

        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.QuestRewardHeader, true);
        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.Keystone, false);
        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.SpiritLight, false);
        il2cpp::unity::set_active(this_ptr->fields.m_questDetailsUI->fields.Ore, false);
    }

    IL2CPP_INTERCEPT(void, AreaMapNavigation, HandleMapScrolling, app::AreaMapNavigation* this_ptr) {
        auto previous_x = this_ptr->fields.m_scrollPosition.x;
        auto previous_y = this_ptr->fields.m_scrollPosition.y;

        next::AreaMapNavigation::HandleMapScrolling(this_ptr);

        if (this_ptr->fields.m_scrollPosition.x != previous_x || this_ptr->fields.m_scrollPosition.y != previous_y) {
            modloader::ScopedSetter setter(allow_showing_description_ui, true);

            auto quests_ui = types::QuestsUI::get_class()->static_fields->Instance;
            QuestsUI::UpdateDescriptionUI_2(quests_ui, nullptr);
        }
    }

    IL2CPP_INTERCEPT(void, QuestsUI, UpdateDescriptionUI_1, app::QuestsUI* this_ptr, app::RuntimeQuest* quest) {
        if (allow_showing_description_ui) {
            next::QuestsUI::UpdateDescriptionUI_1(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(void, QuestsUI, UpdateDescriptionUI_2, app::QuestsUI* this_ptr, app::Quest* quest) {
        if (allow_showing_description_ui || quest == nullptr) {
            next::QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(app::Vector3, QuestsUI, AddItems, app::QuestsUI* this_ptr, app::Vector3 base_position, app::Quest_QuestType__Enum type) {
        auto position = base_position;

        if (type == app::Quest_QuestType__Enum::Main) {
            position.y += 0.6f;
        }

        return next::QuestsUI::AddItems(this_ptr, position, type);
    }

    bool handling_interact_button_on_map = false;
    IL2CPP_INTERCEPT(void, GameMapUI, HandleInteractButton, app::GameMapUI* this_ptr) {
        modloader::ScopedSetter setter(handling_interact_button_on_map, true);
        next::GameMapUI::HandleInteractButton(this_ptr);
    }

    IL2CPP_INTERCEPT(void, QuestsUI, SelectQuest, app::QuestsUI* this_ptr, app::Quest* quest) {
        if (!handling_interact_button_on_map) {
            next::QuestsUI::SelectQuest(this_ptr, quest);
            QuestsUI::UpdateDescriptionUI_2(this_ptr, quest);
        }
    }

    IL2CPP_INTERCEPT(bool, GameMapUI, CanSelectQuest, app::GameMapUI* this_ptr) { return false; }

    IL2CPP_INTERCEPT(void, AreaMapNavigation, UpdateMapTarget, app::AreaMapNavigation* this_ptr) {
        next::AreaMapNavigation::UpdateMapTarget(this_ptr);
        this_ptr->fields.m_focusTime = 0.35f;
    }

    IL2CPP_INTERCEPT(void, AreaMapNavigation, SetTargetPosition, app::AreaMapNavigation* this_ptr, app::Vector3 target_position) {
        next::AreaMapNavigation::SetTargetPosition(this_ptr, target_position);
        this_ptr->fields.m_focusTime = 0.35f;
        this_ptr->fields.m_focusOnPlayer = true;
    }
}
