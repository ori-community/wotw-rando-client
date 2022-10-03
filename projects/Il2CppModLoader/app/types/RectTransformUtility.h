#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectTransformUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RectTransformUtility__Class** type_info;
        inline app::RectTransformUtility__Class* get_class() {
            return il2cpp::get_class<app::RectTransformUtility__Class>(type_info, "UnityEngine", "RectTransformUtility");
        }
        inline app::RectTransformUtility* create() {
            return il2cpp::create_object<app::RectTransformUtility>(get_class());
        }
    } // namespace RectTransformUtility
} // namespace app::classes::types
