#pragma once
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry__Array.h>
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalRecordingTable_RecordableEntry__Array {
        inline app::GlobalRecordingTable_RecordableEntry__Array__Class** type_info() {
            static app::GlobalRecordingTable_RecordableEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalRecordingTable_RecordableEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalRecordingTable_RecordableEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::GlobalRecordingTable_RecordableEntry__Array__Class>(type_info(), "", "GlobalRecordingTable+RecordableEntry[]");
        }
        inline app::GlobalRecordingTable_RecordableEntry__Array* create() {
            return il2cpp::create_object<app::GlobalRecordingTable_RecordableEntry__Array>(get_class());
        }
    } // namespace GlobalRecordingTable_RecordableEntry__Array
} // namespace app::classes::types
