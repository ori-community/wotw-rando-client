#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlendAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BlendAnimation__Class** type_info;
        inline app::BlendAnimation__Class* get_class() {
            return il2cpp::get_class<app::BlendAnimation__Class>(type_info, "Moon", "BlendAnimation");
        }
        inline app::BlendAnimation* create() {
            return il2cpp::create_object<app::BlendAnimation>(get_class());
        }
    } // namespace BlendAnimation
} // namespace app::classes::types
