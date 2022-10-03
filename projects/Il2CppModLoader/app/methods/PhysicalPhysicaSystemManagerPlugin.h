#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PhysicalPhysicaSystemManagerPlugin {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::GlobalRecordingTable*, get_GlobalRecordingTable, (app::PhysicalPhysicaSystemManagerPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_GlobalRecordingTable, (app::PhysicalPhysicaSystemManagerPlugin * this_ptr, app::GlobalRecordingTable* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::PhysicalPhysicaSystemManagerPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x014ED130, void, RecordCycle, (app::PhysicalPhysicaSystemManagerPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::PhysicalPhysicaSystemManagerPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::PhysicalPhysicaSystemManagerPlugin * this_ptr))
} // namespace app::classes::PhysicalPhysicaSystemManagerPlugin
