#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Graphics {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Graphics__Class** type_info;
        inline app::Graphics__Class* get_class() {
            return il2cpp::get_class<app::Graphics__Class>(type_info, "UnityEngine", "Graphics");
        }
        inline app::Graphics* create() {
            return il2cpp::create_object<app::Graphics>(get_class());
        }
    } // namespace Graphics
} // namespace app::classes::types
