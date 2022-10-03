#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Mesh__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Mesh__Array__Class** type_info;
        inline app::Mesh__Array__Class* get_class() {
            return il2cpp::get_class<app::Mesh__Array__Class>(type_info, "UnityEngine", "Mesh[]");
        }
        inline app::Mesh__Array* create() {
            return il2cpp::create_object<app::Mesh__Array>(get_class());
        }
    } // namespace Mesh__Array
} // namespace app::classes::types
