#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/MoonIconRenderer_IconObject.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02B847C0,
        int32_t,
        Invoke,
        app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* this_ptr,
        app::MoonIconRenderer_IconObject x,
        app::MoonIconRenderer_IconObject y
    )
    IL2CPP_REGISTER_METHOD(
        0x02B85AB0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* this_ptr,
        app::MoonIconRenderer_IconObject x,
        app::MoonIconRenderer_IconObject y,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        int32_t,
        EndInvoke,
        app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::System::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_
