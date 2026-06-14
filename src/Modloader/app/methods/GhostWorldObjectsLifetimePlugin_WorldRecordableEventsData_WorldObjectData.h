#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData.h>
#include <Modloader/app/structs/RecordableIdData.h>

namespace app::classes::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData {
    IL2CPP_REGISTER_METHOD(
        0x007F2CB0,
        void,
        ctor,
        app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData* this_ptr,
        app::RecordableIdData recording_i_d
    )
}
