#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MSCompatUnicodeTable_c {
        inline app::MSCompatUnicodeTable_c__Class** type_info = (app::MSCompatUnicodeTable_c__Class**)(modloader::win::memory::resolve_rva(0x0475B928));
        inline app::MSCompatUnicodeTable_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MSCompatUnicodeTable_c__Class>(type_info, "Mono.Globalization.Unicode", "MSCompatUnicodeTable", "<>c");
        }
        inline app::MSCompatUnicodeTable_c* create() {
            return il2cpp::create_object<app::MSCompatUnicodeTable_c>(get_class());
        }
    } // namespace MSCompatUnicodeTable_c
} // namespace app::classes::types
