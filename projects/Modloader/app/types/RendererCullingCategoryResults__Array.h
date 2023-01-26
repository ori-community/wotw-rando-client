#pragma once
#include <Modloader/app/structs/RendererCullingCategoryResults__Array.h>
#include <Modloader/app/structs/RendererCullingCategoryResults__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingCategoryResults__Array {
        inline app::RendererCullingCategoryResults__Array__Class** type_info() {
            static app::RendererCullingCategoryResults__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingCategoryResults__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingCategoryResults__Array__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryResults__Array__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingCategoryResults[]");
        }
        inline app::RendererCullingCategoryResults__Array* create() {
            return il2cpp::create_object<app::RendererCullingCategoryResults__Array>(get_class());
        }
    } // namespace RendererCullingCategoryResults__Array
} // namespace app::classes::types
