#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_Int64_.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02435AF0, bool, Equals_1, (app::ObjectEqualityComparer_1_System_Int64_ * this_ptr, int64_t x, int64_t y))
    IL2CPP_REGISTER_METHOD(0x02435B40, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_System_Int64_ * this_ptr, int64_t obj))
    IL2CPP_REGISTER_METHOD(0x02435B50, int32_t, IndexOf, (app::ObjectEqualityComparer_1_System_Int64_ * this_ptr, app::Int64__Array* array, int64_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02435C30, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_System_Int64_ * this_ptr, app::Int64__Array* array, int64_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_System_Int64_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_System_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_System_Int64_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Int64_
