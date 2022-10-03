#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_NightberryPlaceholder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_NightberryPlaceholder__Class** type_info;
        inline app::ShaderID_NightberryPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_NightberryPlaceholder__Class>(type_info, "", "ShaderID_NightberryPlaceholder");
        }
        inline app::ShaderID_NightberryPlaceholder* create() {
            return il2cpp::create_object<app::ShaderID_NightberryPlaceholder>(get_class());
        }
    } // namespace ShaderID_NightberryPlaceholder
} // namespace app::classes::types
