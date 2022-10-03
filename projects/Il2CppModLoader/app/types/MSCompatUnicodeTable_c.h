#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MSCompatUnicodeTable_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MSCompatUnicodeTable_c__Class** type_info;
        inline app::MSCompatUnicodeTable_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MSCompatUnicodeTable_c__Class>(type_info, "Mono.Globalization.Unicode", "MSCompatUnicodeTable", "<>c");
        }
        inline app::MSCompatUnicodeTable_c* create() {
            return il2cpp::create_object<app::MSCompatUnicodeTable_c>(get_class());
        }
    } // namespace MSCompatUnicodeTable_c
} // namespace app::classes::types
