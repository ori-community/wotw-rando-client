#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_System_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_Single_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02E65950, app::EqualityComparer_1_System_Single_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02E662B0, int32_t, IndexOf, (app::EqualityComparer_1_System_Single_ * this_ptr, app::Single__Array* array, float value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02E66360, int32_t, LastIndexOf, (app::EqualityComparer_1_System_Single_ * this_ptr, app::Single__Array* array, float value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02E66410, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_Single_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02E66500, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_Single_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_Single_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Single_
