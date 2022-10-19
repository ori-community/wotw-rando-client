#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlobalRecordingTable {
        inline app::GlobalRecordingTable__Class** type_info = (app::GlobalRecordingTable__Class**)(modloader::win::memory::resolve_rva(0x0474A368));
        inline app::GlobalRecordingTable__Class* get_class() {
            return il2cpp::get_class<app::GlobalRecordingTable__Class>(type_info, "", "GlobalRecordingTable");
        }
        inline app::GlobalRecordingTable* create() {
            return il2cpp::create_object<app::GlobalRecordingTable>(get_class());
        }
    } // namespace GlobalRecordingTable
} // namespace app::classes::types
