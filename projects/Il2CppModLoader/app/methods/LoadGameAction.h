#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LoadGameAction {
    IL2CPP_REGISTER_METHOD(0x00FB44F0, void, Perform, (app::LoadGameAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00FB4500, void, LoadGame, (bool is_bckup_load, app::MessageProvider * failed_to_load_message_provider))
    IL2CPP_REGISTER_METHODINFO(0x0470B6F0, LoadGameAction_LoadGame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::LoadGameAction * this_ptr))
}
