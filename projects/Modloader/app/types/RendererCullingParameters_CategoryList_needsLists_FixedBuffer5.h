#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_needsLists_FixedBuffer5__Class.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_needsLists_FixedBuffer5.h>
#include <Modloader/app/structs/RendererCullingParameters_CategoryList_needsLists_FixedBuffer5__Boxed.h>

namespace app::classes::types {
    namespace RendererCullingParameters_CategoryList_needsLists_FixedBuffer5 {
        namespace {
            inline app::RendererCullingParameters_CategoryList_needsLists_FixedBuffer5__Class* type_info_ref = nullptr;
        }
        inline app::RendererCullingParameters_CategoryList_needsLists_FixedBuffer5__Class** type_info = &type_info_ref;
        inline app::RendererCullingParameters_CategoryList_needsLists_FixedBuffer5__Class* get_class() {
            return il2cpp::get_nested_class<app::RendererCullingParameters_CategoryList_needsLists_FixedBuffer5__Class>(type_info, "UnityEngine.Experimental.Rendering", "RendererCullingParameters+CategoryList", "<needsLists>__FixedBuffer5");
        }
        inline app::RendererCullingParameters_CategoryList_needsLists_FixedBuffer5* create() {
            return il2cpp::create_object<app::RendererCullingParameters_CategoryList_needsLists_FixedBuffer5>(get_class());
        }
        inline app::RendererCullingParameters_CategoryList_needsLists_FixedBuffer5__Boxed* box(app::RendererCullingParameters_CategoryList_needsLists_FixedBuffer5 value) {
            return il2cpp::box_value<app::RendererCullingParameters_CategoryList_needsLists_FixedBuffer5__Boxed>(get_class(), value);
        }
    } // namespace RendererCullingParameters_CategoryList_needsLists_FixedBuffer5
} // namespace app::classes::types
