#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlendAnimation2D {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlendAnimation2D__Class** type_info;
        inline app::BlendAnimation2D__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation2D__Class>(type_info, "Moon", "BlendAnimation2D");
        }
        inline app::BlendAnimation2D* create() {
            return il2cpp::create_object<app::BlendAnimation2D>(get_class());
        }
    } // namespace BlendAnimation2D
} // namespace app::classes::types
