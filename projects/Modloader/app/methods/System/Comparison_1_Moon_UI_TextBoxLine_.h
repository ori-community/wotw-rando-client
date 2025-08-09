#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Comparison_1_Moon_UI_TextBoxLine_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TextBoxLine_1.h>

namespace app::classes::System::Comparison_1_Moon_UI_TextBoxLine_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Comparison_1_Moon_UI_TextBoxLine_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02B85BA0, int32_t, Invoke, app::Comparison_1_Moon_UI_TextBoxLine_* this_ptr, app::TextBoxLine_1 x, app::TextBoxLine_1 y)
    IL2CPP_REGISTER_METHOD(
        0x02B8DBE0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Comparison_1_Moon_UI_TextBoxLine_* this_ptr,
        app::TextBoxLine_1 x,
        app::TextBoxLine_1 y,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, app::Comparison_1_Moon_UI_TextBoxLine_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Comparison_1_Moon_UI_TextBoxLine_
