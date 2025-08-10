#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeathsPlugin.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/RecorderData.h>

namespace app::classes::DeathsPlugin {
    IL2CPP_REGISTER_METHOD(0x00DE0FB0, void, Awake, app::DeathsPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, app::DeathsPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, app::DeathsPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit, app::DeathsPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DE1140, void, OnPlayerDeath, app::DeathsPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DE1320, app::List_1_UnityEngine_Vector3_*, ExtractDataFromRecorder, app::RecorderData* recorder_data)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DeathsPlugin* this_ptr)
} // namespace app::classes::DeathsPlugin
