#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DESTransform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DESTransform__Class** type_info;
        inline app::DESTransform__Class* get_class() {
            return il2cpp::get_class<app::DESTransform__Class>(type_info, "System.Security.Cryptography", "DESTransform");
        }
        inline app::DESTransform* create() {
            return il2cpp::create_object<app::DESTransform>(get_class());
        }
    } // namespace DESTransform
} // namespace app::classes::types
