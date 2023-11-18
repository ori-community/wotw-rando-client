#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/RequestCachePolicy.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task_1_System_IO_Stream_.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlDownloadManager.h>

namespace app::classes::System::Xml::XmlDownloadManager {
    IL2CPP_REGISTER_METHOD(0x01DABC20, app::Stream*, GetStream, (app::XmlDownloadManager * this_ptr, app::Uri* uri, app::ICredentials* credentials, app::IWebProxy* proxy, app::RequestCachePolicy* cache_policy))
    IL2CPP_REGISTER_METHOD(0x01DABE30, app::Stream*, GetNonFileStream, (app::XmlDownloadManager * this_ptr, app::Uri* uri, app::ICredentials* credentials, app::IWebProxy* proxy, app::RequestCachePolicy* cache_policy))
    IL2CPP_REGISTER_METHOD(0x01DAC5D0, void, Remove, (app::XmlDownloadManager * this_ptr, app::String* host))
    IL2CPP_REGISTER_METHOD(0x01DAC7A0, app::Task_1_System_IO_Stream_*, GetStreamAsync, (app::XmlDownloadManager * this_ptr, app::Uri* uri, app::ICredentials* credentials, app::IWebProxy* proxy, app::RequestCachePolicy* cache_policy))
    IL2CPP_REGISTER_METHOD(0x01DACB50, app::Task_1_System_IO_Stream_*, GetNonFileStreamAsync, (app::XmlDownloadManager * this_ptr, app::Uri* uri, app::ICredentials* credentials, app::IWebProxy* proxy, app::RequestCachePolicy* cache_policy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlDownloadManager * this_ptr))
} // namespace app::classes::System::Xml::XmlDownloadManager
