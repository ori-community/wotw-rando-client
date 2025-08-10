#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CloseExState__Enum.h>
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/FileWebRequest.h>
#include <Modloader/app/structs/FileWebResponse.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebHeaderCollection.h>

namespace app::classes::System::Net::FileWebResponse {
    IL2CPP_REGISTER_METHOD(
        0x01D2AEA0,
        void,
        ctor_1,
        app::FileWebResponse* this_ptr,
        app::FileWebRequest* request,
        app::Uri* uri,
        app::FileAccess__Enum access,
        bool async_hint
    )
    IL2CPP_REGISTER_METHOD(
        0x01D2B360,
        void,
        ctor_2,
        app::FileWebResponse* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
    IL2CPP_REGISTER_METHOD(
        0x01D28380,
        void,
        ISerializable_GetObjectData,
        app::FileWebResponse* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
    IL2CPP_REGISTER_METHOD(
        0x01D2B540,
        void,
        GetObjectData,
        app::FileWebResponse* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
    IL2CPP_REGISTER_METHOD(0x01D2B6A0, int64_t, get_ContentLength, app::FileWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D2B6C0, app::String*, get_ContentType, app::FileWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D2B750, app::WebHeaderCollection*, get_Headers, app::FileWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsHeaders, app::FileWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D2B770, app::Uri*, get_ResponseUri, app::FileWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D2B790, void, CheckDisposed, app::FileWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D2B870, void, Close, app::FileWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D2B900, void, ICloseEx_CloseEx, app::FileWebResponse* this_ptr, app::CloseExState__Enum close_state)
    IL2CPP_REGISTER_METHOD(0x01D2BA80, app::Stream*, GetResponseStream, app::FileWebResponse* this_ptr)
} // namespace app::classes::System::Net::FileWebResponse
