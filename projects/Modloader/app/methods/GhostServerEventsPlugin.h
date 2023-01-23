#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GhostRecorder_GhostPluginRecordingType__Enum.h>
#include <Modloader/app/structs/GhostServerEventsPlugin.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::GhostServerEventsPlugin {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostServerEventsPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::GhostServerEventsPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x007E5B70, void, RecordCycle, (app::GhostServerEventsPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x007E5C10, void, RecordServerInstantiate, (app::GhostServerEventsPlugin * this_ptr, app::String* asset_guid, app::GameObject* instance))
    IL2CPP_REGISTER_METHOD(0x007E6500, void, RecordServerDestroy, (app::GhostServerEventsPlugin * this_ptr, int32_t obj_i_d))
    IL2CPP_REGISTER_METHOD(0x007E6720, void, RecordServerBrainTriger, (app::GhostServerEventsPlugin * this_ptr, int32_t brain_i_d, int32_t entry_indx))
    IL2CPP_REGISTER_METHOD(0x007E6970, void, RecordServerTransform, (app::GhostServerEventsPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E6F50, void, ctor, (app::GhostServerEventsPlugin * this_ptr))
} // namespace app::classes::GhostServerEventsPlugin
