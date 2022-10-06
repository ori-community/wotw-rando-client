#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Component_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Component_1__Class** type_info;
        inline app::Component_1__Class* get_class() {
            return il2cpp::get_class<app::Component_1__Class>(type_info, "UnityEngine", "Component");
        }
        inline app::Component_1* create() {
            return il2cpp::create_object<app::Component_1>(get_class());
        }
        inline app::Component_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Component_1__Array>(get_class(), size);
        }
        inline app::Component_1__Array* create_array(const std::vector<app::Component_1*>& items) {
            return il2cpp::array_new<app::Component_1__Array>(get_class(), items);
        }
    } // namespace Component_1
} // namespace app::classes::types
