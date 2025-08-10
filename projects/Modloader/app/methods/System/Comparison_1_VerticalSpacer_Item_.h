#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Comparison_1_VerticalSpacer_Item_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VerticalSpacer_Item.h>

namespace app::classes::System::Comparison_1_VerticalSpacer_Item_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Comparison_1_VerticalSpacer_Item_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02B86EB0,
        int32_t,
        Invoke,
        app::Comparison_1_VerticalSpacer_Item_* this_ptr,
        app::VerticalSpacer_Item x,
        app::VerticalSpacer_Item y
    )
    IL2CPP_REGISTER_METHOD(
        0x02C85F60,
        app::IAsyncResult*,
        BeginInvoke,
        app::Comparison_1_VerticalSpacer_Item_* this_ptr,
        app::VerticalSpacer_Item x,
        app::VerticalSpacer_Item y,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, app::Comparison_1_VerticalSpacer_Item_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Comparison_1_VerticalSpacer_Item_
