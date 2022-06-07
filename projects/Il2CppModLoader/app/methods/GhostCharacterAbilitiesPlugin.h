#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GhostCharacterAbilitiesPlugin {
    IL2CPP_REGISTER_METHOD(0x00E166C0, void, PlayCycle, (app::GhostCharacterAbilitiesPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00E169A0, void, RecordCycle, (app::GhostCharacterAbilitiesPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostCharacterAbilitiesPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::GhostCharacterAbilitiesPlugin * this_ptr))
}
