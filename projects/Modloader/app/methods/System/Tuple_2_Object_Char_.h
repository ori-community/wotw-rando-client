#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Tuple_2_Object_Char_.h>

namespace app::classes::System::Tuple_2_Object_Char_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Item1, app::Tuple_2_Object_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A66330, char16_t, get_Item2, app::Tuple_2_Object_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A66340, void, ctor, app::Tuple_2_Object_Char_* this_ptr, app::Object* item1, char16_t item2)
    IL2CPP_REGISTER_METHOD(0x02A66360, bool, Equals, app::Tuple_2_Object_Char_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02A66440,
        bool,
        IStructuralEquatable_Equals,
        app::Tuple_2_Object_Char_* this_ptr,
        app::Object* other,
        app::IEqualityComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A665E0, int32_t, IComparable_CompareTo, app::Tuple_2_Object_Char_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x02A666C0,
        int32_t,
        IStructuralComparable_CompareTo,
        app::Tuple_2_Object_Char_* this_ptr,
        app::Object* other,
        app::IComparer* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02A668D0, int32_t, GetHashCode, app::Tuple_2_Object_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A669A0, int32_t, IStructuralEquatable_GetHashCode, app::Tuple_2_Object_Char_* this_ptr, app::IEqualityComparer* comparer)
    IL2CPP_REGISTER_METHOD(0x02A66AB0, app::String*, ToString, app::Tuple_2_Object_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A66C30, app::String*, ITupleInternal_ToString, app::Tuple_2_Object_Char_* this_ptr, app::StringBuilder* sb)
} // namespace app::classes::System::Tuple_2_Object_Char_
