#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_MoonGuid_WorldEventsRuntime_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_MoonGuid_WorldEventsRuntime_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/WorldEventsRuntime.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_WorldEventsRuntime_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_MoonGuid_WorldEventsRuntime_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_MoonGuid_WorldEventsRuntime_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_MoonGuid_WorldEventsRuntime_,
        GetEnumerator,
        app::Dictionary_2_MoonGuid_WorldEventsRuntime_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_MoonGuid_WorldEventsRuntime_* this_ptr,
        app::MoonGuid* key,
        app::WorldEventsRuntime* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_MoonGuid_WorldEventsRuntime_* this_ptr,
        app::MoonGuid* key,
        app::WorldEventsRuntime** value
    )
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_MoonGuid_WorldEventsRuntime_* this_ptr, app::MoonGuid* key, app::WorldEventsRuntime* value)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_MoonGuid_WorldEventsRuntime_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_WorldEventsRuntime_
