#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData_ServerObjectsData.h>
#include <Modloader/app/structs/List_1_GhostServerEventsPlugin_ServerEventData_ServerObjectsData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_GhostServerEventsPlugin_ServerEventData_ServerObjectsData_.h>

namespace app::classes::System::Collections::Generic::List_1_GhostServerEventsPlugin_ServerEventData_ServerObjectsData_ {
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_GhostServerEventsPlugin_ServerEventData_ServerObjectsData_* this_ptr,
        app::GhostServerEventsPlugin_ServerEventData_ServerObjectsData* item
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_GhostServerEventsPlugin_ServerEventData_ServerObjectsData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_GhostServerEventsPlugin_ServerEventData_ServerObjectsData_,
        GetEnumerator,
        app::List_1_GhostServerEventsPlugin_ServerEventData_ServerObjectsData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_GhostServerEventsPlugin_ServerEventData_ServerObjectsData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_GhostServerEventsPlugin_ServerEventData_ServerObjectsData_
