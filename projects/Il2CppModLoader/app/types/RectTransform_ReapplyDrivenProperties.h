#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RectTransform_ReapplyDrivenProperties {
        inline app::RectTransform_ReapplyDrivenProperties__Class** type_info = (app::RectTransform_ReapplyDrivenProperties__Class**)(modloader::win::memory::resolve_rva(0x047283C8));
        inline app::RectTransform_ReapplyDrivenProperties__Class* get_class() {
            return il2cpp::get_nested_class<app::RectTransform_ReapplyDrivenProperties__Class>(type_info, "UnityEngine", "RectTransform", "ReapplyDrivenProperties");
        }
        inline app::RectTransform_ReapplyDrivenProperties* create() {
            return il2cpp::create_object<app::RectTransform_ReapplyDrivenProperties>(get_class());
        }
    } // namespace RectTransform_ReapplyDrivenProperties
} // namespace app::classes::types
