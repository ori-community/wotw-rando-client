#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Renderer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Renderer__Class** type_info;
        inline app::Renderer__Class* get_class() {
            return il2cpp::get_class<app::Renderer__Class>(type_info, "UnityEngine", "Renderer");
        }
        inline app::Renderer* create() {
            return il2cpp::create_object<app::Renderer>(get_class());
        }
        inline app::Renderer__Array* create_array(int size) {
            return il2cpp::array_new<app::Renderer__Array>(get_class(), size);
        }
    } // namespace Renderer
} // namespace app::classes::types
