#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_System_UInt16_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UInt16__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_UInt16_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_UInt16_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02E66FE0, app::EqualityComparer_1_System_UInt16_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02D9D120, int32_t, IndexOf, (app::EqualityComparer_1_System_UInt16_ * this_ptr, app::UInt16__Array* array, uint16_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D9D1D0, int32_t, LastIndexOf, (app::EqualityComparer_1_System_UInt16_ * this_ptr, app::UInt16__Array* array, uint16_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02D9D280, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_UInt16_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02D9D370, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_UInt16_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_UInt16_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_UInt16_
