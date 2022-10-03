#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RendererCullingCategoryResults__Array {
        namespace {
            app::RendererCullingCategoryResults__Array__Class* type_info_ref = nullptr;
        }
        app::RendererCullingCategoryResults__Array__Class** type_info = &type_info_ref;
        inline app::RendererCullingCategoryResults__Array__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryResults__Array__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingCategoryResults[]");
        }
        inline app::RendererCullingCategoryResults__Array* create() {
            return il2cpp::create_object<app::RendererCullingCategoryResults__Array>(get_class());
        }
    } // namespace RendererCullingCategoryResults__Array
} // namespace app::classes::types
