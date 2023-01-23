#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NameInfo_1.h>
#include <Modloader/app/structs/ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Boxed.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags_.h>

namespace app::classes::System::Diagnostics::Tracing::ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo_ {
    IL2CPP_REGISTER_METHOD(0x00222EA0, app::NameInfo_1*, TryGet, (app::ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Boxed * this_ptr, app::KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags_ key))
    IL2CPP_REGISTER_METHODINFO(0x0476ED48, ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo__TryGet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00222EC0, app::NameInfo_1*, GetOrAdd, (app::ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Boxed * this_ptr, app::NameInfo_1* new_item))
    IL2CPP_REGISTER_METHODINFO(0x04767C58, ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo__GetOrAdd__MethodInfo)
} // namespace app::classes::System::Diagnostics::Tracing::ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo_
