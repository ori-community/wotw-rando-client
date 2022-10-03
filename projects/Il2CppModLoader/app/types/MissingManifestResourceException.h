#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MissingManifestResourceException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MissingManifestResourceException__Class** type_info;
        inline app::MissingManifestResourceException__Class* get_class() {
            return il2cpp::get_class<app::MissingManifestResourceException__Class>(type_info, "System.Resources", "MissingManifestResourceException");
        }
        inline app::MissingManifestResourceException* create() {
            return il2cpp::create_object<app::MissingManifestResourceException>(get_class());
        }
    } // namespace MissingManifestResourceException
} // namespace app::classes::types
