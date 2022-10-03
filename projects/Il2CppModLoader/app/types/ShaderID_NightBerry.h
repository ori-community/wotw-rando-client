#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_NightBerry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_NightBerry__Class** type_info;
        inline app::ShaderID_NightBerry__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_NightBerry__Class>(type_info, "Game", "ShaderID_NightBerry");
        }
        inline app::ShaderID_NightBerry* create() {
            return il2cpp::create_object<app::ShaderID_NightBerry>(get_class());
        }
    } // namespace ShaderID_NightBerry
} // namespace app::classes::types
