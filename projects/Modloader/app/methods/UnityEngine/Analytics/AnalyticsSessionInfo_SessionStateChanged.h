#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnalyticsSessionInfo_SessionStateChanged.h>
#include <Modloader/app/structs/AnalyticsSessionState__Enum.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::AnalyticsSessionInfo_SessionStateChanged* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x031C1900,
        void,
        Invoke,
        app::AnalyticsSessionInfo_SessionStateChanged* this_ptr,
        app::AnalyticsSessionState__Enum session_state,
        int64_t session_id,
        int64_t session_elapsed_time,
        bool session_changed
    )
    IL2CPP_REGISTER_METHOD(
        0x031C1D10,
        app::IAsyncResult*,
        BeginInvoke,
        app::AnalyticsSessionInfo_SessionStateChanged* this_ptr,
        app::AnalyticsSessionState__Enum session_state,
        int64_t session_id,
        int64_t session_elapsed_time,
        bool session_changed,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::AnalyticsSessionInfo_SessionStateChanged* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged
