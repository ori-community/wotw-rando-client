#pragma once
#include <Modloader/app/structs/StencilMaterial_MatEntry__Array.h>
#include <Modloader/app/structs/StencilMaterial_MatEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StencilMaterial_MatEntry__Array {
        inline app::StencilMaterial_MatEntry__Array__Class** type_info() {
            static app::StencilMaterial_MatEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StencilMaterial_MatEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StencilMaterial_MatEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::StencilMaterial_MatEntry__Array__Class>(type_info(), "UnityEngine.UI", "StencilMaterial+MatEntry[]");
        }
        inline app::StencilMaterial_MatEntry__Array* create() {
            return il2cpp::create_object<app::StencilMaterial_MatEntry__Array>(get_class());
        }
    } // namespace StencilMaterial_MatEntry__Array
} // namespace app::classes::types
