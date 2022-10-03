#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Gradient {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Gradient__Class** type_info;
        inline app::Gradient__Class* get_class() {
            return il2cpp::get_class<app::Gradient__Class>(type_info, "UnityEngine", "Gradient");
        }
        inline app::Gradient* create() {
            return il2cpp::create_object<app::Gradient>(get_class());
        }
    } // namespace Gradient
} // namespace app::classes::types
