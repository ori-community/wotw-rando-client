#pragma once
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry.h>
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry__Array.h>
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalRecordingTable_RecordableEntry {
        inline app::GlobalRecordingTable_RecordableEntry__Class** type_info() {
            static app::GlobalRecordingTable_RecordableEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GlobalRecordingTable_RecordableEntry__Class**)(modloader::win::memory::resolve_rva(0x047922F8));
            }
            return cache;
        }
        inline app::GlobalRecordingTable_RecordableEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::GlobalRecordingTable_RecordableEntry__Class>(type_info(), "", "GlobalRecordingTable", "RecordableEntry");
        }
        inline app::GlobalRecordingTable_RecordableEntry* create() {
            return il2cpp::create_object<app::GlobalRecordingTable_RecordableEntry>(get_class());
        }
        inline app::GlobalRecordingTable_RecordableEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GlobalRecordingTable_RecordableEntry__Array>(get_class(), size);
        }
        inline app::GlobalRecordingTable_RecordableEntry__Array* create_array(const std::vector<app::GlobalRecordingTable_RecordableEntry*>& items) {
            return il2cpp::array_new<app::GlobalRecordingTable_RecordableEntry__Array>(get_class(), items);
        }
    } // namespace GlobalRecordingTable_RecordableEntry
} // namespace app::classes::types
