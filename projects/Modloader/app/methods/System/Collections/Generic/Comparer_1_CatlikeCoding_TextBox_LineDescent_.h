#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_CatlikeCoding_TextBox_LineDescent_.h>
#include <Modloader/app/structs/Comparison_1_CatlikeCoding_TextBox_LineDescent_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_CatlikeCoding_TextBox_LineDescent_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_CatlikeCoding_TextBox_LineDescent_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02C95980, app::Comparer_1_CatlikeCoding_TextBox_LineDescent_*, Create, (app::Comparison_1_CatlikeCoding_TextBox_LineDescent_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x047244B8, Comparer_1_CatlikeCoding_TextBox_LineDescent__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C95B80, app::Comparer_1_CatlikeCoding_TextBox_LineDescent_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02812A90, int32_t, IComparer_Compare, (app::Comparer_1_CatlikeCoding_TextBox_LineDescent_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_CatlikeCoding_TextBox_LineDescent_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_CatlikeCoding_TextBox_LineDescent_
