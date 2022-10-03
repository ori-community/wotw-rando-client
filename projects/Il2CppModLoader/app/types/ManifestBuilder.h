#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ManifestBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ManifestBuilder__Class** type_info;
        inline app::ManifestBuilder__Class* get_class() {
            return il2cpp::get_class<app::ManifestBuilder__Class>(type_info, "System.Diagnostics.Tracing", "ManifestBuilder");
        }
        inline app::ManifestBuilder* create() {
            return il2cpp::create_object<app::ManifestBuilder>(get_class());
        }
    } // namespace ManifestBuilder
} // namespace app::classes::types
