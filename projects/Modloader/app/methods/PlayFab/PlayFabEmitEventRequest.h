#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabEvent.h>
#include <Modloader/app/structs/PlayFabEmitEventRequest.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_.h>

namespace app::classes::PlayFab::PlayFabEmitEventRequest {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::PlayFabEvent*, get_Event, (app::PlayFabEmitEventRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Event, (app::PlayFabEmitEventRequest * this_ptr, app::PlayFabEvent* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_TitleId, (app::PlayFabEmitEventRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_TitleId, (app::PlayFabEmitEventRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_*, get_ResultPromise, (app::PlayFabEmitEventRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ResultPromise, (app::PlayFabEmitEventRequest * this_ptr, app::TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_* value))
    IL2CPP_REGISTER_METHOD(0x01A273C0, void, ctor, (app::PlayFabEmitEventRequest * this_ptr))
} // namespace app::classes::PlayFab::PlayFabEmitEventRequest
