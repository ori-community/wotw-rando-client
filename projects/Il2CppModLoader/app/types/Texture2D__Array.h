#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Texture2D__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Texture2D__Array__Class** type_info;
        inline app::Texture2D__Array__Class* get_class() {
            return il2cpp::get_class<app::Texture2D__Array__Class>(type_info, "UnityEngine", "Texture2D[]");
        }
        inline app::Texture2D__Array* create() {
            return il2cpp::create_object<app::Texture2D__Array>(get_class());
        }
    } // namespace Texture2D__Array
} // namespace app::classes::types
