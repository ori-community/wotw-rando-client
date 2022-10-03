#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Skybox {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Skybox__Class** type_info;
        inline app::Skybox__Class* get_class() {
            return il2cpp::get_class<app::Skybox__Class>(type_info, "UnityEngine", "Skybox");
        }
        inline app::Skybox* create() {
            return il2cpp::create_object<app::Skybox>(get_class());
        }
    } // namespace Skybox
} // namespace app::classes::types
