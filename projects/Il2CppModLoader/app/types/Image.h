#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Image {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Image__Class** type_info;
        inline app::Image__Class* get_class() {
            return il2cpp::get_class<app::Image__Class>(type_info, "UnityEngine.UI", "Image");
        }
        inline app::Image* create() {
            return il2cpp::create_object<app::Image>(get_class());
        }
        inline app::Image__Array* create_array(int size) {
            return il2cpp::array_new<app::Image__Array>(get_class(), size);
        }
    } // namespace Image
} // namespace app::classes::types
