#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LineDescent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectComparer_1_CatlikeCoding_TextBox_LineDescent_.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_CatlikeCoding_TextBox_LineDescent_ {
    IL2CPP_REGISTER_METHOD(
        0x02C298F0,
        int32_t,
        Compare,
        app::ObjectComparer_1_CatlikeCoding_TextBox_LineDescent_* this_ptr,
        app::LineDescent x,
        app::LineDescent y
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, app::ObjectComparer_1_CatlikeCoding_TextBox_LineDescent_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, app::ObjectComparer_1_CatlikeCoding_TextBox_LineDescent_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectComparer_1_CatlikeCoding_TextBox_LineDescent_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_CatlikeCoding_TextBox_LineDescent_
