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

#include "map_filter.h"

namespace {
    using namespace app::classes;

    /**
     * Remove "Focus Objective" and "Focus Ori" (the latter is broken on KBM (they
     * calculate distance from the cursor instead of screen center));
     * Instead, replace it with the Show/Hide Interactables button.
     */
    IL2CPP_INTERCEPT_WITH_ORDER(-10, void, GameMapUI, NormalInput, app::GameMapUI* this_ptr) {
        const auto focus_ori_button = types::Input_Cmd::get_class()->static_fields->MapFocusOri;
        const auto focus_ori_button_pressed = focus_ori_button->fields.IsPressed && !focus_ori_button->fields.WasPressed && !focus_ori_button->fields.Used;

        const auto focus_objective_button = types::Input_Cmd::get_class()->static_fields->MapFocusObjective;
        const auto focus_objective_button_pressed = focus_objective_button->fields.IsPressed && !focus_objective_button->fields.WasPressed &&
            !focus_objective_button->fields.Used;

        focus_ori_button->fields.Used = focus_ori_button_pressed;
        focus_objective_button->fields.Used = focus_objective_button_pressed;
        next::GameMapUI::NormalInput(this_ptr);

        this_ptr->fields.LeftStickMessageBox->fields.MessageProvider = core::api::system::create_message_provider(
            randomizer::map::filter::show_interactables().get() ? "[MapFocusObjective] Hide Interactables" : "[MapFocusObjective] Show Interactables"
        );

        MessageBox::RefreshText_1(this_ptr->fields.LeftStickMessageBox);
        if (focus_objective_button_pressed) {
            randomizer::map::filter::show_interactables().toggle();
        }
    }
}
