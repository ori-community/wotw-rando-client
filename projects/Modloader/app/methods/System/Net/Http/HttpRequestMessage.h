#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpContent.h>
#include <Modloader/app/structs/HttpRequestHeaders.h>
#include <Modloader/app/structs/HttpRequestMessage.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Version.h>

namespace app::classes::System::Net::Http::HttpRequestMessage {
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::HttpContent*, get_Content, app::HttpRequestMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D1C550, app::HttpRequestHeaders*, get_Headers, app::HttpRequestMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Uri*, get_RequestUri, app::HttpRequestMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D1C730, app::Version*, get_Version, app::HttpRequestMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020A4270, void, Dispose_1, app::HttpRequestMessage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D1C7E0, void, Dispose_2, app::HttpRequestMessage* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x02D1C810, app::String*, ToString, app::HttpRequestMessage* this_ptr)
} // namespace app::classes::System::Net::Http::HttpRequestMessage
