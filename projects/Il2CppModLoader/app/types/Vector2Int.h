#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector2Int {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vector2Int__Class** type_info;
        inline app::Vector2Int__Class* get_class() {
            return il2cpp::get_class<app::Vector2Int__Class>(type_info, "UnityEngine", "Vector2Int");
        }
        inline app::Vector2Int* create() {
            return il2cpp::create_object<app::Vector2Int>(get_class());
        }
        inline app::Vector2Int__Boxed* box(app::Vector2Int value) {
            return il2cpp::box_value<app::Vector2Int__Boxed>(get_class(), value);
        }
    } // namespace Vector2Int
} // namespace app::classes::types
