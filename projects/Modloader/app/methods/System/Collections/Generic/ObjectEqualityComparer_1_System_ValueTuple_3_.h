#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_System_ValueTuple_3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_3_Int32_Object_Int32_.h>
#include <Modloader/app/structs/ValueTuple_3_Int32_Object_Int32___Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_ValueTuple_3_ {
    IL2CPP_REGISTER_METHOD(0x024377C0, bool, Equals_1, (app::ObjectEqualityComparer_1_System_ValueTuple_3_ * this_ptr, app::ValueTuple_3_Int32_Object_Int32_ x, app::ValueTuple_3_Int32_Object_Int32_ y))
    IL2CPP_REGISTER_METHOD(0x02437890, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_System_ValueTuple_3_ * this_ptr, app::ValueTuple_3_Int32_Object_Int32_ obj))
    IL2CPP_REGISTER_METHOD(0x02437900, int32_t, IndexOf, (app::ObjectEqualityComparer_1_System_ValueTuple_3_ * this_ptr, app::ValueTuple_3_Int32_Object_Int32___Array* array, app::ValueTuple_3_Int32_Object_Int32_ value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02437A90, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_System_ValueTuple_3_ * this_ptr, app::ValueTuple_3_Int32_Object_Int32___Array* array, app::ValueTuple_3_Int32_Object_Int32_ value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_System_ValueTuple_3_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_System_ValueTuple_3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_System_ValueTuple_3_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_ValueTuple_3_
