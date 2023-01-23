#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GhostCharacterStatesPlugin.h>
#include <Modloader/app/structs/GhostRecorder_GhostPluginRecordingType__Enum.h>

namespace app::classes::GhostCharacterStatesPlugin {
    IL2CPP_REGISTER_METHOD(0x00E19560, void, PlayCycle, (app::GhostCharacterStatesPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00E198B0, void, RecordCycle, (app::GhostCharacterStatesPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostCharacterStatesPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::GhostCharacterStatesPlugin * this_ptr))
} // namespace app::classes::GhostCharacterStatesPlugin
