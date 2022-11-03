#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MSCompatUnicodeTable {
        inline app::MSCompatUnicodeTable__Class** type_info = (app::MSCompatUnicodeTable__Class**)(modloader::win::memory::resolve_rva(0x0475EE20));
        inline app::MSCompatUnicodeTable__Class* get_class() {
            return il2cpp::get_class<app::MSCompatUnicodeTable__Class>(type_info, "Mono.Globalization.Unicode", "MSCompatUnicodeTable");
        }
        inline app::MSCompatUnicodeTable* create() {
            return il2cpp::create_object<app::MSCompatUnicodeTable>(get_class());
        }
    } // namespace MSCompatUnicodeTable
} // namespace app::classes::types
