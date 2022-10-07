#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Quaternion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Quaternion__Class** type_info;
        inline app::Quaternion__Class* get_class() {
            return il2cpp::get_class<app::Quaternion__Class>(type_info, "UnityEngine", "Quaternion");
        }
        inline app::Quaternion* create() {
            return il2cpp::create_object<app::Quaternion>(get_class());
        }
        inline app::Quaternion__Boxed* box(app::Quaternion value) {
            return il2cpp::box_value<app::Quaternion__Boxed>(get_class(), value);
        }
        inline app::Quaternion__Array* create_array(int size) {
            return il2cpp::array_new<app::Quaternion__Array>(get_class(), size);
        }
        inline app::Quaternion__Array* create_array(const std::vector<app::Quaternion>& items) {
            return il2cpp::array_new<app::Quaternion__Array>(get_class(), items);
        }
    } // namespace Quaternion
} // namespace app::classes::types
