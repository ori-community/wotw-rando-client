#pragma once
#include <Modloader/app/structs/RendererCullingCategoryParameters__Array.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingCategoryParameters__Array {
        inline app::RendererCullingCategoryParameters__Array__Class** type_info() {
            static app::RendererCullingCategoryParameters__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingCategoryParameters__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingCategoryParameters__Array__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryParameters__Array__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingCategoryParameters[]");
        }
        inline app::RendererCullingCategoryParameters__Array* create() {
            return il2cpp::create_object<app::RendererCullingCategoryParameters__Array>(get_class());
        }
    } // namespace RendererCullingCategoryParameters__Array
} // namespace app::classes::types
