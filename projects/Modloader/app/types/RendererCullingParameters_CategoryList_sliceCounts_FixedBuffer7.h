#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7 {
        namespace {
            inline app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class* type_info_ref = nullptr;
        }
        inline app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class** type_info = &type_info_ref;
        inline app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingParameters+CategoryList", "<sliceCounts>__FixedBuffer7");
        }
        inline app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7* create() {
            return il2cpp::create_object<app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7>(get_class());
        }
        inline app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Boxed* box(app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7 value) {
            return il2cpp::box_value<app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7
} // namespace app::classes::types
