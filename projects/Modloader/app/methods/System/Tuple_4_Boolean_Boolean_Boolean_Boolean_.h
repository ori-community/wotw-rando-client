#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Tuple_4_Boolean_Boolean_Boolean_Boolean_.h>

namespace app::classes::System::Tuple_4_Boolean_Boolean_Boolean_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Item1, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_Item2, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BFB750, bool, get_Item3, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02619D10, bool, get_Item4, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A6AC60, void, ctor, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr, bool item1, bool item2, bool item3, bool item4)
    IL2CPP_REGISTER_METHOD(0x02A6AC90, bool, Equals, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02A6AD70,
        bool,
        IStructuralEquatable_Equals,
        app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr,
        app::Object* other,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A6B090, int32_t, IComparable_CompareTo, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02A6B170,
        int32_t,
        IStructuralComparable_CompareTo,
        app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr,
        app::Object* other,
        app::IComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A6B510, int32_t, GetHashCode, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A6B5E0,
        int32_t,
        IStructuralEquatable_GetHashCode,
        app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A6B7E0, app::String*, ToString, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A6B960, app::String*, ITupleInternal_ToString, app::Tuple_4_Boolean_Boolean_Boolean_Boolean_* this_ptr, app::StringBuilder* sb)
} // namespace app::classes::System::Tuple_4_Boolean_Boolean_Boolean_Boolean_
