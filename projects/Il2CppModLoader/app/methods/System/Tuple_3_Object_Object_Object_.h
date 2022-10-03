#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Tuple_3_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Item1, (app::Tuple_3_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Item2, (app::Tuple_3_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_Item3, (app::Tuple_3_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A69560, void, ctor, (app::Tuple_3_Object_Object_Object_ * this_ptr, app::Object* item1, app::Object* item2, app::Object* item3))
    IL2CPP_REGISTER_METHOD(0x02A69580, bool, Equals, (app::Tuple_3_Object_Object_Object_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A69660, bool, IStructuralEquatable_Equals, (app::Tuple_3_Object_Object_Object_ * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A697A0, int32_t, IComparable_CompareTo, (app::Tuple_3_Object_Object_Object_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A69880, int32_t, IStructuralComparable_CompareTo, (app::Tuple_3_Object_Object_Object_ * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04744440, Tuple_3_Object_Object_Object__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A69A40, int32_t, GetHashCode, (app::Tuple_3_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A69B10, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_3_Object_Object_Object_ * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A69C00, app::String*, ToString, (app::Tuple_3_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A69D80, app::String*, ITupleInternal_ToString, (app::Tuple_3_Object_Object_Object_ * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Tuple_3_Object_Object_Object_
