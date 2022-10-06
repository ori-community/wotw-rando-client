#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitFlash3D_Flash {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HitFlash3D_Flash__Class** type_info;
        inline app::HitFlash3D_Flash__Class* get_class() {
            return il2cpp::get_nested_class<app::HitFlash3D_Flash__Class>(type_info, "", "HitFlash3D", "Flash");
        }
        inline app::HitFlash3D_Flash* create() {
            return il2cpp::create_object<app::HitFlash3D_Flash>(get_class());
        }
        inline app::HitFlash3D_Flash__Array* create_array(int size) {
            return il2cpp::array_new<app::HitFlash3D_Flash__Array>(get_class(), size);
        }
        inline app::HitFlash3D_Flash__Array* create_array(const std::vector<app::HitFlash3D_Flash*>& items) {
            return il2cpp::array_new<app::HitFlash3D_Flash__Array>(get_class(), items);
        }
    } // namespace HitFlash3D_Flash
} // namespace app::classes::types
