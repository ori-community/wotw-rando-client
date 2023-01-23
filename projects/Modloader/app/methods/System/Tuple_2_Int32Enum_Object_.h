#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Tuple_2_Int32Enum_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Tuple_2_Int32Enum_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::Int32Enum__Enum, get_Item1, (app::Tuple_2_Int32Enum_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Item2, (app::Tuple_2_Int32Enum_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A64EE0, void, ctor, (app::Tuple_2_Int32Enum_Object_ * this_ptr, app::Int32Enum__Enum item1, app::Object* item2))
    IL2CPP_REGISTER_METHOD(0x02A64F00, bool, Equals, (app::Tuple_2_Int32Enum_Object_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A64FE0, bool, IStructuralEquatable_Equals, (app::Tuple_2_Int32Enum_Object_ * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A65180, int32_t, IComparable_CompareTo, (app::Tuple_2_Int32Enum_Object_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A65260, int32_t, IStructuralComparable_CompareTo, (app::Tuple_2_Int32Enum_Object_ * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04753E68, Tuple_2_Int32Enum_Object__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A65470, int32_t, GetHashCode, (app::Tuple_2_Int32Enum_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A65540, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_2_Int32Enum_Object_ * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A65640, app::String*, ToString, (app::Tuple_2_Int32Enum_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A657C0, app::String*, ITupleInternal_ToString, (app::Tuple_2_Int32Enum_Object_ * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Tuple_2_Int32Enum_Object_
