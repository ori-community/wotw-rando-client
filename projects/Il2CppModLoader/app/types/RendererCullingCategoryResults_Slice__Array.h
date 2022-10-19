#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RendererCullingCategoryResults_Slice__Array {
        namespace {
            inline app::RendererCullingCategoryResults_Slice__Array__Class* type_info_ref = nullptr;
        }
        inline app::RendererCullingCategoryResults_Slice__Array__Class** type_info = &type_info_ref;
        inline app::RendererCullingCategoryResults_Slice__Array__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryResults_Slice__Array__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingCategoryResults+Slice[]");
        }
        inline app::RendererCullingCategoryResults_Slice__Array* create() {
            return il2cpp::create_object<app::RendererCullingCategoryResults_Slice__Array>(get_class());
        }
    } // namespace RendererCullingCategoryResults_Slice__Array
} // namespace app::classes::types
