#pragma once
#include <Modloader/app/structs/IVRRenderModels_GetComponentState.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetComponentState {
        inline app::IVRRenderModels_GetComponentState__Class** type_info() {
            static app::IVRRenderModels_GetComponentState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_GetComponentState__Class**)(modloader::win::memory::resolve_rva(0x0474F2C0));
            }
            return cache;
        }
        inline app::IVRRenderModels_GetComponentState__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetComponentState__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetComponentState");
        }
        inline app::IVRRenderModels_GetComponentState* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetComponentState>(get_class());
        }
    } // namespace IVRRenderModels_GetComponentState
} // namespace app::classes::types
