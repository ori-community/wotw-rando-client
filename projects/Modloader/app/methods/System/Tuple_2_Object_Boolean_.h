#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Tuple_2_Object_Boolean_.h>

namespace app::classes::System::Tuple_2_Object_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Item1, app::Tuple_2_Object_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Item2, app::Tuple_2_Object_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A5F4B0, void, ctor, app::Tuple_2_Object_Boolean_* this_ptr, app::Object* item1, bool item2)
    IL2CPP_REGISTER_METHOD(0x02A65910, bool, Equals, app::Tuple_2_Object_Boolean_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02A659F0,
        bool,
        IStructuralEquatable_Equals,
        app::Tuple_2_Object_Boolean_* this_ptr,
        app::Object* other,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A65B90, int32_t, IComparable_CompareTo, app::Tuple_2_Object_Boolean_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02A65C70,
        int32_t,
        IStructuralComparable_CompareTo,
        app::Tuple_2_Object_Boolean_* this_ptr,
        app::Object* other,
        app::IComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A65E80, int32_t, GetHashCode, app::Tuple_2_Object_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A65F50, int32_t, IStructuralEquatable_GetHashCode, app::Tuple_2_Object_Boolean_* this_ptr, app::IEqualityComparer* comparer)
    IL2CPP_REGISTER_METHOD(0x02A66060, app::String*, ToString, app::Tuple_2_Object_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A661E0, app::String*, ITupleInternal_ToString, app::Tuple_2_Object_Boolean_* this_ptr, app::StringBuilder* sb)
} // namespace app::classes::System::Tuple_2_Object_Boolean_
