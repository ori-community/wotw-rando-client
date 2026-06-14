#pragma once
#include <Modloader/app/structs/RendererCullingParameters_SliceList.h>
#include <Modloader/app/structs/RendererCullingParameters_SliceList__Boxed.h>
#include <Modloader/app/structs/RendererCullingParameters_SliceList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingParameters_SliceList {
        inline app::RendererCullingParameters_SliceList__Class** type_info() {
            static app::RendererCullingParameters_SliceList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingParameters_SliceList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingParameters_SliceList__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_SliceList__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingParameters", "SliceList");
        }
        inline app::RendererCullingParameters_SliceList* create() {
            return il2cpp::create_object<app::RendererCullingParameters_SliceList>(get_class());
        }
        inline app::RendererCullingParameters_SliceList__Boxed* box(app::RendererCullingParameters_SliceList value) {
            return il2cpp::box_value<app::RendererCullingParameters_SliceList__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_SliceList
} // namespace app::classes::types
