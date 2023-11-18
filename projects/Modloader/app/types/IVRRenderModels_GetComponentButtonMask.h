#pragma once
#include <Modloader/app/structs/IVRRenderModels_GetComponentButtonMask.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentButtonMask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetComponentButtonMask {
        inline app::IVRRenderModels_GetComponentButtonMask__Class** type_info() {
            static app::IVRRenderModels_GetComponentButtonMask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_GetComponentButtonMask__Class**)(modloader::win::memory::resolve_rva(0x047501C0));
            }
            return cache;
        }
        inline app::IVRRenderModels_GetComponentButtonMask__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetComponentButtonMask__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetComponentButtonMask");
        }
        inline app::IVRRenderModels_GetComponentButtonMask* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetComponentButtonMask>(get_class());
        }
    } // namespace IVRRenderModels_GetComponentButtonMask
} // namespace app::classes::types
