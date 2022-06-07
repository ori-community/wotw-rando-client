#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DeathsPlugin {
    IL2CPP_REGISTER_METHOD(0x00DE0FB0, void, Awake, (app::DeathsPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::DeathsPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (app::DeathsPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit, (app::DeathsPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DE1140, void, OnPlayerDeath, (app::DeathsPlugin * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04773870, DeathsPlugin_OnPlayerDeath__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DE1320, app::List_1_UnityEngine_Vector3_ *, ExtractDataFromRecorder, (app::RecorderData * recorder_data))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DeathsPlugin * this_ptr))
}
