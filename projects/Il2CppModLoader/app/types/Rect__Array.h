#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rect__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Rect__Array__Class** type_info;
        inline app::Rect__Array__Class* get_class() {
            return il2cpp::get_class<app::Rect__Array__Class>(type_info, "UnityEngine", "Rect[]");
        }
        inline app::Rect__Array* create() {
            return il2cpp::create_object<app::Rect__Array>(get_class());
        }
    } // namespace Rect__Array
} // namespace app::classes::types
