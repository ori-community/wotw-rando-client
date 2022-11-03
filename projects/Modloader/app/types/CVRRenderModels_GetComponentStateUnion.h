#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRRenderModels_GetComponentStateUnion {
        namespace {
            inline app::CVRRenderModels_GetComponentStateUnion__Class* type_info_ref = nullptr;
        }
        inline app::CVRRenderModels_GetComponentStateUnion__Class** type_info = &type_info_ref;
        inline app::CVRRenderModels_GetComponentStateUnion__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRRenderModels_GetComponentStateUnion__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRRenderModels", "GetComponentStateUnion");
        }
        inline app::CVRRenderModels_GetComponentStateUnion* create() {
            return il2cpp::create_object<app::CVRRenderModels_GetComponentStateUnion>(get_class());
        }
        inline app::CVRRenderModels_GetComponentStateUnion__Boxed* box(app::CVRRenderModels_GetComponentStateUnion value) {
            return il2cpp::box_value<app::CVRRenderModels_GetComponentStateUnion__Boxed>(get_class(), value);
        }
    } // namespace CVRRenderModels_GetComponentStateUnion
} // namespace app::classes::types
