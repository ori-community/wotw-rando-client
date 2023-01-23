#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EncodingTable__Class.h>
#include <Modloader/app/structs/EncodingTable.h>

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
