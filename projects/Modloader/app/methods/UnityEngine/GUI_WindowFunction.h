#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GUI_WindowFunction.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::UnityEngine::GUI_WindowFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::GUI_WindowFunction * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::GUI_WindowFunction * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x029E2380, app::IAsyncResult*, BeginInvoke, (app::GUI_WindowFunction * this_ptr, int32_t id, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::GUI_WindowFunction * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::GUI_WindowFunction
