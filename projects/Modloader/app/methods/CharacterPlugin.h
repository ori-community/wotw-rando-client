#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterPlugin.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/RecorderData.h>

namespace app::classes::CharacterPlugin {
    IL2CPP_REGISTER_METHOD(0x013139C0, void, Awake, (app::CharacterPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::CharacterPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x01313A80, void, RecordCycle, (app::CharacterPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x01313BD0, void, Exit, (app::CharacterPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01313C70, app::List_1_UnityEngine_Vector3_*, ExtractDataFromRecorder, (app::RecorderData * recorder_data))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CharacterPlugin * this_ptr))
} // namespace app::classes::CharacterPlugin
