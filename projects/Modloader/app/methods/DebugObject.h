#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugObject.h>

namespace app::classes::DebugObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, app::DebugObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::DebugObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DebugObject* this_ptr)
} // namespace app::classes::DebugObject
