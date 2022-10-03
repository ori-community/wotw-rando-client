#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Canvas {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Canvas__Class** type_info;
        inline app::Canvas__Class* get_class() {
            return il2cpp::get_class<app::Canvas__Class>(type_info, "UnityEngine", "Canvas");
        }
        inline app::Canvas* create() {
            return il2cpp::create_object<app::Canvas>(get_class());
        }
        inline app::Canvas__Array* create_array(int size) {
            return il2cpp::array_new<app::Canvas__Array>(get_class(), size);
        }
    } // namespace Canvas
} // namespace app::classes::types
