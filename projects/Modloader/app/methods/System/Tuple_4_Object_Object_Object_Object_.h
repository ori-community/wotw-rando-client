#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Tuple_4_Object_Object_Object_Object_.h>

namespace app::classes::System::Tuple_4_Object_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Item1, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Item2, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_Item3, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Object*, get_Item4, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A6D810, void, ctor, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr, app::Object* item1, app::Object* item2, app::Object* item3, app::Object* item4))
    IL2CPP_REGISTER_METHOD(0x02A6D840, bool, Equals, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A6D920, bool, IStructuralEquatable_Equals, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A6DA90, int32_t, IComparable_CompareTo, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A6DB70, int32_t, IStructuralComparable_CompareTo, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A6DD50, int32_t, GetHashCode, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A6DE20, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A6DF40, app::String*, ToString, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A6E0C0, app::String*, ITupleInternal_ToString, (app::Tuple_4_Object_Object_Object_Object_ * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Tuple_4_Object_Object_Object_Object_
