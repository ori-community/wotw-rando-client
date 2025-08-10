#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_ShowMessageOverlay.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VRMessageOverlayResponse__Enum.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowMessageOverlay {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_ShowMessageOverlay* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02D82400,
        app::VRMessageOverlayResponse__Enum,
        Invoke,
        app::IVROverlay_ShowMessageOverlay* this_ptr,
        app::String* pch_text,
        app::String* pch_caption,
        app::String* pch_button0_text,
        app::String* pch_button1_text,
        app::String* pch_button2_text,
        app::String* pch_button3_text
    )
    IL2CPP_REGISTER_METHOD(
        0x0297E1A0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_ShowMessageOverlay* this_ptr,
        app::String* pch_text,
        app::String* pch_caption,
        app::String* pch_button0_text,
        app::String* pch_button1_text,
        app::String* pch_button2_text,
        app::String* pch_button3_text,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::VRMessageOverlayResponse__Enum, EndInvoke, app::IVROverlay_ShowMessageOverlay* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowMessageOverlay
