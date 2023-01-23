#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PlayFabUnityHttp.h>
#include <Modloader/app/structs/Action_1_Byte_.h>
#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/CallRequestContainer.h>

namespace app::classes::PlayFab::Internal::PlayFabUnityHttp {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_AuthKey, (app::PlayFabUnityHttp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_AuthKey, (app::PlayFabUnityHttp * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_EntityToken, (app::PlayFabUnityHttp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_EntityToken, (app::PlayFabUnityHttp * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsInitialized, (app::PlayFabUnityHttp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, Initialize, (app::PlayFabUnityHttp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::PlayFabUnityHttp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::PlayFabUnityHttp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0183D730, void, SimpleGetCall, (app::PlayFabUnityHttp * this_ptr, app::String* full_url, app::Action_1_Byte_* success_callback, app::Action_1_String_* error_callback))
    IL2CPP_REGISTER_METHOD(0x0183D890, void, SimplePutCall, (app::PlayFabUnityHttp * this_ptr, app::String* full_url, app::Byte__Array* payload, app::Action_1_Byte_* success_callback, app::Action_1_String_* error_callback))
    IL2CPP_REGISTER_METHOD(0x0183DA00, void, SimplePostCall, (app::PlayFabUnityHttp * this_ptr, app::String* full_url, app::Byte__Array* payload, app::Action_1_Byte_* success_callback, app::Action_1_String_* error_callback))
    IL2CPP_REGISTER_METHOD(0x0183DB70, app::IEnumerator*, SimpleCallCoroutine, (app::String * method_1, app::String* full_url, app::Byte__Array* payload, app::Action_1_Byte_* success_callback, app::Action_1_String_* error_callback))
    IL2CPP_REGISTER_METHOD(0x0183DCF0, void, MakeApiCall, (app::PlayFabUnityHttp * this_ptr, app::Object* req_container_obj))
    IL2CPP_REGISTER_METHOD(0x0183E460, app::IEnumerator*, Post, (app::PlayFabUnityHttp * this_ptr, app::CallRequestContainer* req_container))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, GetPendingMessages, (app::PlayFabUnityHttp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0183E5C0, void, OnResponse, (app::PlayFabUnityHttp * this_ptr, app::String* response, app::CallRequestContainer* req_container))
    IL2CPP_REGISTER_METHOD(0x0183E980, void, OnError, (app::PlayFabUnityHttp * this_ptr, app::String* error, app::CallRequestContainer* req_container))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabUnityHttp * this_ptr))
} // namespace app::classes::PlayFab::Internal::PlayFabUnityHttp
