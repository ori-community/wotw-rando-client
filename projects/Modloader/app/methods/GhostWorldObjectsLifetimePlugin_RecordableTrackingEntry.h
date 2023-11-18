#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IRecordable.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry.h>
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry {
    IL2CPP_REGISTER_METHOD(0x007F08A0, app::IRecordable*, get_Recordable, (app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F0930, app::Vector3, get_CurrentPosition, (app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F0AE0, app::Quaternion, get_CurrentRotation, (app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F0C90, app::Vector3, get_CurrentScale, (app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F0D80, bool, get_CurrentActivation, (app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F0DE0, void, ctor, (app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * this_ptr, app::GlobalRecordingTable_RecordableEntry* target, bool track_transform_changes, bool is_child_transform))
    IL2CPP_REGISTER_METHOD(0x007F1010, void, Refresh, (app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F14E0, void, FilterExclusions, (app::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry * this_ptr))
} // namespace app::classes::GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry
