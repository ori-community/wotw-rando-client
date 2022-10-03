#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HeaderParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HeaderParser__Class** type_info;
        inline app::HeaderParser__Class* get_class() {
            return il2cpp::get_class<app::HeaderParser__Class>(type_info, "System.Net", "HeaderParser");
        }
        inline app::HeaderParser* create() {
            return il2cpp::create_object<app::HeaderParser>(get_class());
        }
    } // namespace HeaderParser
} // namespace app::classes::types
