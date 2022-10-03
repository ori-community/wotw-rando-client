#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GhostLineRendererPlugin {
    IL2CPP_REGISTER_METHOD(0x00E21430, void, StartTracking, (app::LineRenderer * line_renderer))
    IL2CPP_REGISTER_METHOD(0x00E214F0, void, StopTracking, (app::LineRenderer * line_renderer))
    IL2CPP_REGISTER_METHOD(0x00E216F0, void, ctor, (app::GhostLineRendererPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::GhostLineRendererPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00E21890, void, RecordCycle, (app::GhostLineRendererPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostLineRendererPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E21BD0, void, cctor, ())
} // namespace app::classes::GhostLineRendererPlugin
