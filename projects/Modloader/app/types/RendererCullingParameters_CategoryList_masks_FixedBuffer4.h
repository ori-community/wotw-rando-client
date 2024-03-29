#pragma once
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_masks_FixedBuffer4.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_masks_FixedBuffer4__Boxed.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_masks_FixedBuffer4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RendererCullingParameters_CategoryList_masks_FixedBuffer4 {
        inline app::RendererCullingParameters_CategoryList_masks_FixedBuffer4__Class** type_info() {
            static app::RendererCullingParameters_CategoryList_masks_FixedBuffer4__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RendererCullingParameters_CategoryList_masks_FixedBuffer4__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RendererCullingParameters_CategoryList_masks_FixedBuffer4__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_CategoryList_masks_FixedBuffer4__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RendererCullingParameters+CategoryList", "<masks>__FixedBuffer4");
        }
        inline app::RendererCullingParameters_CategoryList_masks_FixedBuffer4* create() {
            return il2cpp::create_object<app::RendererCullingParameters_CategoryList_masks_FixedBuffer4>(get_class());
        }
        inline app::RendererCullingParameters_CategoryList_masks_FixedBuffer4__Boxed* box(app::RendererCullingParameters_CategoryList_masks_FixedBuffer4 value) {
            return il2cpp::box_value<app::RendererCullingParameters_CategoryList_masks_FixedBuffer4__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_CategoryList_masks_FixedBuffer4
} // namespace app::classes::types
