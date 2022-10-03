#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayeredAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LayeredAnimation__Class** type_info;
        inline app::LayeredAnimation__Class* get_class() {
            return il2cpp::get_class<app::LayeredAnimation__Class>(type_info, "Moon", "LayeredAnimation");
        }
        inline app::LayeredAnimation* create() {
            return il2cpp::create_object<app::LayeredAnimation>(get_class());
        }
    } // namespace LayeredAnimation
} // namespace app::classes::types
