#pragma once
#include <Modloader/app/structs/CVRRenderModels_GetComponentStateUnion.h>
#include <Modloader/app/structs/CVRRenderModels_GetComponentStateUnion__Boxed.h>
#include <Modloader/app/structs/CVRRenderModels_GetComponentStateUnion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRRenderModels_GetComponentStateUnion {
        inline app::CVRRenderModels_GetComponentStateUnion__Class** type_info() {
            static app::CVRRenderModels_GetComponentStateUnion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CVRRenderModels_GetComponentStateUnion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CVRRenderModels_GetComponentStateUnion__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRRenderModels_GetComponentStateUnion__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRRenderModels", "GetComponentStateUnion");
        }
        inline app::CVRRenderModels_GetComponentStateUnion* create() {
            return il2cpp::create_object<app::CVRRenderModels_GetComponentStateUnion>(get_class());
        }
        inline app::CVRRenderModels_GetComponentStateUnion__Boxed* box(app::CVRRenderModels_GetComponentStateUnion value) {
            return il2cpp::box_value<app::CVRRenderModels_GetComponentStateUnion__Boxed>(get_class(), value);
        }
    } // namespace CVRRenderModels_GetComponentStateUnion
} // namespace app::classes::types
