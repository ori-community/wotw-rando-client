#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IComponent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IComponent__Class** type_info;
        inline app::IComponent__Class* get_class() {
            return il2cpp::get_class<app::IComponent__Class>(type_info, "System.ComponentModel", "IComponent");
        }
        inline app::IComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::IComponent__Array>(get_class(), size);
        }
        inline app::IComponent__Array* create_array(const std::vector<app::IComponent*>& items) {
            return il2cpp::array_new<app::IComponent__Array>(get_class(), items);
        }
    } // namespace IComponent
} // namespace app::classes::types
