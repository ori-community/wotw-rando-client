#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EncodingTable {
        inline app::EncodingTable__Class** type_info = (app::EncodingTable__Class**)(modloader::win::memory::resolve_rva(0x04767B80));
        inline app::EncodingTable__Class* get_class() {
            return il2cpp::get_class<app::EncodingTable__Class>(type_info, "System.Globalization", "EncodingTable");
        }
        inline app::EncodingTable* create() {
            return il2cpp::create_object<app::EncodingTable>(get_class());
        }
    } // namespace EncodingTable
} // namespace app::classes::types
