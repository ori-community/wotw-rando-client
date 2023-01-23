#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters__Array__Class.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters__Array.h>

namespace app::classes::types {
    namespace RendererCullingCategoryParameters__Array {
        namespace {
            inline app::RendererCullingCategoryParameters__Array__Class* type_info_ref = nullptr;
        }
        inline app::RendererCullingCategoryParameters__Array__Class** type_info = &type_info_ref;
        inline app::RendererCullingCategoryParameters__Array__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingCategoryParameters__Array__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingCategoryParameters[]");
        }
        inline app::RendererCullingCategoryParameters__Array* create() {
            return il2cpp::create_object<app::RendererCullingCategoryParameters__Array>(get_class());
        }
    } // namespace RendererCullingCategoryParameters__Array
} // namespace app::classes::types
