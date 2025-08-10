#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_CatlikeCoding_TextBox_TextBoxLine_.h>
#include <Modloader/app/structs/Comparison_1_CatlikeCoding_TextBox_TextBoxLine_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_CatlikeCoding_TextBox_TextBoxLine_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_CatlikeCoding_TextBox_TextBoxLine_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x02C96920,
        app::Comparer_1_CatlikeCoding_TextBox_TextBoxLine_*,
        Create,
        app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x02C96B20, app::Comparer_1_CatlikeCoding_TextBox_TextBoxLine_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(0x02811920, int32_t, IComparer_Compare, app::Comparer_1_CatlikeCoding_TextBox_TextBoxLine_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_CatlikeCoding_TextBox_TextBoxLine_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_CatlikeCoding_TextBox_TextBoxLine_
