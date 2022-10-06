#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RendererCullingCategoryResults {
        namespace {
            app::RendererCullingCategoryResults__Class* type_info_ref = nullptr;
        }
        app::RendererCullingCategoryResults__Class** type_info = &type_info_ref;
        inline app::RendererCullingCategoryResults__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryResults__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingCategoryResults");
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
        inline app::RendererCullingCategoryResults__Array* create_array(const std::vector<app::RendererCullingCategoryResults__Boxed>& items) {
            return il2cpp::array_new<app::RendererCullingCategoryResults__Array>(get_class(), items);
        }
    } // namespace RendererCullingCategoryResults
} // namespace app::classes::types
