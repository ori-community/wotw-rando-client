#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderBuffer__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderBuffer__Array__Class** type_info;
        inline app::RenderBuffer__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderBuffer__Array__Class>(type_info, "UnityEngine", "RenderBuffer[]");
        }
        inline app::RenderBuffer__Array* create() {
            return il2cpp::create_object<app::RenderBuffer__Array>(get_class());
        }
    } // namespace RenderBuffer__Array
} // namespace app::classes::types
