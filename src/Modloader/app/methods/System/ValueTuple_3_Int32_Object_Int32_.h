#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValueTuple_3_Int32_Object_Int32_.h>
#include <Modloader/app/structs/ValueTuple_3_Int32_Object_Int32___Boxed.h>

namespace app::classes::System::ValueTuple_3_Int32_Object_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0021E5B0, void, ctor, app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr, int32_t item1, app::Object* item2, int32_t item3)
    IL2CPP_REGISTER_METHOD(0x0021E5C0, bool, Equals_1, app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0021E6F0, bool, Equals_2, app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr, app::ValueTuple_3_Int32_Object_Int32_ other)
    IL2CPP_REGISTER_METHOD(
        0x0021E720,
        bool,
        IStructuralEquatable_Equals,
        app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr,
        app::Object* other,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021E730, int32_t, IComparable_CompareTo, app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0021E740, int32_t, CompareTo, app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr, app::ValueTuple_3_Int32_Object_Int32_ other)
    IL2CPP_REGISTER_METHOD(
        0x0021E770,
        int32_t,
        IStructuralComparable_CompareTo,
        app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr,
        app::Object* other,
        app::IComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021E780, int32_t, GetHashCode, app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0021E7D0,
        int32_t,
        IStructuralEquatable_GetHashCode,
        app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021E7E0, int32_t, GetHashCodeCore, app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr, app::IEqualityComparer* comparer)
    IL2CPP_REGISTER_METHOD(0x0021E970, app::String*, ToString, app::ValueTuple_3_Int32_Object_Int32___Boxed* this_ptr)
} // namespace app::classes::System::ValueTuple_3_Int32_Object_Int32_
