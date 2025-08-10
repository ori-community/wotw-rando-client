#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVROverlay_ShowKeyboard.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowKeyboard {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVROverlay_ShowKeyboard* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02D81530,
        app::EVROverlayError__Enum,
        Invoke,
        app::IVROverlay_ShowKeyboard* this_ptr,
        int32_t e_input_mode,
        int32_t e_line_input_mode,
        app::String* pch_description,
        uint32_t un_char_max,
        app::String* pch_existing_text,
        bool b_use_minimal_mode,
        uint64_t u_user_value
    )
    IL2CPP_REGISTER_METHOD(
        0x02D81AF0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVROverlay_ShowKeyboard* this_ptr,
        int32_t e_input_mode,
        int32_t e_line_input_mode,
        app::String* pch_description,
        uint32_t un_char_max,
        app::String* pch_existing_text,
        bool b_use_minimal_mode,
        uint64_t u_user_value,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, app::IVROverlay_ShowKeyboard* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowKeyboard
