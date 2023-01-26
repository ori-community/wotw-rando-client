#pragma once
#include <Modloader/app/structs/RendererCullingParameters_SliceList_z_FixedBuffer8.h>
#include <Modloader/app/structs/RendererCullingParameters_SliceList_z_FixedBuffer8__Boxed.h>
#include <Modloader/app/structs/RendererCullingParameters_SliceList_z_FixedBuffer8__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingParameters_SliceList_z_FixedBuffer8 {
        inline app::RendererCullingParameters_SliceList_z_FixedBuffer8__Class** type_info() {
            static app::RendererCullingParameters_SliceList_z_FixedBuffer8__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingParameters_SliceList_z_FixedBuffer8__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingParameters_SliceList_z_FixedBuffer8__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_SliceList_z_FixedBuffer8__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingParameters+SliceList", "<z>__FixedBuffer8");
        }
        inline app::RendererCullingParameters_SliceList_z_FixedBuffer8* create() {
            return il2cpp::create_object<app::RendererCullingParameters_SliceList_z_FixedBuffer8>(get_class());
        }
        inline app::RendererCullingParameters_SliceList_z_FixedBuffer8__Boxed* box(app::RendererCullingParameters_SliceList_z_FixedBuffer8 value) {
            return il2cpp::box_value<app::RendererCullingParameters_SliceList_z_FixedBuffer8__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_SliceList_z_FixedBuffer8
} // namespace app::classes::types
