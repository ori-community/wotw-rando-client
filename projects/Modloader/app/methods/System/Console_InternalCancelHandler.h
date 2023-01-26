#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Console_InternalCancelHandler.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Console_InternalCancelHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Console_InternalCancelHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::Console_InternalCancelHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::Console_InternalCancelHandler * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Console_InternalCancelHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Console_InternalCancelHandler
