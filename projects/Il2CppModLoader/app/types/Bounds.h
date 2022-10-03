#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Bounds {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Bounds__Class** type_info;
        inline app::Bounds__Class* get_class() {
            return il2cpp::get_class<app::Bounds__Class>(type_info, "UnityEngine", "Bounds");
        }
        inline app::Bounds* create() {
            return il2cpp::create_object<app::Bounds>(get_class());
        }
        inline app::Bounds__Boxed* box(app::Bounds value) {
            return il2cpp::box_value<app::Bounds__Boxed>(get_class(), value);
        }
        inline app::Bounds__Array* create_array(int size) {
            return il2cpp::array_new<app::Bounds__Array>(get_class(), size);
        }
    } // namespace Bounds
} // namespace app::classes::types
