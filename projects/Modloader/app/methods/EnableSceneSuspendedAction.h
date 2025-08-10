#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnableSceneSuspendedAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::EnableSceneSuspendedAction {
    IL2CPP_REGISTER_METHOD(0x00BFD0E0, void, Perform, app::EnableSceneSuspendedAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00BFD240, app::IEnumerator*, EnableRoutine, app::EnableSceneSuspendedAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, FlagEnabled, app::EnableSceneSuspendedAction* this_ptr, bool success)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, app::EnableSceneSuspendedAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsPerforming, app::EnableSceneSuspendedAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::EnableSceneSuspendedAction* this_ptr)
} // namespace app::classes::EnableSceneSuspendedAction
