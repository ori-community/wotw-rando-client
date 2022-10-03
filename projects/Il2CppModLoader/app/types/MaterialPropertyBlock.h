#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialPropertyBlock {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialPropertyBlock__Class** type_info;
        inline app::MaterialPropertyBlock__Class* get_class() {
            return il2cpp::get_class<app::MaterialPropertyBlock__Class>(type_info, "UnityEngine", "MaterialPropertyBlock");
        }
        inline app::MaterialPropertyBlock* create() {
            return il2cpp::create_object<app::MaterialPropertyBlock>(get_class());
        }
    } // namespace MaterialPropertyBlock
} // namespace app::classes::types
