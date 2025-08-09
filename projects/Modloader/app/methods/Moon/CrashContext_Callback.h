#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrashContext_Callback.h>

namespace app::classes::Moon::CrashContext_Callback {
    IL2CPP_REGISTER_METHOD(0x00CCF080, void, OnLateUpdate, app::CrashContext_Callback* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CrashContext_Callback* this_ptr)
} // namespace app::classes::Moon::CrashContext_Callback
