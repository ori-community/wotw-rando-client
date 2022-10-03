#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ManifestId_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ManifestId_t__Class** type_info;
        inline app::ManifestId_t__Class* get_class() {
            return il2cpp::get_class<app::ManifestId_t__Class>(type_info, "Steamworks", "ManifestId_t");
        }
        inline app::ManifestId_t* create() {
            return il2cpp::create_object<app::ManifestId_t>(get_class());
        }
        inline app::ManifestId_t__Boxed* box(app::ManifestId_t value) {
            return il2cpp::box_value<app::ManifestId_t__Boxed>(get_class(), value);
        }
    } // namespace ManifestId_t
} // namespace app::classes::types
