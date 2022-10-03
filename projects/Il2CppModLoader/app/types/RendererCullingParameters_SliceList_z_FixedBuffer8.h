#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RendererCullingParameters_SliceList_z_FixedBuffer8 {
        namespace {
            app::RendererCullingParameters_SliceList_z_FixedBuffer8__Class* type_info_ref = nullptr;
        }
        app::RendererCullingParameters_SliceList_z_FixedBuffer8__Class** type_info = &type_info_ref;
        inline app::RendererCullingParameters_SliceList_z_FixedBuffer8__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_SliceList_z_FixedBuffer8__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingParameters+SliceList", "<z>__FixedBuffer8");
        }
        inline app::RendererCullingParameters_SliceList_z_FixedBuffer8* create() {
            return il2cpp::create_object<app::RendererCullingParameters_SliceList_z_FixedBuffer8>(get_class());
        }
        inline app::RendererCullingParameters_SliceList_z_FixedBuffer8__Boxed* box(app::RendererCullingParameters_SliceList_z_FixedBuffer8 value) {
            return il2cpp::box_value<app::RendererCullingParameters_SliceList_z_FixedBuffer8__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_SliceList_z_FixedBuffer8
} // namespace app::classes::types
