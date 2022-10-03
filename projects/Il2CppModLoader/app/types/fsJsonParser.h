#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsJsonParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsJsonParser__Class** type_info;
        inline app::fsJsonParser__Class* get_class() {
            return il2cpp::get_class<app::fsJsonParser__Class>(type_info, "FullSerializer", "fsJsonParser");
        }
        inline app::fsJsonParser* create() {
            return il2cpp::create_object<app::fsJsonParser>(get_class());
        }
    } // namespace fsJsonParser
} // namespace app::classes::types
