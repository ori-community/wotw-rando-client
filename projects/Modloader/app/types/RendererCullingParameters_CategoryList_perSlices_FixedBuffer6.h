#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_perSlices_FixedBuffer6__Class.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_perSlices_FixedBuffer6.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_perSlices_FixedBuffer6__Boxed.h>

namespace app::classes::types {
    namespace RendererCullingParameters_CategoryList_perSlices_FixedBuffer6 {
        namespace {
            inline app::RendererCullingParameters_CategoryList_perSlices_FixedBuffer6__Class* type_info_ref = nullptr;
        }
        inline app::RendererCullingParameters_CategoryList_perSlices_FixedBuffer6__Class** type_info = &type_info_ref;
        inline app::RendererCullingParameters_CategoryList_perSlices_FixedBuffer6__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_CategoryList_perSlices_FixedBuffer6__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingParameters+CategoryList", "<perSlices>__FixedBuffer6");
        }
        inline app::RendererCullingParameters_CategoryList_perSlices_FixedBuffer6* create() {
            return il2cpp::create_object<app::RendererCullingParameters_CategoryList_perSlices_FixedBuffer6>(get_class());
        }
        inline app::RendererCullingParameters_CategoryList_perSlices_FixedBuffer6__Boxed* box(app::RendererCullingParameters_CategoryList_perSlices_FixedBuffer6 value) {
            return il2cpp::box_value<app::RendererCullingParameters_CategoryList_perSlices_FixedBuffer6__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_CategoryList_perSlices_FixedBuffer6
} // namespace app::classes::types
