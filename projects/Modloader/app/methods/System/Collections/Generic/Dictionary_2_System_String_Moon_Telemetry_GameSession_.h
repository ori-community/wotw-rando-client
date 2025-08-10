#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_Moon_Telemetry_GameSession_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_String_Moon_Telemetry_GameSession_.h>
#include <Modloader/app/structs/GameSession.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Moon_Telemetry_GameSession_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_String_Moon_Telemetry_GameSession_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_Moon_Telemetry_GameSession_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_String_Moon_Telemetry_GameSession_,
        GetEnumerator,
        app::Dictionary_2_System_String_Moon_Telemetry_GameSession_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_String_Moon_Telemetry_GameSession_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_String_Moon_Telemetry_GameSession_* this_ptr,
        app::String* key,
        app::GameSession* value
    )
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::GameSession*, get_Item, app::Dictionary_2_System_String_Moon_Telemetry_GameSession_* this_ptr, app::String* key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Moon_Telemetry_GameSession_
