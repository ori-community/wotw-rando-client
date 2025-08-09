#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostCharacterPlugin.h>
#include <Modloader/app/structs/GhostRecorder_GhostPluginRecordingType__Enum.h>

namespace app::classes::GhostCharacterPlugin {
    IL2CPP_REGISTER_METHOD(0x00E17FF0, void, PlayCycle, app::GhostCharacterPlugin* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x00E187A0, void, RecordCycle, app::GhostCharacterPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, app::GhostCharacterPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E188D0, void, ctor, app::GhostCharacterPlugin* this_ptr)
} // namespace app::classes::GhostCharacterPlugin
