#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StencilMaterial_MatEntry__Array {
        namespace {
            app::StencilMaterial_MatEntry__Array__Class* type_info_ref = nullptr;
        }
        app::StencilMaterial_MatEntry__Array__Class** type_info = &type_info_ref;
        inline app::StencilMaterial_MatEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::StencilMaterial_MatEntry__Array__Class>(type_info, "UnityEngine.UI", "StencilMaterial+MatEntry[]");
        }
        inline app::StencilMaterial_MatEntry__Array* create() {
            return il2cpp::create_object<app::StencilMaterial_MatEntry__Array>(get_class());
        }
    } // namespace StencilMaterial_MatEntry__Array
} // namespace app::classes::types
