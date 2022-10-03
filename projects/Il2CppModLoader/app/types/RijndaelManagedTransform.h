#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RijndaelManagedTransform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RijndaelManagedTransform__Class** type_info;
        inline app::RijndaelManagedTransform__Class* get_class() {
            return il2cpp::get_class<app::RijndaelManagedTransform__Class>(type_info, "System.Security.Cryptography", "RijndaelManagedTransform");
        }
        inline app::RijndaelManagedTransform* create() {
            return il2cpp::create_object<app::RijndaelManagedTransform>(get_class());
        }
    } // namespace RijndaelManagedTransform
} // namespace app::classes::types
