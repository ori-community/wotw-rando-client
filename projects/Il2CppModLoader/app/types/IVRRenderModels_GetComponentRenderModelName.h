#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetComponentRenderModelName {
        inline app::IVRRenderModels_GetComponentRenderModelName__Class** type_info = (app::IVRRenderModels_GetComponentRenderModelName__Class**)(modloader::win::memory::resolve_rva(0x0474E4C0));
        inline app::IVRRenderModels_GetComponentRenderModelName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetComponentRenderModelName__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetComponentRenderModelName");
        }
        inline app::IVRRenderModels_GetComponentRenderModelName* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetComponentRenderModelName>(get_class());
        }
    } // namespace IVRRenderModels_GetComponentRenderModelName
} // namespace app::classes::types
