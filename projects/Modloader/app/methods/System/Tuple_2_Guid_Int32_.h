#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Tuple_2_Guid_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Tuple_2_Guid_Int32_ {
    IL2CPP_REGISTER_METHOD(0x01349560, app::Guid, get_Item1, (app::Tuple_2_Guid_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475E498, Tuple_2_Guid_Int32__get_Item1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Item2, (app::Tuple_2_Guid_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C838, Tuple_2_Guid_Int32__get_Item2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A62D90, void, ctor, (app::Tuple_2_Guid_Int32_ * this_ptr, app::Guid item1, int32_t item2))
    IL2CPP_REGISTER_METHOD(0x02A62DB0, bool, Equals, (app::Tuple_2_Guid_Int32_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A62E90, bool, IStructuralEquatable_Equals, (app::Tuple_2_Guid_Int32_ * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A630A0, int32_t, IComparable_CompareTo, (app::Tuple_2_Guid_Int32_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A63180, int32_t, IStructuralComparable_CompareTo, (app::Tuple_2_Guid_Int32_ * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04783CB8, Tuple_2_Guid_Int32__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A63400, int32_t, GetHashCode, (app::Tuple_2_Guid_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A634D0, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_2_Guid_Int32_ * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A63610, app::String*, ToString, (app::Tuple_2_Guid_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A63790, app::String*, ITupleInternal_ToString, (app::Tuple_2_Guid_Int32_ * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Tuple_2_Guid_Int32_
