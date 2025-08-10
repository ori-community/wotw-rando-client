#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Canvas_WillRenderCanvases.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::Canvas_WillRenderCanvases {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Canvas_WillRenderCanvases* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, app::Canvas_WillRenderCanvases* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00611B10,
        app::IAsyncResult*,
        BeginInvoke,
        app::Canvas_WillRenderCanvases* this_ptr,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Canvas_WillRenderCanvases* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Canvas_WillRenderCanvases
