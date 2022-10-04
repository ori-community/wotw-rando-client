#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDtdParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDtdParser__Class** type_info;
        inline app::IDtdParser__Class* get_class() {
            return il2cpp::get_class<app::IDtdParser__Class>(type_info, "System.Xml", "IDtdParser");
        }
    } // namespace IDtdParser
} // namespace app::classes::types
