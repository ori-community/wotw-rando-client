#pragma once
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice.h>
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice__Array.h>
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice__Boxed.h>
#include <Modloader/app/structs/RendererCullingCategoryResults_Slice__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingCategoryResults_Slice {
        inline app::RendererCullingCategoryResults_Slice__Class** type_info() {
            static app::RendererCullingCategoryResults_Slice__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingCategoryResults_Slice__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingCategoryResults_Slice__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingCategoryResults_Slice__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingCategoryResults", "Slice");
        }
        inline app::RendererCullingCategoryResults_Slice* create() {
            return il2cpp::create_object<app::RendererCullingCategoryResults_Slice>(get_class());
        }
        inline app::RendererCullingCategoryResults_Slice__Boxed* box(app::RendererCullingCategoryResults_Slice value) {
            return il2cpp::box_value<app::RendererCullingCategoryResults_Slice__Boxed>(get_class(), value);
        }
        inline app::RendererCullingCategoryResults_Slice__Array* create_array(int size) {
            return il2cpp::array_new<app::RendererCullingCategoryResults_Slice__Array>(get_class(), size);
        }
        inline app::RendererCullingCategoryResults_Slice__Array* create_array(const std::vector<app::RendererCullingCategoryResults_Slice>& items) {
            return il2cpp::array_new<app::RendererCullingCategoryResults_Slice__Array>(get_class(), items);
        }
    } // namespace RendererCullingCategoryResults_Slice
} // namespace app::classes::types
