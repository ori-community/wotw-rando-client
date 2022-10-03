#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DtdParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DtdParser__Class** type_info;
        inline app::DtdParser__Class* get_class() {
            return il2cpp::get_class<app::DtdParser__Class>(type_info, "System.Xml", "DtdParser");
        }
        inline app::DtdParser* create() {
            return il2cpp::create_object<app::DtdParser>(get_class());
        }
    } // namespace DtdParser
} // namespace app::classes::types
