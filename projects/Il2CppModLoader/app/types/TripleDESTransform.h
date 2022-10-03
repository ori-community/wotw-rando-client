#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TripleDESTransform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TripleDESTransform__Class** type_info;
        inline app::TripleDESTransform__Class* get_class() {
            return il2cpp::get_class<app::TripleDESTransform__Class>(type_info, "System.Security.Cryptography", "TripleDESTransform");
        }
        inline app::TripleDESTransform* create() {
            return il2cpp::create_object<app::TripleDESTransform>(get_class());
        }
    } // namespace TripleDESTransform
} // namespace app::classes::types
