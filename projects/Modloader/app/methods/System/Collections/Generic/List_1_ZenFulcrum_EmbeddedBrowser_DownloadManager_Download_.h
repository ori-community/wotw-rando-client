#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DownloadManager_Download.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_.h>

namespace app::classes::System::Collections::Generic::List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_ {
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_* this_ptr,
        app::DownloadManager_Download* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::DownloadManager_Download*,
        get_Item,
        app::List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_
