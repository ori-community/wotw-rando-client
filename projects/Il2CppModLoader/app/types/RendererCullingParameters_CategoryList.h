#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RendererCullingParameters_CategoryList {
        namespace {
            inline app::RendererCullingParameters_CategoryList__Class* type_info_ref = nullptr;
        }
        inline app::RendererCullingParameters_CategoryList__Class** type_info = &type_info_ref;
        inline app::RendererCullingParameters_CategoryList__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_CategoryList__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingParameters", "CategoryList");
        }
        inline app::RendererCullingParameters_CategoryList* create() {
            return il2cpp::create_object<app::RendererCullingParameters_CategoryList>(get_class());
        }
        inline app::RendererCullingParameters_CategoryList__Boxed* box(app::RendererCullingParameters_CategoryList value) {
            return il2cpp::box_value<app::RendererCullingParameters_CategoryList__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_CategoryList
} // namespace app::classes::types
