#pragma once
#include <Modloader/app/structs/IVRRenderModels_GetComponentName.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetComponentName {
        inline app::IVRRenderModels_GetComponentName__Class** type_info() {
            static app::IVRRenderModels_GetComponentName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_GetComponentName__Class**)(modloader::win::memory::resolve_rva(0x04722FF0));
            }
            return cache;
        }
        inline app::IVRRenderModels_GetComponentName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetComponentName__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetComponentName");
        }
        inline app::IVRRenderModels_GetComponentName* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetComponentName>(get_class());
        }
    } // namespace IVRRenderModels_GetComponentName
} // namespace app::classes::types
