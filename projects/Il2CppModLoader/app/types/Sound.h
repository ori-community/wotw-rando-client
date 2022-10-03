#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Sound {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Sound__Class** type_info;
        inline app::Sound__Class* get_class() {
            return il2cpp::get_class<app::Sound__Class>(type_info, "Core", "Sound");
        }
        inline app::Sound* create() {
            return il2cpp::create_object<app::Sound>(get_class());
        }
    } // namespace Sound
} // namespace app::classes::types
