#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalRecordingTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GlobalRecordingTable__Class** type_info;
        inline app::GlobalRecordingTable__Class* get_class() {
            return il2cpp::get_class<app::GlobalRecordingTable__Class>(type_info, "", "GlobalRecordingTable");
        }
        inline app::GlobalRecordingTable* create() {
            return il2cpp::create_object<app::GlobalRecordingTable>(get_class());
        }
    } // namespace GlobalRecordingTable
} // namespace app::classes::types
