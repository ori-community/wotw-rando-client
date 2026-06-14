#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HookPlant_c.h>

namespace app::classes::HookPlant___c {
    IL2CPP_REGISTER_METHOD(0x00B5F870, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::HookPlant_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _ChangeState_b__26_0, app::HookPlant_c* this_ptr)
} // namespace app::classes::HookPlant___c
