#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Component_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Component_1__Array__Class** type_info;
        inline app::Component_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Component_1__Array__Class>(type_info, "UnityEngine", "Component[]");
        }
        inline app::Component_1__Array* create() {
            return il2cpp::create_object<app::Component_1__Array>(get_class());
        }
    } // namespace Component_1__Array
} // namespace app::classes::types
