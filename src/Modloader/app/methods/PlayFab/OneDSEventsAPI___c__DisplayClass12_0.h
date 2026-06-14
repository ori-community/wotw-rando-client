#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OneDSEventsAPI_c_DisplayClass12_0.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/TelemetryIngestionConfigResponse.h>

namespace app::classes::PlayFab::OneDSEventsAPI___c__DisplayClass12_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OneDSEventsAPI_c_DisplayClass12_0* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01854720, void, _GetTelemetryIngestionConfigAsync_b__0, app::OneDSEventsAPI_c_DisplayClass12_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x018549F0,
        void,
        _GetTelemetryIngestionConfigAsync_b__2,
        app::OneDSEventsAPI_c_DisplayClass12_0* this_ptr,
        app::TelemetryIngestionConfigResponse* callback
    )
    IL2CPP_REGISTER_METHOD(0x01854B60, void, _GetTelemetryIngestionConfigAsync_b__3, app::OneDSEventsAPI_c_DisplayClass12_0* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x01854CD0, bool, _GetTelemetryIngestionConfigAsync_b__1, app::OneDSEventsAPI_c_DisplayClass12_0* this_ptr)
} // namespace app::classes::PlayFab::OneDSEventsAPI___c__DisplayClass12_0
