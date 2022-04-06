#include <input/simulator.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

namespace randomizer
{
    namespace input
    {
        std::unordered_map<app::CompoundButtonInput*, Action> input_handles;
        std::unordered_map<Action, bool> simulators;

        Action find_input_info(app::CompoundButtonInput* input)
        {
            auto it = input_handles.find(input);
            return it != input_handles.end() ? it->second : Action::TOTAL;
        }

        namespace
        {
            IL2CPP_INTERCEPT(SmartInput, CompoundButtonInput, bool, GetValue, (app::CompoundButtonInput* this_ptr)) {
                auto action = find_input_info(this_ptr);
                if (action != Action::TOTAL && simulators[action])
                    return true;
            
                return CompoundButtonInput::GetValue(this_ptr);
            }

            IL2CPP_INTERCEPT(SmartInput, CachedButtonInput, bool, GetButton, (app::CachedButtonInput* this_ptr)) {
                auto action = find_input_info(reinterpret_cast<app::CompoundButtonInput*>(this_ptr));
                if (action != Action::TOTAL && simulators[action])
                    return true;

                return CachedButtonInput::GetButton(this_ptr);
            }
        }

        void register_simulator(app::CompoundButtonInput* handle, Action action)
        {
            input_handles[handle] = action;
        }

        void register_simulators(app::PlayerInput* input)
        {
            register_simulator(input->fields.MainMenuSaveCopy, Action::MainMenuSaveCopy);
            register_simulator(input->fields.MainMenuSaveDelete, Action::MainMenuSaveDelete);
            register_simulator(input->fields.Interact, Action::Interact);
            register_simulator(input->fields.Jump, Action::Jump);
            register_simulator(input->fields.Ability1, Action::Ability1);
            register_simulator(input->fields.Ability2, Action::Ability2);
            register_simulator(input->fields.Ability3, Action::Ability3);
            register_simulator(input->fields.Glide, Action::Glide);
            register_simulator(input->fields.Grab, Action::Grab);
            register_simulator(input->fields.Dash, Action::Dash);
            register_simulator(input->fields.Burrow, Action::Burrow);
            register_simulator(input->fields.Bash, Action::Bash);
            register_simulator(input->fields.Grapple, Action::Grapple);
            register_simulator(input->fields.DialogueAdvance, Action::DialogueAdvance);
            register_simulator(input->fields.DialogueOption1, Action::DialogueOption1);
            register_simulator(input->fields.DialogueOption2, Action::DialogueOption2);
            register_simulator(input->fields.DialogueOption3, Action::DialogueOption3);
            register_simulator(input->fields.DialogueExit, Action::DialogueExit);
            register_simulator(input->fields.OpenMapsShardsInventory, Action::OpenMapsShardsInventory);
            register_simulator(input->fields.OpenWeaponWheel, Action::OpenWeaponWheel);
            register_simulator(input->fields.PauseScreen, Action::PauseScreen);
            register_simulator(input->fields.LiveSignIn, Action::LiveSignIn);
            register_simulator(input->fields.MapZoomIn, Action::MapZoomIn);
            register_simulator(input->fields.MapZoomOut, Action::MapZoomOut);
            register_simulator(input->fields.MenuSelect, Action::MenuSelect);
            register_simulator(input->fields.MenuBack, Action::MenuBack);
            register_simulator(input->fields.MenuClose, Action::MenuClose);
            register_simulator(input->fields.MenuDown, Action::MenuDown);
            register_simulator(input->fields.MenuUp, Action::MenuUp);
            register_simulator(input->fields.MenuLeft, Action::MenuLeft);
            register_simulator(input->fields.MenuRight, Action::MenuRight);
            register_simulator(input->fields.MenuPageLeft, Action::MenuPageLeft);
            register_simulator(input->fields.MenuPageRight, Action::MenuPageRight);
            register_simulator(input->fields.LeaderboardCycleFilter, Action::LeaderboardCycleFilter);
            register_simulator(input->fields.MapFilter, Action::MapFilter);
            register_simulator(input->fields.MapDetails, Action::MapDetails);
            register_simulator(input->fields.MapFocusOri, Action::MapFocusOri);
            register_simulator(input->fields.MapFocusObjective, Action::MapFocusObjective);
        }

        void simulate(Action action, bool pressed)
        {
            simulators[action] = pressed;
        }

        void clear_simulators()
        {
            input_handles.clear();
            simulators.clear();
        }
    }
}
