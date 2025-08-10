#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Console_WindowsConsole_WindowsCancelHandler.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Console_WindowsConsole_WindowsCancelHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Console_WindowsConsole_WindowsCancelHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x010C4980, bool, Invoke, app::Console_WindowsConsole_WindowsCancelHandler* this_ptr, int32_t key_code)
    IL2CPP_REGISTER_METHOD(
        0x02034850,
        app::IAsyncResult*,
        BeginInvoke,
        app::Console_WindowsConsole_WindowsCancelHandler* this_ptr,
        int32_t key_code,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::Console_WindowsConsole_WindowsCancelHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Console_WindowsConsole_WindowsCancelHandler
