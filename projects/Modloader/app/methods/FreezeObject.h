#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FreezeObject.h>

namespace app::classes::FreezeObject {
    IL2CPP_REGISTER_METHOD(0x02553230, void, Awake, (app::FreezeObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025532D0, void, Update, (app::FreezeObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02553370, void, ctor, (app::FreezeObject * this_ptr))
} // namespace app::classes::FreezeObject
