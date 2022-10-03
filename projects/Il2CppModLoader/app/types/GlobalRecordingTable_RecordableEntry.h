#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalRecordingTable_RecordableEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GlobalRecordingTable_RecordableEntry__Class** type_info;
        inline app::GlobalRecordingTable_RecordableEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::GlobalRecordingTable_RecordableEntry__Class>(type_info, "", "GlobalRecordingTable", "RecordableEntry");
        }
        inline app::GlobalRecordingTable_RecordableEntry* create() {
            return il2cpp::create_object<app::GlobalRecordingTable_RecordableEntry>(get_class());
        }
        inline app::GlobalRecordingTable_RecordableEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GlobalRecordingTable_RecordableEntry__Array>(get_class(), size);
        }
    } // namespace GlobalRecordingTable_RecordableEntry
} // namespace app::classes::types
