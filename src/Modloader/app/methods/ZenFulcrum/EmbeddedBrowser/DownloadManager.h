#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/DownloadManager.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/JSONNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::DownloadManager {
    IL2CPP_REGISTER_METHOD(0x01DD70D0, void, Awake, app::DownloadManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD71D0, void, ManageDownloads, app::DownloadManager* this_ptr, app::Browser* browser)
    IL2CPP_REGISTER_METHOD(
        0x01DD75B0,
        void,
        HandleDownloadStarted,
        app::DownloadManager* this_ptr,
        app::Browser* browser,
        int32_t download_id,
        app::JSONNode* info
    )
    IL2CPP_REGISTER_METHOD(
        0x01DD7D70,
        void,
        HandleDownloadStatus,
        app::DownloadManager* this_ptr,
        app::Browser* browser,
        int32_t download_id,
        app::JSONNode* info
    )
    IL2CPP_REGISTER_METHOD(0x01DD80B0, void, Update, app::DownloadManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD8190, void, PauseAll, app::DownloadManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD8390, void, ResumeAll, app::DownloadManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD8590, void, CancelAll, app::DownloadManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD8790, void, ClearAll, app::DownloadManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD8840, app::String*, get_Status, app::DownloadManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD8E50, app::String*, GetUserDownloadFolder, )
    IL2CPP_REGISTER_METHOD(0x01DD9220, int32_t, SHGetKnownFolderPath, app::Guid rfid, uint32_t dw_flags, void* h_token, void** ppsz_path)
    IL2CPP_REGISTER_METHOD(0x01DD92E0, void, ctor, app::DownloadManager* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::DownloadManager
