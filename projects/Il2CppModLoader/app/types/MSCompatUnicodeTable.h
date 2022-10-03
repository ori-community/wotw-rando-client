#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MSCompatUnicodeTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MSCompatUnicodeTable__Class** type_info;
        inline app::MSCompatUnicodeTable__Class* get_class() {
            return il2cpp::get_class<app::MSCompatUnicodeTable__Class>(type_info, "Mono.Globalization.Unicode", "MSCompatUnicodeTable");
        }
        inline app::MSCompatUnicodeTable* create() {
            return il2cpp::create_object<app::MSCompatUnicodeTable>(get_class());
        }
    } // namespace MSCompatUnicodeTable
} // namespace app::classes::types
