#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/InputField_OnValidateInput.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::UI::InputField_OnValidateInput {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::InputField_OnValidateInput* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x024CE8B0, char16_t, Invoke, app::InputField_OnValidateInput* this_ptr, app::String* text, int32_t char_index, char16_t added_char)
    IL2CPP_REGISTER_METHOD(
        0x024CEE30,
        app::IAsyncResult*,
        BeginInvoke,
        app::InputField_OnValidateInput* this_ptr,
        app::String* text,
        int32_t char_index,
        char16_t added_char,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x024CEF10, char16_t, EndInvoke, app::InputField_OnValidateInput* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::UI::InputField_OnValidateInput
