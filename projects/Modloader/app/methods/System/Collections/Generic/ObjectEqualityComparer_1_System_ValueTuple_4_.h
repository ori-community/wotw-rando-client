#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_ValueTuple_4_.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Int32_Int32_Single_.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Int32_Int32_Single___Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_ValueTuple_4_ {
    IL2CPP_REGISTER_METHOD(0x024377C0, bool, Equals_1, (app::ObjectEqualityComparer_1_System_ValueTuple_4_ * this_ptr, app::ValueTuple_4_Object_Int32_Int32_Single_ x, app::ValueTuple_4_Object_Int32_Int32_Single_ y))
    IL2CPP_REGISTER_METHOD(0x02437890, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_System_ValueTuple_4_ * this_ptr, app::ValueTuple_4_Object_Int32_Int32_Single_ obj))
    IL2CPP_REGISTER_METHOD(0x02437900, int32_t, IndexOf, (app::ObjectEqualityComparer_1_System_ValueTuple_4_ * this_ptr, app::ValueTuple_4_Object_Int32_Int32_Single___Array* array, app::ValueTuple_4_Object_Int32_Int32_Single_ value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02437A90, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_System_ValueTuple_4_ * this_ptr, app::ValueTuple_4_Object_Int32_Int32_Single___Array* array, app::ValueTuple_4_Object_Int32_Int32_Single_ value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_System_ValueTuple_4_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_System_ValueTuple_4_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_System_ValueTuple_4_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_ValueTuple_4_
