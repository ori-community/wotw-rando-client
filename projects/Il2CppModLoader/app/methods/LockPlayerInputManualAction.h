#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LockPlayerInputManualAction {
    IL2CPP_REGISTER_METHOD(0x00FC3490, void, Perform, (app::LockPlayerInputManualAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00FC3610, app::String *, GetNiceName, (app::LockPlayerInputManualAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::LockPlayerInputManualAction * this_ptr))
}
