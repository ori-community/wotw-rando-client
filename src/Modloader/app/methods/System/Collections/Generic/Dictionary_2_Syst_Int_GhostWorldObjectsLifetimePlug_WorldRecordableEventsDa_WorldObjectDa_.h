#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Syst_Int_GhostWorldObjectsLifetimePlug_WorldRecordableEventsDa_WorldObjectDa_.h>
#include <Modloader/app/structs/Dictionary_2_T_TV_Enumer_Sy_I_GhostWorldObjectsLifetimePl_WorldRecordableEvent_WorldObjec_.h>
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData_ {
    IL2CPP_REGISTER_METHOD(
        0x02C3E9A0,
        app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData*,
        get_Item,
        app::Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData_* this_ptr,
        int64_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData_* this_ptr,
        int64_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData_* this_ptr,
        int64_t key,
        app::GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2A0,
        int32_t,
        get_Count,
        app::Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int64_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData_,
        GetEnumerator,
        app::Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283AC20,
        void,
        ctor,
        app::Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int64_GhostWorldObjectsLifetimePlugin_WorldRecordableEventsData_WorldObjectData_
