#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Tuple_2_Int32_Int32_ {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Item1, (app::Tuple_2_Int32_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715B08, Tuple_2_Int32_Int32__get_Item1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Item2, (app::Tuple_2_Int32_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475EC58, Tuple_2_Int32_Int32__get_Item2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A64360, void, ctor, (app::Tuple_2_Int32_Int32_ * this_ptr, int32_t item1, int32_t item2))
    IL2CPP_REGISTER_METHOD(0x02A64380, bool, Equals, (app::Tuple_2_Int32_Int32_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02A64460, bool, IStructuralEquatable_Equals, (app::Tuple_2_Int32_Int32_ * this_ptr, app::Object * other, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x02A64660, int32_t, IComparable_CompareTo, (app::Tuple_2_Int32_Int32_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02A64740, int32_t, IStructuralComparable_CompareTo, (app::Tuple_2_Int32_Int32_ * this_ptr, app::Object * other, app::IComparer * comparer))
    IL2CPP_REGISTER_METHODINFO(0x04788CE0, Tuple_2_Int32_Int32__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A649C0, int32_t, GetHashCode, (app::Tuple_2_Int32_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A64A90, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_2_Int32_Int32_ * this_ptr, app::IEqualityComparer * comparer))
    IL2CPP_REGISTER_METHOD(0x02A64BD0, app::String *, ToString, (app::Tuple_2_Int32_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A64D50, app::String *, ITupleInternal_ToString, (app::Tuple_2_Int32_Int32_ * this_ptr, app::StringBuilder * sb))
}
