#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Tuple_4_Object_Object_Int32_Int32_.h>

namespace app::classes::System::Tuple_4_Object_Object_Int32_Int32_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Item1, app::Tuple_4_Object_Object_Int32_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Item2, app::Tuple_4_Object_Object_Int32_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Item3, app::Tuple_4_Object_Object_Int32_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Item4, app::Tuple_4_Object_Object_Int32_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A6CB20,
        void,
        ctor,
        app::Tuple_4_Object_Object_Int32_Int32_* this_ptr,
        app::Object* item1,
        app::Object* item2,
        int32_t item3,
        int32_t item4
    )
    IL2CPP_REGISTER_METHOD(0x02A6CB50, bool, Equals, app::Tuple_4_Object_Object_Int32_Int32_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02A6CC30,
        bool,
        IStructuralEquatable_Equals,
        app::Tuple_4_Object_Object_Int32_Int32_* this_ptr,
        app::Object* other,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A6CE80, int32_t, IComparable_CompareTo, app::Tuple_4_Object_Object_Int32_Int32_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02A6CF60,
        int32_t,
        IStructuralComparable_CompareTo,
        app::Tuple_4_Object_Object_Int32_Int32_* this_ptr,
        app::Object* other,
        app::IComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A6D230, int32_t, GetHashCode, app::Tuple_4_Object_Object_Int32_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A6D300,
        int32_t,
        IStructuralEquatable_GetHashCode,
        app::Tuple_4_Object_Object_Int32_Int32_* this_ptr,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A6D490, app::String*, ToString, app::Tuple_4_Object_Object_Int32_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A6D610, app::String*, ITupleInternal_ToString, app::Tuple_4_Object_Object_Int32_Int32_* this_ptr, app::StringBuilder* sb)
} // namespace app::classes::System::Tuple_4_Object_Object_Int32_Int32_
