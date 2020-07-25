#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    IL2CPP_BINDING(, SkipCutsceneController, void, SkipPrologue, (app::SkipCutsceneController* this_ptr));
    IL2CPP_INTERCEPT(, GameStateMachine, void, SetToPrologue, (app::SetGameModeToPrologueAction* this_ptr)) {
        GameStateMachine::SetToPrologue(this_ptr);
        SkipCutsceneController::SkipPrologue(il2cpp::get_class<app::SkipCutsceneController__Class>("", "SkipCutsceneController")->static_fields->Instance);
    }
}
