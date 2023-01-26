#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabUnityHttp_Post_d_20.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::PlayFab::Internal::PlayFabUnityHttp__Post_d__20 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::PlayFabUnityHttp_Post_d_20 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::PlayFabUnityHttp_Post_d_20 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0183EA90, bool, MoveNext, (app::PlayFabUnityHttp_Post_d_20 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::PlayFabUnityHttp_Post_d_20 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0183F730, void, IEnumerator_Reset, (app::PlayFabUnityHttp_Post_d_20 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::PlayFabUnityHttp_Post_d_20 * this_ptr))
} // namespace app::classes::PlayFab::Internal::PlayFabUnityHttp__Post_d__20
