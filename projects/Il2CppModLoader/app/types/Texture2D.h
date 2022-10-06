#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Texture2D {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Texture2D__Class** type_info;
        inline app::Texture2D__Class* get_class() {
            return il2cpp::get_class<app::Texture2D__Class>(type_info, "UnityEngine", "Texture2D");
        }
        inline app::Texture2D* create() {
            return il2cpp::create_object<app::Texture2D>(get_class());
        }
        inline app::Texture2D__Array* create_array(int size) {
            return il2cpp::array_new<app::Texture2D__Array>(get_class(), size);
        }
        inline app::Texture2D__Array* create_array(const std::vector<app::Texture2D*>& items) {
            return il2cpp::array_new<app::Texture2D__Array>(get_class(), items);
        }
    } // namespace Texture2D
} // namespace app::classes::types
