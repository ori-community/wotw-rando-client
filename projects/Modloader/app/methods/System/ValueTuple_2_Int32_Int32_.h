#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ValueTuple_2_Int32_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr, int32_t item1, int32_t item2))
    IL2CPP_REGISTER_METHODINFO(0x04714650, ValueTuple_2_Int32_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021C740, bool, Equals_1, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0021C750, bool, Equals_2, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr, app::ValueTuple_2_Int32_Int32_ other))
    IL2CPP_REGISTER_METHOD(0x0021C880, bool, IStructuralEquatable_Equals, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021C890, int32_t, IComparable_CompareTo, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHODINFO(0x04721398, ValueTuple_2_Int32_Int32__System_IComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021C8A0, int32_t, CompareTo, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr, app::ValueTuple_2_Int32_Int32_ other))
    IL2CPP_REGISTER_METHOD(0x0021C9C0, int32_t, IStructuralComparable_CompareTo, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04757638, ValueTuple_2_Int32_Int32__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021C9D0, int32_t, GetHashCode, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021C9E0, int32_t, IStructuralEquatable_GetHashCode, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021CB70, int32_t, GetHashCodeCore, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021CCE0, app::String*, ToString, (app::ValueTuple_2_Int32_Int32___Boxed * this_ptr))
} // namespace app::classes::System::ValueTuple_2_Int32_Int32_
