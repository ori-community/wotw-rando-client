#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlendFloat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlendFloat__Class** type_info;
        inline app::BlendFloat__Class* get_class() {
            return il2cpp::get_class<app::BlendFloat__Class>(type_info, "", "BlendFloat");
        }
        inline app::BlendFloat* create() {
            return il2cpp::create_object<app::BlendFloat>(get_class());
        }
    } // namespace BlendFloat
} // namespace app::classes::types
