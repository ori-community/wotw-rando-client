#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnityWebRequest.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DownloadHandler.h>
#include <Modloader/app/structs/UploadHandler.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/UnityWebRequest_UnityWebRequestError__Enum.h>
#include <Modloader/app/structs/UnityWebRequestAsyncOperation.h>
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/UnityWebRequest_UnityWebRequestMethod__Enum.h>
#include <Modloader/app/structs/CertificateHandler.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Encoding.h>

namespace app::classes::UnityEngine::Networking::UnityWebRequest {
    IL2CPP_REGISTER_METHOD(0x0317E420, void, ctor_1, (app::UnityWebRequest * this_ptr, app::String* url))
    IL2CPP_REGISTER_METHOD(0x0317E4A0, void, ctor_2, (app::UnityWebRequest * this_ptr, app::String* url, app::String* method_1))
    IL2CPP_REGISTER_METHOD(0x0317E530, void, ctor_3, (app::UnityWebRequest * this_ptr, app::String* url, app::String* method_1, app::DownloadHandler* download_handler, app::UploadHandler* upload_handler))
    IL2CPP_REGISTER_METHOD(0x0317E5F0, void, ctor_4, (app::UnityWebRequest * this_ptr, app::Uri* uri, app::String* method_1, app::DownloadHandler* download_handler, app::UploadHandler* upload_handler))
    IL2CPP_REGISTER_METHOD(0x0317E7B0, app::String*, GetWebErrorString, (app::UnityWebRequest_UnityWebRequestError__Enum err))
    IL2CPP_REGISTER_METHOD(0x0317E800, app::String*, GetHTTPStatusString, (int64_t response_code))
    IL2CPP_REGISTER_METHOD(0x0265F400, bool, get_disposeCertificateHandlerOnDispose, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_disposeCertificateHandlerOnDispose, (app::UnityWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02668810, bool, get_disposeDownloadHandlerOnDispose, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004379D0, void, set_disposeDownloadHandlerOnDispose, (app::UnityWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0317E850, bool, get_disposeUploadHandlerOnDispose, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004379F0, void, set_disposeUploadHandlerOnDispose, (app::UnityWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0317E860, void*, Create, ())
    IL2CPP_REGISTER_METHOD(0x0317E8B0, void, Release, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317E900, void, InternalDestroy, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317EA10, void, InternalSetDefaults, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317EA20, void, Finalize, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317EAF0, void, Dispose, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317EBE0, void, DisposeHandlers, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317EC40, app::UnityWebRequestAsyncOperation*, BeginWebRequest, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317EC90, app::AsyncOperation_1*, Send, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317EC90, app::UnityWebRequestAsyncOperation*, SendWebRequest, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317ECF0, void, Abort, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317ED40, app::UnityWebRequest_UnityWebRequestError__Enum, SetMethod, (app::UnityWebRequest * this_ptr, app::UnityWebRequest_UnityWebRequestMethod__Enum method_type))
    IL2CPP_REGISTER_METHOD(0x0317EDA0, void, InternalSetMethod, (app::UnityWebRequest * this_ptr, app::UnityWebRequest_UnityWebRequestMethod__Enum method_type))
    IL2CPP_REGISTER_METHODINFO(0x0474E810, UnityWebRequest_InternalSetMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0317EF20, app::UnityWebRequest_UnityWebRequestError__Enum, SetCustomMethod, (app::UnityWebRequest * this_ptr, app::String* custom_method_name))
    IL2CPP_REGISTER_METHOD(0x0317EF80, void, InternalSetCustomMethod, (app::UnityWebRequest * this_ptr, app::String* custom_method_name))
    IL2CPP_REGISTER_METHODINFO(0x0477E2B0, UnityWebRequest_InternalSetCustomMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0317F100, void, set_method, (app::UnityWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x047760F0, UnityWebRequest_set_method__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0317F430, app::UnityWebRequest_UnityWebRequestError__Enum, GetError, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317F480, app::String*, get_error, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317F7C0, app::String*, get_url, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317F810, void, set_url, (app::UnityWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0317F8E0, void, set_uri, (app::UnityWebRequest * this_ptr, app::Uri* value))
    IL2CPP_REGISTER_METHODINFO(0x04797640, UnityWebRequest_set_uri__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0317F7C0, app::String*, GetUrl, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317FA00, app::UnityWebRequest_UnityWebRequestError__Enum, SetUrl, (app::UnityWebRequest * this_ptr, app::String* url))
    IL2CPP_REGISTER_METHOD(0x0317FA60, void, InternalSetUrl, (app::UnityWebRequest * this_ptr, app::String* url))
    IL2CPP_REGISTER_METHODINFO(0x04745C68, UnityWebRequest_InternalSetUrl__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0317FBE0, int64_t, get_responseCode, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317FC30, bool, get_isModifiable, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317FC80, bool, get_isDone, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317FCD0, bool, get_isNetworkError, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317FD20, bool, get_isHttpError, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0317FD70, app::UnityWebRequest_UnityWebRequestError__Enum, SetChunked, (app::UnityWebRequest * this_ptr, bool chunked))
    IL2CPP_REGISTER_METHOD(0x0317FDD0, void, set_chunkedTransfer, (app::UnityWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04779F88, UnityWebRequest_set_chunkedTransfer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0317FF50, app::UnityWebRequest_UnityWebRequestError__Enum, InternalSetRequestHeader, (app::UnityWebRequest * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0317FFC0, void, SetRequestHeader, (app::UnityWebRequest * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0471AC78, UnityWebRequest_SetRequestHeader__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031801D0, app::UnityWebRequest_UnityWebRequestError__Enum, SetUploadHandler, (app::UnityWebRequest * this_ptr, app::UploadHandler* uh))
    IL2CPP_REGISTER_METHOD(0x01704A60, app::UploadHandler*, get_uploadHandler, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03180230, void, set_uploadHandler, (app::UnityWebRequest * this_ptr, app::UploadHandler* value))
    IL2CPP_REGISTER_METHODINFO(0x04759240, UnityWebRequest_set_uploadHandler__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031803C0, app::UnityWebRequest_UnityWebRequestError__Enum, SetDownloadHandler, (app::UnityWebRequest * this_ptr, app::DownloadHandler* dh))
    IL2CPP_REGISTER_METHOD(0x01F25880, app::DownloadHandler*, get_downloadHandler, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03180420, void, set_downloadHandler, (app::UnityWebRequest * this_ptr, app::DownloadHandler* value))
    IL2CPP_REGISTER_METHODINFO(0x04758E70, UnityWebRequest_set_downloadHandler__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F234C0, app::CertificateHandler*, get_certificateHandler, (app::UnityWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031805B0, app::UnityWebRequest*, Get_1, (app::String * uri))
    IL2CPP_REGISTER_METHOD(0x03180820, app::UnityWebRequest*, Get_2, (app::Uri * uri))
    IL2CPP_REGISTER_METHOD(0x03180A90, app::UnityWebRequest*, Put, (app::String * uri, app::Byte__Array* body_data))
    IL2CPP_REGISTER_METHOD(0x03180DD0, app::String*, UnEscapeURL_1, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x03180F30, app::String*, UnEscapeURL_2, (app::String * s, app::Encoding* e))
} // namespace app::classes::UnityEngine::Networking::UnityWebRequest
