#pragma once
#include <Modloader/app/structs/EncodingTable.h>
#include <Modloader/app/structs/EncodingTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncodingTable {
        inline app::EncodingTable__Class** type_info() {
            static app::EncodingTable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EncodingTable__Class**)(modloader::win::memory::resolve_rva(0x04767B80));
            }
            return cache;
        }
        inline app::EncodingTable__Class* get_class() {
            return il2cpp::get_class<app::EncodingTable__Class>(type_info(), "System.Globalization", "EncodingTable");
        }
        inline app::EncodingTable* create() {
            return il2cpp::create_object<app::EncodingTable>(get_class());
        }
    } // namespace EncodingTable
} // namespace app::classes::types
