#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDtdParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDtdParser__Class** type_info;
        inline app::IDtdParser__Class* get_class() {
            return il2cpp::get_class<app::IDtdParser__Class>(type_info, "System.Xml", "IDtdParser");
        }
        inline app::IDtdParser* create() {
            return il2cpp::create_object<app::IDtdParser>(get_class());
        }
    } // namespace IDtdParser
} // namespace app::classes::types
