#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualityComparer_1_System_UInt64_.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_UInt64_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02E682A0, app::EqualityComparer_1_System_UInt64_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02E61BD0, int32_t, IndexOf, (app::EqualityComparer_1_System_UInt64_ * this_ptr, app::UInt64__Array* array, uint64_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02E61C80, int32_t, LastIndexOf, (app::EqualityComparer_1_System_UInt64_ * this_ptr, app::UInt64__Array* array, uint64_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B48190, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_UInt64_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02E61D30, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_UInt64_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_UInt64_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_UInt64_
