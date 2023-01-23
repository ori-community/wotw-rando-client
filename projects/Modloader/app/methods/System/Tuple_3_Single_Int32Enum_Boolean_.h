#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Tuple_3_Single_Int32Enum_Boolean_.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Tuple_3_Single_Int32Enum_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_Item1, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::Int32Enum__Enum, get_Item2, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Item3, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A69ED0, void, ctor, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr, float item1, app::Int32Enum__Enum item2, bool item3))
    IL2CPP_REGISTER_METHOD(0x02A69F00, bool, Equals, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A69FE0, bool, IStructuralEquatable_Equals, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A6A280, int32_t, IComparable_CompareTo, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A6A360, int32_t, IStructuralComparable_CompareTo, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476B7A0, Tuple_3_Single_Int32Enum_Boolean__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A6A670, int32_t, GetHashCode, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A6A740, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A6A8E0, app::String*, ToString, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A6AA60, app::String*, ITupleInternal_ToString, (app::Tuple_3_Single_Int32Enum_Boolean_ * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Tuple_3_Single_Int32Enum_Boolean_
