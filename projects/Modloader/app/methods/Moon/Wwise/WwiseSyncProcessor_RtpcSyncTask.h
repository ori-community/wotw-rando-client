#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_1_Single_.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundHostReference.h>
#include <Modloader/app/structs/WwiseSyncProcessor_RtpcSyncTask.h>

namespace app::classes::Moon::Wwise::WwiseSyncProcessor_RtpcSyncTask {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Func_1_Single_*, get_Getter, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Getter, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr, app::Func_1_Single_* value))
    IL2CPP_REGISTER_METHOD(0x01746A40, app::SoundHostReference, get_Host, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02071D00, void, set_Host, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr, app::SoundHostReference value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::RTPC*, get_Target, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Target, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr, app::RTPC* value))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_CachedValue, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_CachedValue, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_FrameQuantinization, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_FrameQuantinization, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x0051C040, bool, get_IsGlobal, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027196D0, bool, get_IsValid, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027197A0, bool, get_ShouldBeUpdatedThisFrame, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02719820, void, Reset, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02719860, void, Bind, (app::WwiseSyncProcessor_RtpcSyncTask * this_ptr, app::RTPC* target, app::Func_1_Single_* getter, app::SoundHostReference host, int32_t frame_quantinization))
} // namespace app::classes::Moon::Wwise::WwiseSyncProcessor_RtpcSyncTask
