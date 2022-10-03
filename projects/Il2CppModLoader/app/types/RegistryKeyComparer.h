#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegistryKeyComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegistryKeyComparer__Class** type_info;
        inline app::RegistryKeyComparer__Class* get_class() {
            return il2cpp::get_class<app::RegistryKeyComparer__Class>(type_info, "Microsoft.Win32", "RegistryKeyComparer");
        }
        inline app::RegistryKeyComparer* create() {
            return il2cpp::create_object<app::RegistryKeyComparer>(get_class());
        }
    } // namespace RegistryKeyComparer
} // namespace app::classes::types
