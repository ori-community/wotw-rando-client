#pragma once
#include <Modloader/app/structs/RendererCullingParameters.h>
#include <Modloader/app/structs/RendererCullingParameters__Boxed.h>
#include <Modloader/app/structs/RendererCullingParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingParameters {
        inline app::RendererCullingParameters__Class** type_info() {
            static app::RendererCullingParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingParameters__Class* get_class() {
            return il2cpp::get_class<app::RendererCullingParameters__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingParameters");
        }
        inline app::RendererCullingParameters* create() {
            return il2cpp::create_object<app::RendererCullingParameters>(get_class());
        }
        inline app::RendererCullingParameters__Boxed* box(app::RendererCullingParameters value) {
            return il2cpp::box_value<app::RendererCullingParameters__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters
} // namespace app::classes::types
