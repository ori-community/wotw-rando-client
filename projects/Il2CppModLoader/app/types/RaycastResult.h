#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaycastResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaycastResult__Class** type_info;
        inline app::RaycastResult__Class* get_class() {
            return il2cpp::get_class<app::RaycastResult__Class>(type_info, "UnityEngine.EventSystems", "RaycastResult");
        }
        inline app::RaycastResult* create() {
            return il2cpp::create_object<app::RaycastResult>(get_class());
        }
        inline app::RaycastResult__Boxed* box(app::RaycastResult value) {
            return il2cpp::box_value<app::RaycastResult__Boxed>(get_class(), value);
        }
        inline app::RaycastResult__Array* create_array(int size) {
            return il2cpp::array_new<app::RaycastResult__Array>(get_class(), size);
        }
        inline app::RaycastResult__Array* create_array(const std::vector<app::RaycastResult__Boxed>& items) {
            return il2cpp::array_new<app::RaycastResult__Array>(get_class(), items);
        }
    } // namespace RaycastResult
} // namespace app::classes::types
