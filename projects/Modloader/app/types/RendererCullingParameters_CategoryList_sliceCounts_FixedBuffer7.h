#pragma once
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Boxed.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7 {
        inline app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class** type_info() {
            static app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingParameters+CategoryList", "<sliceCounts>__FixedBuffer7");
        }
        inline app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7* create() {
            return il2cpp::create_object<app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7>(get_class());
        }
        inline app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Boxed* box(app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7 value) {
            return il2cpp::box_value<app::RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_CategoryList_sliceCounts_FixedBuffer7
} // namespace app::classes::types
