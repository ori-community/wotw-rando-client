#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ScreenshotHandle.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/PublishedFileId_t.h>
#include <Modloader/app/structs/EVRScreenshotType__Enum_1.h>

namespace app::classes::Steamworks::SteamScreenshots {
    IL2CPP_REGISTER_METHOD(0x02797530, app::ScreenshotHandle, WriteScreenshot, (app::Byte__Array * pub_r_g_b, uint32_t cub_r_g_b, int32_t n_width, int32_t n_height))
    IL2CPP_REGISTER_METHOD(0x027976A0, app::ScreenshotHandle, AddScreenshotToLibrary, (app::String * pch_filename, app::String* pch_thumbnail_filename, int32_t n_width, int32_t n_height))
    IL2CPP_REGISTER_METHOD(0x02797B20, void, TriggerScreenshot, ())
    IL2CPP_REGISTER_METHOD(0x02797BD0, void, HookScreenshots, (bool b_hook))
    IL2CPP_REGISTER_METHOD(0x02797C90, bool, SetLocation, (app::ScreenshotHandle h_screenshot, app::String* pch_location))
    IL2CPP_REGISTER_METHOD(0x02797F80, bool, TagUser, (app::ScreenshotHandle h_screenshot, app::CSteamID steam_i_d))
    IL2CPP_REGISTER_METHOD(0x02798050, bool, TagPublishedFile, (app::ScreenshotHandle h_screenshot, app::PublishedFileId_t un_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x02798120, bool, IsScreenshotsHooked, ())
    IL2CPP_REGISTER_METHOD(0x027981D0, app::ScreenshotHandle, AddVRScreenshotToLibrary, (app::EVRScreenshotType__Enum_1 e_type, app::String* pch_filename, app::String* pch_v_r_filename))
} // namespace app::classes::Steamworks::SteamScreenshots
