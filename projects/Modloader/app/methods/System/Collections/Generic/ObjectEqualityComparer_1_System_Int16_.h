#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_System_Int16_.h>
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Int16_ {
    IL2CPP_REGISTER_METHOD(0x024352F0, bool, Equals_1, (app::ObjectEqualityComparer_1_System_Int16_ * this_ptr, int16_t x, int16_t y))
    IL2CPP_REGISTER_METHOD(0x02435340, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_System_Int16_ * this_ptr, int16_t obj))
    IL2CPP_REGISTER_METHOD(0x02435350, int32_t, IndexOf, (app::ObjectEqualityComparer_1_System_Int16_ * this_ptr, app::Int16__Array* array, int16_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02435430, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_System_Int16_ * this_ptr, app::Int16__Array* array, int16_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_System_Int16_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_System_Int16_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_System_Int16_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Int16_
