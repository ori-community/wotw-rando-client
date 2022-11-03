#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData {
    IL2CPP_REGISTER_METHOD(0x007F1530, app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData*, GetObjectData, (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * this_ptr, app::RecordableIdData id_data))
    IL2CPP_REGISTER_METHOD(0x007F1600, void, AddObjectData, (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * this_ptr, app::RecordableIdData id_data))
    IL2CPP_REGISTER_METHOD(0x007F17E0, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x007F17F0, void, Save, (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x007F2210, void, Load, (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x007F2B40, void, ctor, (app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData * this_ptr))
} // namespace app::classes::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData
