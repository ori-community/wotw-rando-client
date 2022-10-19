#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetComponentButtonMask {
        inline app::IVRRenderModels_GetComponentButtonMask__Class** type_info = (app::IVRRenderModels_GetComponentButtonMask__Class**)(modloader::win::memory::resolve_rva(0x047501C0));
        inline app::IVRRenderModels_GetComponentButtonMask__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetComponentButtonMask__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetComponentButtonMask");
        }
        inline app::IVRRenderModels_GetComponentButtonMask* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetComponentButtonMask>(get_class());
        }
    } // namespace IVRRenderModels_GetComponentButtonMask
} // namespace app::classes::types
