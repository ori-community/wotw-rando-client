#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnalyticsSessionState__Enum.h>

namespace app::classes::UnityEngine::Analytics::AnalyticsSessionInfo {
    IL2CPP_REGISTER_METHOD(
        0x031C1830,
        void,
        CallSessionStateChanged,
        app::AnalyticsSessionState__Enum session_state,
        int64_t session_id,
        int64_t session_elapsed_time,
        bool session_changed
    )
}
