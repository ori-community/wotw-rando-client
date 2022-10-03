#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Renderer__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Renderer__Array__Class** type_info;
        inline app::Renderer__Array__Class* get_class() {
            return il2cpp::get_class<app::Renderer__Array__Class>(type_info, "UnityEngine", "Renderer[]");
        }
        inline app::Renderer__Array* create() {
            return il2cpp::create_object<app::Renderer__Array>(get_class());
        }
    } // namespace Renderer__Array
} // namespace app::classes::types
