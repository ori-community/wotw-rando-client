#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialProperties_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialProperties_c__Class** type_info;
        inline app::MaterialProperties_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MaterialProperties_c__Class>(type_info, "", "MaterialProperties", "<>c");
        }
        inline app::MaterialProperties_c* create() {
            return il2cpp::create_object<app::MaterialProperties_c>(get_class());
        }
    } // namespace MaterialProperties_c
} // namespace app::classes::types
