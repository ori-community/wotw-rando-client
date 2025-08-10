#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Moon_Trail_Point_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Moon_Trail_Point_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02819CD0, app::Comparer_1_Moon_Trail_Point_*, Create, app::Comparison_1_Moon_Trail_Point_* comparison)
    IL2CPP_REGISTER_METHOD(0x02819ED0, app::Comparer_1_Moon_Trail_Point_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(0x0281A4A0, int32_t, IComparer_Compare, app::Comparer_1_Moon_Trail_Point_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_Moon_Trail_Point_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_Moon_Trail_Point_
