#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ray__Class** type_info;
        inline app::Ray__Class* get_class() {
            return il2cpp::get_class<app::Ray__Class>(type_info, "UnityEngine", "Ray");
        }
        inline app::Ray* create() {
            return il2cpp::create_object<app::Ray>(get_class());
        }
        inline app::Ray__Boxed* box(app::Ray value) {
            return il2cpp::box_value<app::Ray__Boxed>(get_class(), value);
        }
        inline app::Ray__Array* create_array(int size) {
            return il2cpp::array_new<app::Ray__Array>(get_class(), size);
        }
    } // namespace Ray
} // namespace app::classes::types
