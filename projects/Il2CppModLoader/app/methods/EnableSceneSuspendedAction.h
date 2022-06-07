#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnableSceneSuspendedAction {
    IL2CPP_REGISTER_METHOD(0x00BFD0E0, void, Perform, (app::EnableSceneSuspendedAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00BFD240, app::IEnumerator *, EnableRoutine, (app::EnableSceneSuspendedAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, FlagEnabled, (app::EnableSceneSuspendedAction * this_ptr, bool success))
    IL2CPP_REGISTER_METHODINFO(0x04733F00, EnableSceneSuspendedAction_FlagEnabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::EnableSceneSuspendedAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsPerforming, (app::EnableSceneSuspendedAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::EnableSceneSuspendedAction * this_ptr))
}
