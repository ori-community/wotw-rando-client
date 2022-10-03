#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityAction__Class** type_info;
        inline app::UnityAction__Class* get_class() {
            return il2cpp::get_class<app::UnityAction__Class>(type_info, "UnityEngine.Events", "UnityAction");
        }
        inline app::UnityAction* create() {
            return il2cpp::create_object<app::UnityAction>(get_class());
        }
    } // namespace UnityAction
} // namespace app::classes::types
