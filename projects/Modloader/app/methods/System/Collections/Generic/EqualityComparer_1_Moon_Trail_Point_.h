#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Trail_Point.h>
#include <Modloader/app/structs/Trail_Point__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_Trail_Point_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_Moon_Trail_Point_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02D39D30, app::EqualityComparer_1_Moon_Trail_Point_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02D3A690,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_Moon_Trail_Point_* this_ptr,
        app::Trail_Point__Array* array,
        app::Trail_Point value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02D3A7D0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_Moon_Trail_Point_* this_ptr,
        app::Trail_Point__Array* array,
        app::Trail_Point value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02D3A910, int32_t, IEqualityComparer_GetHashCode, app::EqualityComparer_1_Moon_Trail_Point_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02D3AA40, bool, IEqualityComparer_Equals, app::EqualityComparer_1_Moon_Trail_Point_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_Moon_Trail_Point_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_Trail_Point_
