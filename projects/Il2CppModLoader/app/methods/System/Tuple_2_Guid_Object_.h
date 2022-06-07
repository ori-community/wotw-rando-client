#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Tuple_2_Guid_Object_ {
    IL2CPP_REGISTER_METHOD(0x01349560, app::Guid, get_Item1, (app::Tuple_2_Guid_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object *, get_Item2, (app::Tuple_2_Guid_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A63920, void, ctor, (app::Tuple_2_Guid_Object_ * this_ptr, app::Guid item1, app::Object * item2))
    IL2CPP_REGISTER_METHOD(0x02A63940, bool, Equals, (app::Tuple_2_Guid_Object_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02A63A20, bool, IStructuralEquatable_Equals, (app::Tuple_2_Guid_Object_ * this_ptr, app::Object * other, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x02A63BC0, int32_t, IComparable_CompareTo, (app::Tuple_2_Guid_Object_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02A63CA0, int32_t, IStructuralComparable_CompareTo, (app::Tuple_2_Guid_Object_ * this_ptr, app::Object * other, app::IComparer * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04749C20, Tuple_2_Guid_Object__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A63EC0, int32_t, GetHashCode, (app::Tuple_2_Guid_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A63F90, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_2_Guid_Object_ * this_ptr, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x02A64090, app::String *, ToString, (app::Tuple_2_Guid_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A64210, app::String *, ITupleInternal_ToString, (app::Tuple_2_Guid_Object_ * this_ptr, app::StringBuilder * sb))
}
