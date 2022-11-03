#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Tuple_2_Object_Single_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Item1, (app::Tuple_2_Object_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Item2, (app::Tuple_2_Object_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A68070, void, ctor, (app::Tuple_2_Object_Single_ * this_ptr, app::Object* item1, float item2))
    IL2CPP_REGISTER_METHOD(0x02A68090, bool, Equals, (app::Tuple_2_Object_Single_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A68170, bool, IStructuralEquatable_Equals, (app::Tuple_2_Object_Single_ * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A68310, int32_t, IComparable_CompareTo, (app::Tuple_2_Object_Single_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A683F0, int32_t, IStructuralComparable_CompareTo, (app::Tuple_2_Object_Single_ * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0470BF70, Tuple_2_Object_Single__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A68600, int32_t, GetHashCode, (app::Tuple_2_Object_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A686D0, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_2_Object_Single_ * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A687E0, app::String*, ToString, (app::Tuple_2_Object_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A68960, app::String*, ITupleInternal_ToString, (app::Tuple_2_Object_Single_ * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Tuple_2_Object_Single_
