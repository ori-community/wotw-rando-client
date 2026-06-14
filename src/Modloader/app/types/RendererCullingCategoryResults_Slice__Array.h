#pragma once
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice__Array.h>
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingCategoryResults_Slice__Array {
        inline app::RendererCullingCategoryResults_Slice__Array__Class** type_info() {
            static app::RendererCullingCategoryResults_Slice__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingCategoryResults_Slice__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingCategoryResults_Slice__Array__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryResults_Slice__Array__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingCategoryResults+Slice[]");
        }
        inline app::RendererCullingCategoryResults_Slice__Array* create() {
            return il2cpp::create_object<app::RendererCullingCategoryResults_Slice__Array>(get_class());
        }
    } // namespace RendererCullingCategoryResults_Slice__Array
} // namespace app::classes::types
