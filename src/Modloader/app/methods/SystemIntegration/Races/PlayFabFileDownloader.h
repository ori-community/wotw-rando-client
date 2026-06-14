#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/GetFileMetadata.h>
#include <Modloader/app/structs/GetFilesResponse.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabFileDownloader.h>
#include <Modloader/app/structs/RaceDataLeaderBoardType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>

namespace app::classes::SystemIntegration::Races::PlayFabFileDownloader {
    IL2CPP_REGISTER_METHOD(
        0x00521550,
        void,
        ctor,
        app::PlayFabFileDownloader* this_ptr,
        app::String* owner_id,
        app::String* file_name,
        app::RaceDataLeaderBoardType__Enum data,
        int32_t max_size
    )
    IL2CPP_REGISTER_METHOD(0x00521570, app::Task_1_System_Byte_*, Perform, app::PlayFabFileDownloader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00521B10, void, OnGetFileMeta, app::PlayFabFileDownloader* this_ptr, app::GetFilesResponse* result)
    IL2CPP_REGISTER_METHOD(0x00521E40, void, GetActualFile, app::PlayFabFileDownloader* this_ptr, app::GetFileMetadata* file_data)
    IL2CPP_REGISTER_METHOD(0x005221F0, void, FileDownloadComplete, app::PlayFabFileDownloader* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x00522290, void, OnError, app::PlayFabFileDownloader* this_ptr, app::PlayFabError* obj)
    IL2CPP_REGISTER_METHOD(0x005223D0, bool, _OnGetFileMeta_b__7_1, app::PlayFabFileDownloader* this_ptr, app::GetFileMetadata* o)
    IL2CPP_REGISTER_METHOD(0x00522420, void, _GetActualFile_b__8_0, app::PlayFabFileDownloader* this_ptr, app::String* err)
} // namespace app::classes::SystemIntegration::Races::PlayFabFileDownloader
