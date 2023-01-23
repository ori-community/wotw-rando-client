#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Object_Object_Object___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Object_Object_Object_.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ValueTuple_4_Object_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x001DEB10, void, ctor, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr, app::Object* item1, app::Object* item2, app::Object* item3, app::Object* item4))
    IL2CPP_REGISTER_METHOD(0x001DEB30, bool, Equals_1, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001DEC50, bool, Equals_2, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr, app::ValueTuple_4_Object_Object_Object_Object_ other))
    IL2CPP_REGISTER_METHOD(0x001DEC80, bool, IStructuralEquatable_Equals, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x001DEC90, int32_t, IComparable_CompareTo, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHODINFO(0x04773CF8, ValueTuple_4_Object_Object_Object_Object__System_IComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001DECA0, int32_t, CompareTo, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr, app::ValueTuple_4_Object_Object_Object_Object_ other))
    IL2CPP_REGISTER_METHOD(0x001DECD0, int32_t, IStructuralComparable_CompareTo, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0478B218, ValueTuple_4_Object_Object_Object_Object__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001DECE0, int32_t, GetHashCode, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DEDA0, int32_t, IStructuralEquatable_GetHashCode, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x001DEEE0, int32_t, GetHashCodeCore, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x001DF010, app::String*, ToString, (app::ValueTuple_4_Object_Object_Object_Object___Boxed * this_ptr))
} // namespace app::classes::System::ValueTuple_4_Object_Object_Object_Object_
