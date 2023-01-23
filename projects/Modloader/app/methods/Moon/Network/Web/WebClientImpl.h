#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WebClientImpl.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Method__Enum.h>
#include <Modloader/app/structs/Action_1_Moon_Network_Web_WebResponse_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UploadProgressChangedEventArgs.h>
#include <Modloader/app/structs/DownloadProgressChangedEventArgs.h>
#include <Modloader/app/structs/UploadDataCompletedEventArgs.h>
#include <Modloader/app/structs/DownloadDataCompletedEventArgs.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509Chain.h>
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>

namespace app::classes::Moon::Network::Web::WebClientImpl {
    IL2CPP_REGISTER_METHOD(0x02E98710, void, ctor, (app::WebClientImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E98950, void, AddHeader, (app::WebClientImpl * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, SetData, (app::WebClientImpl * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x02E989F0, void, AddParam, (app::WebClientImpl * this_ptr, app::String* key, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetURL, (app::WebClientImpl * this_ptr, app::String* url))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasTimeout, (app::WebClientImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E98AB0, float, get_Timeout, (app::WebClientImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E98AC0, void, SteamTest, (app::WebClientImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E98D30, void, Send, (app::WebClientImpl * this_ptr, app::Method__Enum methods, app::Action_1_Moon_Network_Web_WebResponse_* callback))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, M_client_UploadProgressChanged, (app::WebClientImpl * this_ptr, app::Object* sender, app::UploadProgressChangedEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04718098, WebClientImpl_M_client_UploadProgressChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, M_client_DownloadProgressChanged, (app::WebClientImpl * this_ptr, app::Object* sender, app::DownloadProgressChangedEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04754600, WebClientImpl_M_client_DownloadProgressChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E99520, app::String*, ParamsString, (app::WebClientImpl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E996F0, void, OnUploadDataCompleted, (app::WebClientImpl * this_ptr, app::Object* sender, app::UploadDataCompletedEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04703778, WebClientImpl_OnUploadDataCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E996F0, void, OnDownloadDataCompleted, (app::WebClientImpl * this_ptr, app::Object* sender, app::DownloadDataCompletedEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04754FD8, WebClientImpl_OnDownloadDataCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E99750, void, Finish, (app::WebClientImpl * this_ptr, app::Byte__Array* result, app::Exception* e))
    IL2CPP_REGISTER_METHOD(0x02E998D0, void, Init, ())
    IL2CPP_REGISTER_METHOD(0x02E99AB0, bool, OnRemoteCertificateValidation, (app::Object * sender, app::X509Certificate_1* certificate, app::X509Chain* chain, app::SslPolicyErrors__Enum ssl_policy_errors))
    IL2CPP_REGISTER_METHODINFO(0x04726DD8, WebClientImpl_OnRemoteCertificateValidation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::Moon::Network::Web::WebClientImpl
