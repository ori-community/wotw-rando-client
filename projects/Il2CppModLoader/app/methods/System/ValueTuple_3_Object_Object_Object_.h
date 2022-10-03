#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ValueTuple_3_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x0013C860, void, ctor, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr, app::Object* item1, app::Object* item2, app::Object* item3))
    IL2CPP_REGISTER_METHOD(0x0021E980, bool, Equals_1, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0021EAB0, bool, Equals_2, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr, app::ValueTuple_3_Object_Object_Object_ other))
    IL2CPP_REGISTER_METHOD(0x0021EAE0, bool, IStructuralEquatable_Equals, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021EAF0, int32_t, IComparable_CompareTo, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHODINFO(0x04746630, ValueTuple_3_Object_Object_Object__System_IComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021EB00, int32_t, CompareTo, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr, app::ValueTuple_3_Object_Object_Object_ other))
    IL2CPP_REGISTER_METHOD(0x0021EB30, int32_t, IStructuralComparable_CompareTo, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047523D0, ValueTuple_3_Object_Object_Object__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021EB40, int32_t, GetHashCode, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021EBE0, int32_t, IStructuralEquatable_GetHashCode, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021ECF0, int32_t, GetHashCodeCore, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021EDF0, app::String*, ToString, (app::ValueTuple_3_Object_Object_Object___Boxed * this_ptr))
} // namespace app::classes::System::ValueTuple_3_Object_Object_Object_
