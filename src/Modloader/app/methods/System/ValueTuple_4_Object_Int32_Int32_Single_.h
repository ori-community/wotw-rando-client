#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Int32_Int32_Single_.h>
#include <Modloader/app/structs/ValueTuple_4_Object_Int32_Int32_Single___Boxed.h>

namespace app::classes::System::ValueTuple_4_Object_Int32_Int32_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x0021EE00,
        void,
        ctor,
        app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr,
        app::Object* item1,
        int32_t item2,
        int32_t item3,
        float item4
    )
    IL2CPP_REGISTER_METHOD(0x0021EE20, bool, Equals_1, app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x0021EF50,
        bool,
        Equals_2,
        app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr,
        app::ValueTuple_4_Object_Int32_Int32_Single_ other
    )
    IL2CPP_REGISTER_METHOD(
        0x0021EF80,
        bool,
        IStructuralEquatable_Equals,
        app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr,
        app::Object* other,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021EF90, int32_t, IComparable_CompareTo, app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(
        0x0021EFA0,
        int32_t,
        CompareTo,
        app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr,
        app::ValueTuple_4_Object_Int32_Int32_Single_ other
    )
    IL2CPP_REGISTER_METHOD(
        0x0021EFD0,
        int32_t,
        IStructuralComparable_CompareTo,
        app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr,
        app::Object* other,
        app::IComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021EFE0, int32_t, GetHashCode, app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0021F050,
        int32_t,
        IStructuralEquatable_GetHashCode,
        app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0021F0B0,
        int32_t,
        GetHashCodeCore,
        app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021F0C0, app::String*, ToString, app::ValueTuple_4_Object_Int32_Int32_Single___Boxed* this_ptr)
} // namespace app::classes::System::ValueTuple_4_Object_Int32_Int32_Single_
