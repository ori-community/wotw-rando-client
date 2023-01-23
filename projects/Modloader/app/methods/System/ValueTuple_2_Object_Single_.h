#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Single___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Single_.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ValueTuple_2_Object_Single_ {
    IL2CPP_REGISTER_METHOD(0x0011D740, void, ctor, (app::ValueTuple_2_Object_Single___Boxed * this_ptr, app::Object* item1, float item2))
    IL2CPP_REGISTER_METHOD(0x0021DB30, bool, Equals_1, (app::ValueTuple_2_Object_Single___Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0021DC40, bool, Equals_2, (app::ValueTuple_2_Object_Single___Boxed * this_ptr, app::ValueTuple_2_Object_Single_ other))
    IL2CPP_REGISTER_METHOD(0x0021DC60, bool, IStructuralEquatable_Equals, (app::ValueTuple_2_Object_Single___Boxed * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021DC70, int32_t, IComparable_CompareTo, (app::ValueTuple_2_Object_Single___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHODINFO(0x0472F850, ValueTuple_2_Object_Single__System_IComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021DC80, int32_t, CompareTo, (app::ValueTuple_2_Object_Single___Boxed * this_ptr, app::ValueTuple_2_Object_Single_ other))
    IL2CPP_REGISTER_METHOD(0x0021DCA0, int32_t, IStructuralComparable_CompareTo, (app::ValueTuple_2_Object_Single___Boxed * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047096E8, ValueTuple_2_Object_Single__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021DCB0, int32_t, GetHashCode, (app::ValueTuple_2_Object_Single___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021DD10, int32_t, IStructuralEquatable_GetHashCode, (app::ValueTuple_2_Object_Single___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021DE60, int32_t, GetHashCodeCore, (app::ValueTuple_2_Object_Single___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021DF90, app::String*, ToString, (app::ValueTuple_2_Object_Single___Boxed * this_ptr))
} // namespace app::classes::System::ValueTuple_2_Object_Single_
