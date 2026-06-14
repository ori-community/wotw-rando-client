#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/FtpStatus.h>
#include <Modloader/app/structs/FtpStatusCode__Enum.h>
#include <Modloader/app/structs/FtpWebRequest.h>
#include <Modloader/app/structs/FtpWebResponse.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebHeaderCollection.h>

namespace app::classes::System::Net::FtpWebResponse {
    IL2CPP_REGISTER_METHOD(
        0x01D37BE0,
        void,
        ctor_1,
        app::FtpWebResponse* this_ptr,
        app::FtpWebRequest* request,
        app::Uri* uri,
        app::String* method_1,
        bool keep_alive
    )
    IL2CPP_REGISTER_METHOD(
        0x01D37D00,
        void,
        ctor_2,
        app::FtpWebResponse* this_ptr,
        app::FtpWebRequest* request,
        app::Uri* uri,
        app::String* method_1,
        app::FtpStatusCode__Enum status_code,
        app::String* status_description
    )
    IL2CPP_REGISTER_METHOD(
        0x01D37E30,
        void,
        ctor_3,
        app::FtpWebResponse* this_ptr,
        app::FtpWebRequest* request,
        app::Uri* uri,
        app::String* method_1,
        app::FtpStatus* status
    )
    IL2CPP_REGISTER_METHOD(0x002FBBE0, int64_t, get_ContentLength, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D37E70, app::WebHeaderCollection*, get_Headers, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Uri*, get_ResponseUri, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DateTime, get_LastModified, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_LastModified, app::FtpWebResponse* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_BannerMessage, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_BannerMessage, app::FtpWebResponse* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_WelcomeMessage, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_WelcomeMessage, app::FtpWebResponse* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_ExitMessage, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_ExitMessage, app::FtpWebResponse* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00654950, app::FtpStatusCode__Enum, get_StatusCode, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_StatusCode, app::FtpWebResponse* this_ptr, app::FtpStatusCode__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsHeaders, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_StatusDescription, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_StatusDescription, app::FtpWebResponse* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01D37FB0, void, Close, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D380B0, app::Stream*, GetResponseStream, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Stream, app::FtpWebResponse* this_ptr, app::Stream* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Stream*, get_Stream, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D38290, void, UpdateStatus, app::FtpWebResponse* this_ptr, app::FtpStatus* status)
    IL2CPP_REGISTER_METHOD(0x01D382C0, void, CheckDisposed, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D383A0, bool, IsFinal, app::FtpWebResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D383B0, void, ctor_4, app::FtpWebResponse* this_ptr)
} // namespace app::classes::System::Net::FtpWebResponse
