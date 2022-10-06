#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Texture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Texture__Class** type_info;
        inline app::Texture__Class* get_class() {
            return il2cpp::get_class<app::Texture__Class>(type_info, "UnityEngine", "Texture");
        }
        inline app::Texture* create() {
            return il2cpp::create_object<app::Texture>(get_class());
        }
        inline app::Texture__Array* create_array(int size) {
            return il2cpp::array_new<app::Texture__Array>(get_class(), size);
        }
        inline app::Texture__Array* create_array(const std::vector<app::Texture*>& items) {
            return il2cpp::array_new<app::Texture__Array>(get_class(), items);
        }
    } // namespace Texture
} // namespace app::classes::types
