#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_.h>
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_* this_ptr, int64_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_* this_ptr,
        int64_t key,
        app::GlobalRecordingTable_RecordableEntry* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02C3E9A0,
        app::GlobalRecordingTable_RecordableEntry*,
        get_Item,
        app::Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_* this_ptr,
        int64_t key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_
