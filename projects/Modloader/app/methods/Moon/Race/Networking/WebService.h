#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReplayData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/LeaderboadData.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::Moon::Race::Networking::WebService {
    IL2CPP_REGISTER_METHOD(0x00C454F0, app::ReplayData*, GetReplay, (app::String * race_name, app::String* player_id))
    IL2CPP_REGISTER_METHOD(0x00C458D0, app::LeaderboadData*, GetLeaderboad, (app::String * race_name))
    IL2CPP_REGISTER_METHOD(0x00C45CA0, void, PostReplay, (app::String * race_name, app::ReplayData* replay))
    IL2CPP_REGISTER_METHOD(0x00C45FB0, void, DownloadData_1, (app::String * site_id, app::LeaderboadData* data))
    IL2CPP_REGISTER_METHOD(0x00C46080, void, DownloadData_2, (app::String * site_id, app::String* player_id, app::ReplayData* data))
    IL2CPP_REGISTER_METHOD(0x00C46200, void, UploadData, (app::String * site_id, app::ReplayData* data))
    IL2CPP_REGISTER_METHOD(0x00C46370, void, CompressData, (app::ReplayData * data))
    IL2CPP_REGISTER_METHOD(0x00C46430, void, DecompressData, (app::ReplayData * data))
    IL2CPP_REGISTER_METHOD(0x00C464F0, void, CopyTo, (app::Stream * src, app::Stream* dest))
    IL2CPP_REGISTER_METHOD(0x00C46600, app::Byte__Array*, Zip, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x00C46AE0, app::String*, Unzip, (app::Byte__Array * bytes))
} // namespace app::classes::Moon::Race::Networking::WebService
