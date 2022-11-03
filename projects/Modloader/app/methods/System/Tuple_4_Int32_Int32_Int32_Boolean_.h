#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Tuple_4_Int32_Int32_Int32_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02A6BBD0, void, ctor, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr, int32_t item1, int32_t item2, int32_t item3, bool item4))
    IL2CPP_REGISTER_METHODINFO(0x0473D2E0, Tuple_4_Int32_Int32_Int32_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Item1, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Item2, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Item3, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_Item4, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A6BC00, bool, Equals, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A6BCE0, bool, IStructuralEquatable_Equals, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A6C000, int32_t, IComparable_CompareTo, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A6C0E0, int32_t, IStructuralComparable_CompareTo, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477C3C8, Tuple_4_Int32_Int32_Int32_Boolean__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A6C470, int32_t, GetHashCode, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A6C540, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A6C730, app::String*, ToString, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A6C8B0, app::String*, ITupleInternal_ToString, (app::Tuple_4_Int32_Int32_Int32_Boolean_ * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Tuple_4_Int32_Int32_Int32_Boolean_
