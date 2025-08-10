#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/AsyncGPUReadbackRequest.h>
#include <Modloader/app/structs/AsyncRenderCapture.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::AsyncRenderCapture {
    IL2CPP_REGISTER_METHOD(0x00843D70, app::Type*, get_GameViewType, )
    IL2CPP_REGISTER_METHOD(0x00843DF0, void, set_GameViewType, app::Type* value)
    IL2CPP_REGISTER_METHOD(0x003FD3F0, int32_t, get_CaptureCount, app::AsyncRenderCapture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00843E80, void, set_CaptureCount, app::AsyncRenderCapture* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(
        0x00843E90,
        void,
        Begin,
        app::AsyncRenderCapture* this_ptr,
        int32_t max_frame_count,
        app::Action_1_Int32_* on_complete,
        bool show_frame_count,
        int32_t start_frame
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, app::AsyncRenderCapture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00843FA0, void, Render, app::AsyncRenderCapture* this_ptr, app::RenderTarget* target)
    IL2CPP_REGISTER_METHOD(0x00844480, void, AsyncResult, app::AsyncRenderCapture* this_ptr, app::AsyncGPUReadbackRequest req, int32_t frame_count)
    IL2CPP_REGISTER_METHOD(0x00844650, void, Update, app::AsyncRenderCapture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00844760, void, OnGUI, app::AsyncRenderCapture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00844910, void, ctor, app::AsyncRenderCapture* this_ptr)
} // namespace app::classes::AsyncRenderCapture
