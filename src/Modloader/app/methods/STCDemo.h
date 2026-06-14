#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/STCDemo.h>

namespace app::classes::STCDemo {
    IL2CPP_REGISTER_METHOD(0x00C07A70, void, Start, app::STCDemo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C07A80, void, SubscribeOnRemoteAction, app::STCDemo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C07C00, void, ActionActivated, app::STCDemo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C07DB0, void, Serialize, app::STCDemo* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::STCDemo* this_ptr)
} // namespace app::classes::STCDemo
