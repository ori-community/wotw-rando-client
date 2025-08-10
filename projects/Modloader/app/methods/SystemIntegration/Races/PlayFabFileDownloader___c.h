#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFileMetadata.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_PlayFab_DataModels_GetFileMetadata_.h>
#include <Modloader/app/structs/PlayFabFileDownloader_c.h>

namespace app::classes::SystemIntegration::Races::PlayFabFileDownloader___c {
    IL2CPP_REGISTER_METHOD(0x00522690, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayFabFileDownloader_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x005227D0,
        app::GetFileMetadata*,
        _OnGetFileMeta_b__7_0,
        app::PlayFabFileDownloader_c* this_ptr,
        app::KeyValuePair_2_System_String_PlayFab_DataModels_GetFileMetadata_ o
    )
} // namespace app::classes::SystemIntegration::Races::PlayFabFileDownloader___c
