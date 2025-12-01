#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

namespace {
    using namespace app::classes;

    /**
     * Always show "Focus Objective" on the map since "Focus Ori" is broken on KBM (they
     * calculate distance from the cursor instead of screen center).
     */
    IL2CPP_INTERCEPT_WITH_ORDER(10, void, GameMapUI, NormalInput, app::GameMapUI* this_ptr) {
        const auto focus_ori_button = types::Input_Cmd::get_class()->static_fields->MapFocusOri;
        const auto focus_ori_button_pressed = focus_ori_button->fields.IsPressed && !focus_ori_button->fields.WasPressed && !focus_ori_button->fields.Used;

        const auto focus_objective_button = types::Input_Cmd::get_class()->static_fields->MapFocusObjective;
        const auto focus_objective_button_pressed = focus_objective_button->fields.IsPressed && !focus_objective_button->fields.WasPressed &&
            !focus_objective_button->fields.Used;

        focus_ori_button->fields.Used = focus_ori_button_pressed;
        focus_objective_button->fields.Used = focus_objective_button_pressed;
        next::GameMapUI::NormalInput(this_ptr);

        // const auto filter = randomizer::game::map::active_filter();
        // const auto should_toggle_interactibles = filter == randomizer::game::map::Filters::InLogic || filter == randomizer::game::map::Filters::Spoilers;
        if (/*should_toggle_interactibles*/ true) {
            // TODO[Map]:
            // this_ptr->fields.LeftStickMessageBox->fields.MessageProvider = core::api::system::create_message_provider(
            //     randomizer::game::map::show_interactible_icons().get() ? "[MapFocusObjective] Hide Interactibles" : "[MapFocusObjective] Show Interactibles"
            // );
        } else {
            this_ptr->fields.LeftStickMessageBox->fields.MessageProvider = this_ptr->fields.FocusOnObjectiveMessageProvider;
        }

        MessageBox::RefreshText_1(this_ptr->fields.LeftStickMessageBox);
        if (focus_objective_button_pressed) {
            if (true /*should_toggle_interactibles*/) {
                // TODO[Map]:
                // randomizer::game::map::show_interactible_icons().toggle();
                // randomizer::game::map::refresh();
            } else {
                QuestsUI::ScrollToQuest(this_ptr->fields.m_questsUI);
            }
        }
    }
}
