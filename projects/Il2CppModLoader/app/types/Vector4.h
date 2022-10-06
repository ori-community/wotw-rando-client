#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector4 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vector4__Class** type_info;
        inline app::Vector4__Class* get_class() {
            return il2cpp::get_class<app::Vector4__Class>(type_info, "UnityEngine", "Vector4");
        }
        inline app::Vector4* create() {
            return il2cpp::create_object<app::Vector4>(get_class());
        }
        inline app::Vector4__Boxed* box(app::Vector4 value) {
            return il2cpp::box_value<app::Vector4__Boxed>(get_class(), value);
        }
        inline app::Vector4__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector4__Array>(get_class(), size);
        }
        inline app::Vector4__Array* create_array(const std::vector<app::Vector4__Boxed>& items) {
            return il2cpp::array_new<app::Vector4__Array>(get_class(), items);
        }
    } // namespace Vector4
} // namespace app::classes::types
