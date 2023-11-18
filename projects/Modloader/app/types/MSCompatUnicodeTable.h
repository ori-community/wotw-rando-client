#pragma once
#include <Modloader/app/structs/MSCompatUnicodeTable.h>
#include <Modloader/app/structs/MSCompatUnicodeTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MSCompatUnicodeTable {
        inline app::MSCompatUnicodeTable__Class** type_info() {
            static app::MSCompatUnicodeTable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MSCompatUnicodeTable__Class**)(modloader::win::memory::resolve_rva(0x0475EE20));
            }
            return cache;
        }
        inline app::MSCompatUnicodeTable__Class* get_class() {
            return il2cpp::get_class<app::MSCompatUnicodeTable__Class>(type_info(), "Mono.Globalization.Unicode", "MSCompatUnicodeTable");
        }
        inline app::MSCompatUnicodeTable* create() {
            return il2cpp::create_object<app::MSCompatUnicodeTable>(get_class());
        }
    } // namespace MSCompatUnicodeTable
} // namespace app::classes::types
