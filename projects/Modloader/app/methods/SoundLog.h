#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundLog.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SoundLog {
    IL2CPP_REGISTER_METHOD(0x00EE9DE0, void, AddSoundCall, app::String* clip_name, app::String* provider_name)
    IL2CPP_REGISTER_METHOD(0x00EEA360, void, OnGUI, app::SoundLog* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEA720, void, AddFilter, app::String* filter)
    IL2CPP_REGISTER_METHOD(0x00EEA920, void, ResetFilters, )
    IL2CPP_REGISTER_METHOD(0x00EEAAB0, void, ResetLog, )
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SoundLog* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEAB60, void, cctor, )
} // namespace app::classes::SoundLog
