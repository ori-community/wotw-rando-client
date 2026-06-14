#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Boolean_.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_Boolean___Boxed.h>

namespace app::classes::System::ValueTuple_2_Int32_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x001508B0, void, ctor, app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr, int32_t item1, bool item2)
    IL2CPP_REGISTER_METHOD(0x0021C170, bool, Equals_1, app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0021C180, bool, Equals_2, app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr, app::ValueTuple_2_Int32_Boolean_ other)
    IL2CPP_REGISTER_METHOD(
        0x0021C2B0,
        bool,
        IStructuralEquatable_Equals,
        app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr,
        app::Object* other,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021C2C0, int32_t, IComparable_CompareTo, app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0021C2D0, int32_t, CompareTo, app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr, app::ValueTuple_2_Int32_Boolean_ other)
    IL2CPP_REGISTER_METHOD(
        0x0021C400,
        int32_t,
        IStructuralComparable_CompareTo,
        app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr,
        app::Object* other,
        app::IComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021C410, int32_t, GetHashCode, app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0021C430,
        int32_t,
        IStructuralEquatable_GetHashCode,
        app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021C5C0, int32_t, GetHashCodeCore, app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr, app::IEqualityComparer* comparer)
    IL2CPP_REGISTER_METHOD(0x0021C730, app::String*, ToString, app::ValueTuple_2_Int32_Boolean___Boxed* this_ptr)
} // namespace app::classes::System::ValueTuple_2_Int32_Boolean_
