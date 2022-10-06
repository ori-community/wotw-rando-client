#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StencilMaterial_MatEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StencilMaterial_MatEntry__Class** type_info;
        inline app::StencilMaterial_MatEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::StencilMaterial_MatEntry__Class>(type_info, "UnityEngine.UI", "StencilMaterial", "MatEntry");
        }
        inline app::StencilMaterial_MatEntry* create() {
            return il2cpp::create_object<app::StencilMaterial_MatEntry>(get_class());
        }
        inline app::StencilMaterial_MatEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::StencilMaterial_MatEntry__Array>(get_class(), size);
        }
        inline app::StencilMaterial_MatEntry__Array* create_array(const std::vector<app::StencilMaterial_MatEntry*>& items) {
            return il2cpp::array_new<app::StencilMaterial_MatEntry__Array>(get_class(), items);
        }
    } // namespace StencilMaterial_MatEntry
} // namespace app::classes::types
