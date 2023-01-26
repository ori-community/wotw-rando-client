#pragma once
#include <Modloader/app/structs/RendererCullingCategoryParameters.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters__Array.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters__Boxed.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingCategoryParameters {
        inline app::RendererCullingCategoryParameters__Class** type_info() {
            static app::RendererCullingCategoryParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingCategoryParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingCategoryParameters__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryParameters__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingCategoryParameters");
        }
        inline app::RendererCullingCategoryParameters* create() {
            return il2cpp::create_object<app::RendererCullingCategoryParameters>(get_class());
        }
        inline app::RendererCullingCategoryParameters__Boxed* box(app::RendererCullingCategoryParameters value) {
            return il2cpp::box_value<app::RendererCullingCategoryParameters__Boxed>(get_class(), value);
        }
        inline app::RendererCullingCategoryParameters__Array* create_array(int size) {
            return il2cpp::array_new<app::RendererCullingCategoryParameters__Array>(get_class(), size);
        }
        inline app::RendererCullingCategoryParameters__Array* create_array(const std::vector<app::RendererCullingCategoryParameters>& items) {
            return il2cpp::array_new<app::RendererCullingCategoryParameters__Array>(get_class(), items);
        }
    } // namespace RendererCullingCategoryParameters
} // namespace app::classes::types
