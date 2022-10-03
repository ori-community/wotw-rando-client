#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Collider__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Collider__Array__Class** type_info;
        inline app::Collider__Array__Class* get_class() {
            return il2cpp::get_class<app::Collider__Array__Class>(type_info, "UnityEngine", "Collider[]");
        }
        inline app::Collider__Array* create() {
            return il2cpp::create_object<app::Collider__Array>(get_class());
        }
    } // namespace Collider__Array
} // namespace app::classes::types
