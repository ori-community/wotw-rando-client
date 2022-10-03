#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayFab::PlayFabEmitEventResponse {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::PlayFabEvent*, get_Event, (app::PlayFabEmitEventResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Event, (app::PlayFabEmitEventResponse * this_ptr, app::PlayFabEvent* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::EmitEventResult__Enum, get_EmitEventResult, (app::PlayFabEmitEventResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_EmitEventResult, (app::PlayFabEmitEventResponse * this_ptr, app::EmitEventResult__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::PlayFabError*, get_PlayFabError, (app::PlayFabEmitEventResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_PlayFabError, (app::PlayFabEmitEventResponse * this_ptr, app::PlayFabError* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::WriteEventsResponse*, get_WriteEventsResponse, (app::PlayFabEmitEventResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_WriteEventsResponse, (app::PlayFabEmitEventResponse * this_ptr, app::WriteEventsResponse* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IList_1_PlayFab_IPlayFabEmitEventRequest_*, get_Batch, (app::PlayFabEmitEventResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Batch, (app::PlayFabEmitEventResponse * this_ptr, app::IList_1_PlayFab_IPlayFabEmitEventRequest_* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, uint64_t, get_BatchNumber, (app::PlayFabEmitEventResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_BatchNumber, (app::PlayFabEmitEventResponse * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabEmitEventResponse * this_ptr))
} // namespace app::classes::PlayFab::PlayFabEmitEventResponse
