#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIVertex__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UIVertex__Array__Class** type_info;
        inline app::UIVertex__Array__Class* get_class() {
            return il2cpp::get_class<app::UIVertex__Array__Class>(type_info, "UnityEngine", "UIVertex[]");
        }
        inline app::UIVertex__Array* create() {
            return il2cpp::create_object<app::UIVertex__Array>(get_class());
        }
    } // namespace UIVertex__Array
} // namespace app::classes::types
