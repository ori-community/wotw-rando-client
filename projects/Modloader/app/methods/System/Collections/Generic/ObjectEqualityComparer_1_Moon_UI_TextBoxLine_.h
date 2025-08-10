#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_Moon_UI_TextBoxLine_.h>
#include <Modloader/app/structs/TextBoxLine_1.h>
#include <Modloader/app/structs/TextBoxLine_1__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_UI_TextBoxLine_ {
    IL2CPP_REGISTER_METHOD(0x01CD1C30, bool, Equals_1, app::ObjectEqualityComparer_1_Moon_UI_TextBoxLine_* this_ptr, app::TextBoxLine_1 x, app::TextBoxLine_1 y)
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_Moon_UI_TextBoxLine_* this_ptr, app::TextBoxLine_1 obj)
    IL2CPP_REGISTER_METHOD(
        0x01CD1D00,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_Moon_UI_TextBoxLine_* this_ptr,
        app::TextBoxLine_1__Array* array,
        app::TextBoxLine_1 value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD1EA0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_Moon_UI_TextBoxLine_* this_ptr,
        app::TextBoxLine_1__Array* array,
        app::TextBoxLine_1 value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_Moon_UI_TextBoxLine_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_Moon_UI_TextBoxLine_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_Moon_UI_TextBoxLine_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_UI_TextBoxLine_
