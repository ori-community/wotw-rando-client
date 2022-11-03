#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RendererCullingParameters_SliceList {
        namespace {
            inline app::RendererCullingParameters_SliceList__Class* type_info_ref = nullptr;
        }
        inline app::RendererCullingParameters_SliceList__Class** type_info = &type_info_ref;
        inline app::RendererCullingParameters_SliceList__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_SliceList__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingParameters", "SliceList");
        }
        inline app::RendererCullingParameters_SliceList* create() {
            return il2cpp::create_object<app::RendererCullingParameters_SliceList>(get_class());
        }
        inline app::RendererCullingParameters_SliceList__Boxed* box(app::RendererCullingParameters_SliceList value) {
            return il2cpp::box_value<app::RendererCullingParameters_SliceList__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_SliceList
} // namespace app::classes::types
