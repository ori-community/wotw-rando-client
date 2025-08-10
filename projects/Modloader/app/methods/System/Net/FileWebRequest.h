#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/FileWebRequest.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/WebResponse.h>

namespace app::classes::System::Net::FileWebRequest {
    IL2CPP_REGISTER_METHOD(0x01D27E90, void, ctor_1, app::FileWebRequest* this_ptr, app::Uri* uri)
    IL2CPP_REGISTER_METHOD(
        0x01D280C0,
        void,
        ctor_2,
        app::FileWebRequest* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
    IL2CPP_REGISTER_METHOD(
        0x01D28380,
        void,
        ISerializable_GetObjectData,
        app::FileWebRequest* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
    IL2CPP_REGISTER_METHOD(
        0x01D283B0,
        void,
        GetObjectData,
        app::FileWebRequest* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
    IL2CPP_REGISTER_METHOD(0x01D285A0, bool, get_Aborted, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_ConnectionGroupName, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_ConnectionGroupName, app::FileWebRequest* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, int64_t, get_ContentLength, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D285B0, void, set_ContentLength, app::FileWebRequest* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01D28680, app::String*, get_ContentType, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D28720, void, set_ContentType, app::FileWebRequest* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::ICredentials*, get_Credentials, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Credentials, app::FileWebRequest* this_ptr, app::ICredentials* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::WebHeaderCollection*, get_Headers, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_Method, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D287D0, void, set_Method, app::FileWebRequest* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_PreAuthenticate, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C1CB0, void, set_PreAuthenticate, app::FileWebRequest* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::IWebProxy*, get_Proxy, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_Proxy, app::FileWebRequest* this_ptr, app::IWebProxy* value)
    IL2CPP_REGISTER_METHOD(0x007007F0, int32_t, get_Timeout, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D288D0, void, set_Timeout, app::FileWebRequest* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Uri*, get_RequestUri, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D289A0,
        app::IAsyncResult*,
        BeginGetRequestStream,
        app::FileWebRequest* this_ptr,
        app::AsyncCallback* callback,
        app::Object* state
    )
    IL2CPP_REGISTER_METHOD(0x01D28E20, app::IAsyncResult*, BeginGetResponse, app::FileWebRequest* this_ptr, app::AsyncCallback* callback, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x01D29170, bool, CanGetRequestStream, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D29220, app::Stream*, EndGetRequestStream, app::FileWebRequest* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01D294C0, app::WebResponse*, EndGetResponse, app::FileWebRequest* this_ptr, app::IAsyncResult* async_result)
    IL2CPP_REGISTER_METHOD(0x01D29760, app::Stream*, GetRequestStream, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D299D0, app::WebResponse*, GetResponse, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D29C50, void, GetRequestStreamCallback, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x01D2A080, void, GetResponseCallback, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x01D2A5E0, void, UnblockReader, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D2A6C0, bool, get_UseDefaultCredentials, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D2A700, void, set_UseDefaultCredentials, app::FileWebRequest* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01D2A740, void, Abort, app::FileWebRequest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D2AB10, void, cctor, )
} // namespace app::classes::System::Net::FileWebRequest
