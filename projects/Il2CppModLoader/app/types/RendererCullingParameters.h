#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RendererCullingParameters {
        namespace {
            inline app::RendererCullingParameters__Class* type_info_ref = nullptr;
        }
        inline app::RendererCullingParameters__Class** type_info = &type_info_ref;
        inline app::RendererCullingParameters__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingParameters__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingParameters");
        }
        inline app::RendererCullingParameters* create() {
            return il2cpp::create_object<app::RendererCullingParameters>(get_class());
        }
        inline app::RendererCullingParameters__Boxed* box(app::RendererCullingParameters value) {
            return il2cpp::box_value<app::RendererCullingParameters__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters
} // namespace app::classes::types
