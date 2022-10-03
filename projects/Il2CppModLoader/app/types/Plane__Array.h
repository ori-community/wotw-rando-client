#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Plane__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Plane__Array__Class** type_info;
        inline app::Plane__Array__Class* get_class() {
            return il2cpp::get_class<app::Plane__Array__Class>(type_info, "UnityEngine", "Plane[]");
        }
        inline app::Plane__Array* create() {
            return il2cpp::create_object<app::Plane__Array>(get_class());
        }
    } // namespace Plane__Array
} // namespace app::classes::types
