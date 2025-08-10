#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayFabHttp_SendScreenTimeEvents_d_19.h>

namespace app::classes::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__19 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::PlayFabHttp_SendScreenTimeEvents_d_19* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::PlayFabHttp_SendScreenTimeEvents_d_19* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0183CF70, bool, MoveNext, app::PlayFabHttp_SendScreenTimeEvents_d_19* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::PlayFabHttp_SendScreenTimeEvents_d_19* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0183D190, void, IEnumerator_Reset, app::PlayFabHttp_SendScreenTimeEvents_d_19* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::PlayFabHttp_SendScreenTimeEvents_d_19* this_ptr)
} // namespace app::classes::PlayFab::Internal::PlayFabHttp__SendScreenTimeEvents_d__19
