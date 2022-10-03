#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IComponent__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IComponent__Array__Class** type_info;
        inline app::IComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::IComponent__Array__Class>(type_info, "System.ComponentModel", "IComponent[]");
        }
        inline app::IComponent__Array* create() {
            return il2cpp::create_object<app::IComponent__Array>(get_class());
        }
    } // namespace IComponent__Array
} // namespace app::classes::types
