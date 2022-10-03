#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectTransform_ReapplyDrivenProperties {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RectTransform_ReapplyDrivenProperties__Class** type_info;
        inline app::RectTransform_ReapplyDrivenProperties__Class* get_class() {
            return il2cpp::get_nested_class<app::RectTransform_ReapplyDrivenProperties__Class>(type_info, "UnityEngine", "RectTransform", "ReapplyDrivenProperties");
        }
        inline app::RectTransform_ReapplyDrivenProperties* create() {
            return il2cpp::create_object<app::RectTransform_ReapplyDrivenProperties>(get_class());
        }
    } // namespace RectTransform_ReapplyDrivenProperties
} // namespace app::classes::types
