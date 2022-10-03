#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MovieTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MovieTexture__Class** type_info;
        inline app::MovieTexture__Class* get_class() {
            return il2cpp::get_class<app::MovieTexture__Class>(type_info, "UnityEngine", "MovieTexture");
        }
        inline app::MovieTexture* create() {
            return il2cpp::create_object<app::MovieTexture>(get_class());
        }
    } // namespace MovieTexture
} // namespace app::classes::types
