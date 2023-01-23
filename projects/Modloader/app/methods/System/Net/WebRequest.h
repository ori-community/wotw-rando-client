#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IWebRequestCreate.h>
#include <Modloader/app/structs/WebRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimerThread_Queue.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/RequestCachePolicy.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/WebResponse.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Task_1_System_IO_Stream_.h>
#include <Modloader/app/structs/Task_1_System_Net_WebResponse_.h>
#include <Modloader/app/structs/WindowsIdentity.h>
#include <Modloader/app/structs/RequestCacheProtocol.h>
#include <Modloader/app/structs/AuthenticationLevel__Enum.h>
#include <Modloader/app/structs/TokenImpersonationLevel__Enum.h>

namespace app::classes::System::Net::WebRequest {
    IL2CPP_REGISTER_METHOD(0x021B35D0, app::IWebRequestCreate*, get_CreatorInstance, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterPortableWebRequestCreator, (app::IWebRequestCreate * creator))
    IL2CPP_REGISTER_METHOD(0x021B3670, app::Object*, get_InternalSyncObject, ())
    IL2CPP_REGISTER_METHOD(0x021B3850, app::TimerThread_Queue*, get_DefaultTimerQueue, ())
    IL2CPP_REGISTER_METHOD(0x021B38F0, app::WebRequest*, Create_1, (app::Uri * request_uri, bool use_uri_base))
    IL2CPP_REGISTER_METHODINFO(0x047703B0, WebRequest_Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B3C40, app::WebRequest*, Create_2, (app::String * request_uri_string))
    IL2CPP_REGISTER_METHODINFO(0x04760D80, WebRequest_Create_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B3DF0, app::WebRequest*, Create_3, (app::Uri * request_uri))
    IL2CPP_REGISTER_METHODINFO(0x0470DD00, WebRequest_Create_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B3EE0, app::WebRequest*, CreateDefault, (app::Uri * request_uri))
    IL2CPP_REGISTER_METHODINFO(0x04785218, WebRequest_CreateDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B3FD0, app::HttpWebRequest*, CreateHttp_1, (app::String * request_uri_string))
    IL2CPP_REGISTER_METHODINFO(0x0478BA30, WebRequest_CreateHttp__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B4180, app::HttpWebRequest*, CreateHttp_2, (app::Uri * request_uri))
    IL2CPP_REGISTER_METHODINFO(0x04793C88, WebRequest_CreateHttp_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B4470, bool, RegisterPrefix, (app::String * prefix, app::IWebRequestCreate* creator))
    IL2CPP_REGISTER_METHODINFO(0x04700E18, WebRequest_RegisterPrefix__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B4B80, app::ArrayList*, get_PrefixList, ())
    IL2CPP_REGISTER_METHOD(0x021B4DC0, void, set_PrefixList, (app::ArrayList * value))
    IL2CPP_REGISTER_METHOD(0x021B4E70, app::ArrayList*, PopulatePrefixList, ())
    IL2CPP_REGISTER_METHOD(0x021B5580, void, ctor_1, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::WebRequest * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01D28380, void, ISerializable_GetObjectData, (app::WebRequest * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetObjectData, (app::WebRequest * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x021B5590, app::RequestCachePolicy*, get_DefaultCachePolicy, ())
    IL2CPP_REGISTER_METHOD(0x021B5650, void, set_DefaultCachePolicy, (app::RequestCachePolicy * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::RequestCachePolicy*, get_CachePolicy, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021B5810, void, set_CachePolicy, (app::WebRequest * this_ptr, app::RequestCachePolicy* value))
    IL2CPP_REGISTER_METHOD(0x021B5820, void, InternalSetCachePolicy, (app::WebRequest * this_ptr, app::RequestCachePolicy* policy))
    IL2CPP_REGISTER_METHOD(0x021B5910, app::String*, get_Method, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047428B8, WebRequest_get_Method__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5950, void, set_Method, (app::WebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04741338, WebRequest_set_Method__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5990, app::Uri*, get_RequestUri, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475B280, WebRequest_get_RequestUri__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B59D0, app::String*, get_ConnectionGroupName, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047490D0, WebRequest_get_ConnectionGroupName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5A10, void, set_ConnectionGroupName, (app::WebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x047510A8, WebRequest_set_ConnectionGroupName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5A50, app::WebHeaderCollection*, get_Headers, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D938, WebRequest_get_Headers__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5A90, void, set_Headers, (app::WebRequest * this_ptr, app::WebHeaderCollection* value))
    IL2CPP_REGISTER_METHODINFO(0x04731AA0, WebRequest_set_Headers__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5AD0, int64_t, get_ContentLength, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793AE0, WebRequest_get_ContentLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5B10, void, set_ContentLength, (app::WebRequest * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x0471CB88, WebRequest_set_ContentLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5B50, app::String*, get_ContentType, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A8D0, WebRequest_get_ContentType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5B90, void, set_ContentType, (app::WebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04715550, WebRequest_set_ContentType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5BD0, app::ICredentials*, get_Credentials, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047449E0, WebRequest_get_Credentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5C10, void, set_Credentials, (app::WebRequest * this_ptr, app::ICredentials* value))
    IL2CPP_REGISTER_METHODINFO(0x04757088, WebRequest_set_Credentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5C50, bool, get_UseDefaultCredentials, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472E2C8, WebRequest_get_UseDefaultCredentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5C90, void, set_UseDefaultCredentials, (app::WebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0471E9B0, WebRequest_set_UseDefaultCredentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5CD0, app::IWebProxy*, get_Proxy, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701E88, WebRequest_get_Proxy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5D10, void, set_Proxy, (app::WebRequest * this_ptr, app::IWebProxy* value))
    IL2CPP_REGISTER_METHODINFO(0x04789248, WebRequest_set_Proxy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5D50, bool, get_PreAuthenticate, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470D5A0, WebRequest_get_PreAuthenticate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5D90, void, set_PreAuthenticate, (app::WebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04737C38, WebRequest_set_PreAuthenticate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5DD0, int32_t, get_Timeout, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047153C8, WebRequest_get_Timeout__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5E10, void, set_Timeout, (app::WebRequest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04757A30, WebRequest_set_Timeout__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5E50, app::Stream*, GetRequestStream, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D8D8, WebRequest_GetRequestStream__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5E90, app::WebResponse*, GetResponse, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797678, WebRequest_GetResponse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5ED0, app::IAsyncResult*, BeginGetResponse, (app::WebRequest * this_ptr, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x047328C0, WebRequest_BeginGetResponse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5F10, app::WebResponse*, EndGetResponse, (app::WebRequest * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHODINFO(0x0477C2D8, WebRequest_EndGetResponse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5F50, app::IAsyncResult*, BeginGetRequestStream, (app::WebRequest * this_ptr, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x0477B810, WebRequest_BeginGetRequestStream__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5F90, app::Stream*, EndGetRequestStream, (app::WebRequest * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHODINFO(0x04771640, WebRequest_EndGetRequestStream__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B5FD0, app::Task_1_System_IO_Stream_*, GetRequestStreamAsync, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021B6400, app::Task_1_System_Net_WebResponse_*, GetResponseAsync, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021B6830, app::WindowsIdentity*, SafeCaptureIdenity, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021B68C0, void, Abort, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E850, WebRequest_Abort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::RequestCacheProtocol*, get_CacheProtocol, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_CacheProtocol, (app::WebRequest * this_ptr, app::RequestCacheProtocol* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::AuthenticationLevel__Enum, get_AuthenticationLevel, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_AuthenticationLevel, (app::WebRequest * this_ptr, app::AuthenticationLevel__Enum value))
    IL2CPP_REGISTER_METHOD(0x0052A010, app::TokenImpersonationLevel__Enum, get_ImpersonationLevel, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_ImpersonationLevel, (app::WebRequest * this_ptr, app::TokenImpersonationLevel__Enum value))
    IL2CPP_REGISTER_METHOD(0x021B6900, void, RequestCallback, (app::WebRequest * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x04793EA8, WebRequest_RequestCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B6940, app::IWebProxy*, get_InternalDefaultWebProxy, ())
    IL2CPP_REGISTER_METHOD(0x021B6BC0, void, set_InternalDefaultWebProxy, (app::IWebProxy * value))
    IL2CPP_REGISTER_METHOD(0x021B6DF0, app::IWebProxy*, get_DefaultWebProxy, ())
    IL2CPP_REGISTER_METHOD(0x021B6E80, void, set_DefaultWebProxy, (app::IWebProxy * value))
    IL2CPP_REGISTER_METHOD(0x021B6F20, app::IWebProxy*, GetSystemWebProxy, ())
    IL2CPP_REGISTER_METHOD(0x02018EF0, app::IWebProxy*, InternalGetSystemWebProxy, ())
    IL2CPP_REGISTER_METHOD(0x021B6FB0, void, SetupCacheProtocol, (app::WebRequest * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x021B7170, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x021B72F0, app::Task_1_System_IO_Stream_*, _GetRequestStreamAsync_b__78_0, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782518, WebRequest__GetRequestStreamAsync_b__78_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021B75A0, app::Task_1_System_Net_WebResponse_*, _GetResponseAsync_b__79_0, (app::WebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047159A8, WebRequest__GetResponseAsync_b__79_0__MethodInfo)
} // namespace app::classes::System::Net::WebRequest
