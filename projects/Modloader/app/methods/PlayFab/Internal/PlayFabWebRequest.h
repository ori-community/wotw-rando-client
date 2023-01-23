#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RemoteCertificateValidationCallback.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PlayFabWebRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>
#include <Modloader/app/structs/Action_1_Byte_.h>
#include <Modloader/app/structs/Action_1_String_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CallRequestContainer.h>
#include <Modloader/app/structs/WebResponse.h>

namespace app::classes::PlayFab::Internal::PlayFabWebRequest {
    IL2CPP_REGISTER_METHOD(0x01841290, void, SkipCertificateValidation, ())
    IL2CPP_REGISTER_METHOD(0x01841440, void, set_CustomCertValidationHook, (app::RemoteCertificateValidationCallback * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_AuthKey, (app::PlayFabWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_AuthKey, (app::PlayFabWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_EntityToken, (app::PlayFabWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_EntityToken, (app::PlayFabWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsInitialized, (app::PlayFabWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01841520, void, Initialize, (app::PlayFabWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01841790, void, OnDestroy, (app::PlayFabWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01841BE0, void, SetupCertificates, (app::PlayFabWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, AcceptAllCertifications, (app::Object * sender, app::X509Certificate_1* certificate, app::X509Chain* chain, app::SslPolicyErrors__Enum ssl_policy_errors))
    IL2CPP_REGISTER_METHODINFO(0x04743A28, PlayFabWebRequest_AcceptAllCertifications__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01841D70, void, SimpleGetCall, (app::PlayFabWebRequest * this_ptr, app::String* full_url, app::Action_1_Byte_* success_callback, app::Action_1_String_* error_callback))
    IL2CPP_REGISTER_METHOD(0x01842090, void, SimplePutCall, (app::PlayFabWebRequest * this_ptr, app::String* full_url, app::Byte__Array* payload, app::Action_1_Byte_* success_callback, app::Action_1_String_* error_callback))
    IL2CPP_REGISTER_METHOD(0x018423C0, void, SimplePostCall, (app::PlayFabWebRequest * this_ptr, app::String* full_url, app::Byte__Array* payload, app::Action_1_Byte_* success_callback, app::Action_1_String_* error_callback))
    IL2CPP_REGISTER_METHOD(0x018426F0, void, SimpleHttpsWorker, (app::PlayFabWebRequest * this_ptr, app::String* http_method, app::String* full_url, app::Byte__Array* payload, app::Action_1_Byte_* success_callback, app::Action_1_String_* error_callback))
    IL2CPP_REGISTER_METHODINFO(0x0471CE38, PlayFabWebRequest_SimpleHttpsWorker__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01842DE0, void, MakeApiCall, (app::PlayFabWebRequest * this_ptr, app::Object* req_container_obj))
    IL2CPP_REGISTER_METHOD(0x01843020, void, ActivateThreadWorker, ())
    IL2CPP_REGISTER_METHOD(0x018433D0, void, WorkerThreadMainLoop, ())
    IL2CPP_REGISTER_METHODINFO(0x04746000, PlayFabWebRequest_WorkerThreadMainLoop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01843CE0, void, Post, (app::CallRequestContainer * req_container))
    IL2CPP_REGISTER_METHOD(0x01844590, void, ProcessHttpResponse, (app::CallRequestContainer * req_container))
    IL2CPP_REGISTER_METHOD(0x018448C0, void, QueueRequestError, (app::CallRequestContainer * req_container))
    IL2CPP_REGISTER_METHOD(0x01844CA0, void, ProcessJsonResponse, (app::CallRequestContainer * req_container))
    IL2CPP_REGISTER_METHOD(0x018455E0, void, Update, (app::PlayFabWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018458B0, app::String*, ResponseToString, (app::WebResponse * web_response))
    IL2CPP_REGISTER_METHOD(0x01845E10, int32_t, GetPendingMessages, (app::PlayFabWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01846110, void, cctor, ())
} // namespace app::classes::PlayFab::Internal::PlayFabWebRequest
