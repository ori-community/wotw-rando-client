#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(
        0x0021DFA0,
        void,
        ctor,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr,
        app::Vector3 item1,
        app::Vector3 item2
    )
    IL2CPP_REGISTER_METHOD(0x0021DFD0, bool, Equals_1, app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x0021E0E0,
        bool,
        Equals_2,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3_ other
    )
    IL2CPP_REGISTER_METHOD(
        0x0021E110,
        bool,
        IStructuralEquatable_Equals,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr,
        app::Object* other,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0021E120,
        int32_t,
        IComparable_CompareTo,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr,
        app::Object* other
    )
    IL2CPP_REGISTER_METHOD(
        0x0021E130,
        int32_t,
        CompareTo,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3_ other
    )
    IL2CPP_REGISTER_METHOD(
        0x0021E160,
        int32_t,
        IStructuralComparable_CompareTo,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr,
        app::Object* other,
        app::IComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021E170, int32_t, GetHashCode, app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0021E260,
        int32_t,
        IStructuralEquatable_GetHashCode,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0021E410,
        int32_t,
        GetHashCodeCore,
        app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x0021E5A0, app::String*, ToString, app::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3___Boxed* this_ptr)
} // namespace app::classes::System::ValueTuple_2_UnityEngine_Vector3_UnityEngine_Vector3_
