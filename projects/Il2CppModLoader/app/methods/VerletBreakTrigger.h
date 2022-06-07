#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VerletBreakTrigger {
    IL2CPP_REGISTER_METHOD(0x013C29C0, void, OnEnable, (app::VerletBreakTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C2BA0, void, OnDisable, (app::VerletBreakTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Break, (app::VerletBreakTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722518, VerletBreakTrigger_Break__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VerletBreakTrigger * this_ptr))
}
