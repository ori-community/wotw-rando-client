#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayerMask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LayerMask__Class** type_info;
        inline app::LayerMask__Class* get_class() {
            return il2cpp::get_class<app::LayerMask__Class>(type_info, "UnityEngine", "LayerMask");
        }
        inline app::LayerMask* create() {
            return il2cpp::create_object<app::LayerMask>(get_class());
        }
        inline app::LayerMask__Boxed* box(app::LayerMask value) {
            return il2cpp::box_value<app::LayerMask__Boxed>(get_class(), value);
        }
    } // namespace LayerMask
} // namespace app::classes::types
