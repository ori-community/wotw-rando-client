#include <Common/event_bus.h>
#include <Common/ext.h>
#include <Core/api/game/game.h>
#include <Core/enums/game_event.h>
#include <Modloader/app/methods/InteractiveMessageBox.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/NPCMessageBox.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    constexpr float DIALOGUE_SKIP_INITIAL_INTERVAL = 0.2f;
    constexpr float DIALOGUE_SKIP_INTERACTION_INTERVAL = 0.4f;
    constexpr float DIALOGUE_SKIP_INTERVAL = 0.02f;

    float next_dialogue_skip_timeout = DIALOGUE_SKIP_INITIAL_INTERVAL;

    bool can_do_dialogue_skip() {
        return next_dialogue_skip_timeout < FLT_EPSILON;
    }

    bool should_do_dialogue_skip() {
        if (can_do_dialogue_skip()) {
            next_dialogue_skip_timeout = DIALOGUE_SKIP_INTERVAL;
            return true;
        }

        return false;
    }

    auto on_before_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::Before, [](auto, auto) {
        auto input_cmd = types::Input_Cmd::get_class();
        auto skip_pressed = input_cmd->static_fields->DialogueAdvance->fields.IsPressed;

        if (!skip_pressed) {
            next_dialogue_skip_timeout = DIALOGUE_SKIP_INITIAL_INTERVAL;
            return;
        }

        next_dialogue_skip_timeout = std::max(0.f, next_dialogue_skip_timeout - TimeUtility::get_fixedDeltaTime());
    });

    IL2CPP_INTERCEPT(void, NPCMessageBox, UpdateWriting, app::NPCMessageBox * this_ptr) {
        auto previous_state = this_ptr->fields.m_state;

        next::NPCMessageBox::UpdateWriting(this_ptr);

        auto new_state = this_ptr->fields.m_state;

        if (
            previous_state != app::NPCMessageBox_State__Enum::Completed &&
            new_state == app::NPCMessageBox_State__Enum::Completed &&
            (this_ptr->fields.XInteractionBinding != nullptr ||
             this_ptr->fields.YInteractionBinding != nullptr ||
             this_ptr->fields.AInteractionBinding != nullptr ||
             this_ptr->fields.BInteractionBinding != nullptr
            )
        ) {
            next_dialogue_skip_timeout = DIALOGUE_SKIP_INTERACTION_INTERVAL;
        }
    }

    IL2CPP_INTERCEPT(void, NPCMessageBox, FixedUpdate, app::NPCMessageBox * this_ptr) {
        if (this_ptr->fields.m_state == app::NPCMessageBox_State__Enum::Writing && should_do_dialogue_skip()) {
            MessageBox::FinishWriting(this_ptr->fields.MessageBox);
        } else if (this_ptr->fields.m_state == app::NPCMessageBox_State__Enum::Completed && should_do_dialogue_skip()) {
            auto input_cmd = types::Input_Cmd::get_class();
            if (input_cmd->static_fields->DialogueOption1->fields.IsPressed && this_ptr->fields.XInteractionBinding != nullptr) {
                NPCMessageBox::EndMessageBox(this_ptr, this_ptr->fields.XInteractionBinding->fields.Action);
                input_cmd->static_fields->DialogueOption1->fields.Used = true;

            } else if (input_cmd->static_fields->DialogueOption2->fields.IsPressed && this_ptr->fields.YInteractionBinding != nullptr) {
                NPCMessageBox::EndMessageBox(this_ptr, this_ptr->fields.YInteractionBinding->fields.Action);
                input_cmd->static_fields->DialogueOption2->fields.Used = true;

            } else if (input_cmd->static_fields->DialogueOption3->fields.IsPressed && this_ptr->fields.AInteractionBinding != nullptr) {
                NPCMessageBox::EndMessageBox(this_ptr, this_ptr->fields.AInteractionBinding->fields.Action);
                input_cmd->static_fields->DialogueOption3->fields.Used = true;

            } else if (input_cmd->static_fields->DialogueExit->fields.IsPressed && this_ptr->fields.BInteractionBinding != nullptr) {
                NPCMessageBox::EndMessageBox(this_ptr, this_ptr->fields.BInteractionBinding->fields.Action);
                input_cmd->static_fields->DialogueExit->fields.Used = true;
            }

            NPCMessageBox::UpdateComplete(this_ptr);
        }

        next::NPCMessageBox::FixedUpdate(this_ptr);
    }

    IL2CPP_INTERCEPT(void, InteractiveMessageBox, FixedUpdate, app::InteractiveMessageBox * this_ptr) {
        if (this_ptr->fields.m_state == app::InteractiveMessageBox_State__Enum::Writing && should_do_dialogue_skip()) {
            MessageBox::FinishWriting(this_ptr->fields.MessageBox);
        } else if (this_ptr->fields.m_state == app::InteractiveMessageBox_State__Enum::Completed && should_do_dialogue_skip()) {
            InteractiveMessageBox::Complete(this_ptr);
        }

        next::InteractiveMessageBox::FixedUpdate(this_ptr);
    }
} // namespace
