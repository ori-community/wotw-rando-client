#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ManifestBasedResourceGroveler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ManifestBasedResourceGroveler__Class** type_info;
        inline app::ManifestBasedResourceGroveler__Class* get_class() {
            return il2cpp::get_class<app::ManifestBasedResourceGroveler__Class>(type_info, "System.Resources", "ManifestBasedResourceGroveler");
        }
        inline app::ManifestBasedResourceGroveler* create() {
            return il2cpp::create_object<app::ManifestBasedResourceGroveler>(get_class());
        }
    } // namespace ManifestBasedResourceGroveler
} // namespace app::classes::types
