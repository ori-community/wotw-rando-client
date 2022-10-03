#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreloadFirstScene {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PreloadFirstScene__Class** type_info;
        inline app::PreloadFirstScene__Class* get_class() {
            return il2cpp::get_class<app::PreloadFirstScene__Class>(type_info, "Moon.Timeline", "PreloadFirstScene");
        }
        inline app::PreloadFirstScene* create() {
            return il2cpp::create_object<app::PreloadFirstScene>(get_class());
        }
    } // namespace PreloadFirstScene
} // namespace app::classes::types
