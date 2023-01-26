#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_System_UInt32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x02436BA0, bool, Equals_1, (app::ObjectEqualityComparer_1_System_UInt32_ * this_ptr, uint32_t x, uint32_t y))
    IL2CPP_REGISTER_METHOD(0x02435570, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_System_UInt32_ * this_ptr, uint32_t obj))
    IL2CPP_REGISTER_METHOD(0x02436BF0, int32_t, IndexOf, (app::ObjectEqualityComparer_1_System_UInt32_ * this_ptr, app::UInt32__Array* array, uint32_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02436CD0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_System_UInt32_ * this_ptr, app::UInt32__Array* array, uint32_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_System_UInt32_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_System_UInt32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_System_UInt32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_UInt32_
