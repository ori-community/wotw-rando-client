#pragma once
#include <Modloader/app/structs/IVRRenderModels_GetComponentCount.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentCount__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetComponentCount {
        inline app::IVRRenderModels_GetComponentCount__Class** type_info() {
            static app::IVRRenderModels_GetComponentCount__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_GetComponentCount__Class**)(modloader::win::memory::resolve_rva(0x0471F2C0));
            }
            return cache;
        }
        inline app::IVRRenderModels_GetComponentCount__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetComponentCount__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetComponentCount");
        }
        inline app::IVRRenderModels_GetComponentCount* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetComponentCount>(get_class());
        }
    } // namespace IVRRenderModels_GetComponentCount
} // namespace app::classes::types
