#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaycastHit {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaycastHit__Class** type_info;
        inline app::RaycastHit__Class* get_class() {
            return il2cpp::get_class<app::RaycastHit__Class>(type_info, "UnityEngine", "RaycastHit");
        }
        inline app::RaycastHit* create() {
            return il2cpp::create_object<app::RaycastHit>(get_class());
        }
        inline app::RaycastHit__Boxed* box(app::RaycastHit value) {
            return il2cpp::box_value<app::RaycastHit__Boxed>(get_class(), value);
        }
        inline app::RaycastHit__Array* create_array(int size) {
            return il2cpp::array_new<app::RaycastHit__Array>(get_class(), size);
        }
        inline app::RaycastHit__Array* create_array(const std::vector<app::RaycastHit__Boxed>& items) {
            return il2cpp::array_new<app::RaycastHit__Array>(get_class(), items);
        }
    } // namespace RaycastHit
} // namespace app::classes::types
