#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMaterialPropertyBlockProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMaterialPropertyBlockProvider__Class** type_info;
        inline app::IMaterialPropertyBlockProvider__Class* get_class() {
            return il2cpp::get_class<app::IMaterialPropertyBlockProvider__Class>(type_info, "", "IMaterialPropertyBlockProvider");
        }
        inline app::IMaterialPropertyBlockProvider* create() {
            return il2cpp::create_object<app::IMaterialPropertyBlockProvider>(get_class());
        }
    } // namespace IMaterialPropertyBlockProvider
} // namespace app::classes::types
