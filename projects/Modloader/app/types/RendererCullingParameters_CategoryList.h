#pragma once
#include <Modloader/app/structs/RendererCullingParameters_CategoryList.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList__Boxed.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingParameters_CategoryList {
        inline app::RendererCullingParameters_CategoryList__Class** type_info() {
            static app::RendererCullingParameters_CategoryList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingParameters_CategoryList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingParameters_CategoryList__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_CategoryList__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingParameters", "CategoryList");
        }
        inline app::RendererCullingParameters_CategoryList* create() {
            return il2cpp::create_object<app::RendererCullingParameters_CategoryList>(get_class());
        }
        inline app::RendererCullingParameters_CategoryList__Boxed* box(app::RendererCullingParameters_CategoryList value) {
            return il2cpp::box_value<app::RendererCullingParameters_CategoryList__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_CategoryList
} // namespace app::classes::types
