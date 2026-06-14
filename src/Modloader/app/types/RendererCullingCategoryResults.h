#pragma once
#include <Modloader/app/structs/RendererCullingCategoryResults.h>
#include <Modloader/app/structs/RendererCullingCategoryResults__Array.h>
#include <Modloader/app/structs/RendererCullingCategoryResults__Boxed.h>
#include <Modloader/app/structs/RendererCullingCategoryResults__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingCategoryResults {
        inline app::RendererCullingCategoryResults__Class** type_info() {
            static app::RendererCullingCategoryResults__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingCategoryResults__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingCategoryResults__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryResults__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingCategoryResults");
        }
        inline app::RendererCullingCategoryResults* create() {
            return il2cpp::create_object<app::RendererCullingCategoryResults>(get_class());
        }
        inline app::RendererCullingCategoryResults__Boxed* box(app::RendererCullingCategoryResults value) {
            return il2cpp::box_value<app::RendererCullingCategoryResults__Boxed>(get_class(), value);
        }
        inline app::RendererCullingCategoryResults__Array* create_array(int size) {
            return il2cpp::array_new<app::RendererCullingCategoryResults__Array>(get_class(), size);
        }
        inline app::RendererCullingCategoryResults__Array* create_array(const std::vector<app::RendererCullingCategoryResults>& items) {
            return il2cpp::array_new<app::RendererCullingCategoryResults__Array>(get_class(), items);
        }
    } // namespace RendererCullingCategoryResults
} // namespace app::classes::types
