#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger_c.h>

namespace app::classes::MainThreadLoadingDebugger___c {
    IL2CPP_REGISTER_METHOD(0x009F6170, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MainThreadLoadingDebugger_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F62B0, bool, _Update_b__19_0, app::MainThreadLoadingDebugger_c* this_ptr, app::MainThreadLoadingDebugger_NotifyEntry* x)
} // namespace app::classes::MainThreadLoadingDebugger___c
