#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Color32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Color32__Class** type_info;
        inline app::Color32__Class* get_class() {
            return il2cpp::get_class<app::Color32__Class>(type_info, "UnityEngine", "Color32");
        }
        inline app::Color32* create() {
            return il2cpp::create_object<app::Color32>(get_class());
        }
        inline app::Color32__Boxed* box(app::Color32 value) {
            return il2cpp::box_value<app::Color32__Boxed>(get_class(), value);
        }
        inline app::Color32__Array* create_array(int size) {
            return il2cpp::array_new<app::Color32__Array>(get_class(), size);
        }
    } // namespace Color32
} // namespace app::classes::types
