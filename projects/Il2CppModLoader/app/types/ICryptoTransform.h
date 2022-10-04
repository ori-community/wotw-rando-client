#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICryptoTransform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICryptoTransform__Class** type_info;
        inline app::ICryptoTransform__Class* get_class() {
            return il2cpp::get_class<app::ICryptoTransform__Class>(type_info, "System.Security.Cryptography", "ICryptoTransform");
        }
    } // namespace ICryptoTransform
} // namespace app::classes::types
