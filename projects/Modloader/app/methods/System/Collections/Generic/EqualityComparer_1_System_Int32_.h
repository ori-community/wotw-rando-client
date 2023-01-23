#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualityComparer_1_System_Int32_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_Int32_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02E5FCD0, app::EqualityComparer_1_System_Int32_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02E60630, int32_t, IndexOf, (app::EqualityComparer_1_System_Int32_ * this_ptr, app::Int32__Array* array, int32_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02E606E0, int32_t, LastIndexOf, (app::EqualityComparer_1_System_Int32_ * this_ptr, app::Int32__Array* array, int32_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4AA80, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_Int32_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02E60790, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_Int32_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_Int32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Int32_
