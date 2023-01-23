#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Int32Enum___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Int32Enum_.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ValueTuple_2_Object_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x0011D2D0, void, ctor, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr, app::Object* item1, app::Int32Enum__Enum item2))
    IL2CPP_REGISTER_METHOD(0x0021D130, bool, Equals_1, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0021D240, bool, Equals_2, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr, app::ValueTuple_2_Object_Int32Enum_ other))
    IL2CPP_REGISTER_METHOD(0x0021D260, bool, IStructuralEquatable_Equals, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021D270, int32_t, IComparable_CompareTo, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHODINFO(0x04792F88, ValueTuple_2_Object_Int32Enum__System_IComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021D280, int32_t, CompareTo, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr, app::ValueTuple_2_Object_Int32Enum_ other))
    IL2CPP_REGISTER_METHOD(0x0021D2A0, int32_t, IStructuralComparable_CompareTo, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04741220, ValueTuple_2_Object_Int32Enum__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021D2B0, int32_t, GetHashCode, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021D360, int32_t, IStructuralEquatable_GetHashCode, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021D4B0, int32_t, GetHashCodeCore, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021D5D0, app::String*, ToString, (app::ValueTuple_2_Object_Int32Enum___Boxed * this_ptr))
} // namespace app::classes::System::ValueTuple_2_Object_Int32Enum_
