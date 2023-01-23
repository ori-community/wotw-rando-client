#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EventProvider_SessionInfo.h>
#include <Modloader/app/structs/Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::EventProvider_SessionInfo, get_Item1, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711F60, Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean__get_Item1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Item2, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478D338, Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean__get_Item2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A5F4B0, void, ctor, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr, app::EventProvider_SessionInfo item1, bool item2))
    IL2CPP_REGISTER_METHOD(0x02A62220, bool, Equals, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A62300, bool, IStructuralEquatable_Equals, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A62510, int32_t, IComparable_CompareTo, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A625F0, int32_t, IStructuralComparable_CompareTo, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04778588, Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A62870, int32_t, GetHashCode, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A62940, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A62A80, app::String*, ToString, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A62C00, app::String*, ITupleInternal_ToString, (app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_ * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean_
