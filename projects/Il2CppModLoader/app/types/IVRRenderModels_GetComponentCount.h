#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetComponentCount {
        inline app::IVRRenderModels_GetComponentCount__Class** type_info = (app::IVRRenderModels_GetComponentCount__Class**)(modloader::win::memory::resolve_rva(0x0471F2C0));
        inline app::IVRRenderModels_GetComponentCount__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetComponentCount__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetComponentCount");
        }
        inline app::IVRRenderModels_GetComponentCount* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetComponentCount>(get_class());
        }
    } // namespace IVRRenderModels_GetComponentCount
} // namespace app::classes::types
