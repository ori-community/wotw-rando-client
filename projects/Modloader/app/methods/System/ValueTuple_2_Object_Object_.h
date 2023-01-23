#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ValueTuple_2_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::ValueTuple_2_Object_Object___Boxed * this_ptr, app::Object* item1, app::Object* item2))
    IL2CPP_REGISTER_METHOD(0x0021D5E0, bool, Equals_1, (app::ValueTuple_2_Object_Object___Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0021D6F0, bool, Equals_2, (app::ValueTuple_2_Object_Object___Boxed * this_ptr, app::ValueTuple_2_Object_Object_ other))
    IL2CPP_REGISTER_METHOD(0x0021D710, bool, IStructuralEquatable_Equals, (app::ValueTuple_2_Object_Object___Boxed * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021D8B0, int32_t, IComparable_CompareTo, (app::ValueTuple_2_Object_Object___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHODINFO(0x0474D3E8, ValueTuple_2_Object_Object__System_IComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021D8C0, int32_t, CompareTo, (app::ValueTuple_2_Object_Object___Boxed * this_ptr, app::ValueTuple_2_Object_Object_ other))
    IL2CPP_REGISTER_METHOD(0x0021D8E0, int32_t, IStructuralComparable_CompareTo, (app::ValueTuple_2_Object_Object___Boxed * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047772E0, ValueTuple_2_Object_Object__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0021D8F0, int32_t, GetHashCode, (app::ValueTuple_2_Object_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0021D960, int32_t, IStructuralEquatable_GetHashCode, (app::ValueTuple_2_Object_Object___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021DA50, int32_t, GetHashCodeCore, (app::ValueTuple_2_Object_Object___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x0021DB20, app::String*, ToString, (app::ValueTuple_2_Object_Object___Boxed * this_ptr))
} // namespace app::classes::System::ValueTuple_2_Object_Object_
