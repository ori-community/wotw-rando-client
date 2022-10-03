#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetMirrorTextureD3D11 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetMirrorTextureD3D11__Class** type_info;
        inline app::IVRCompositor_GetMirrorTextureD3D11__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetMirrorTextureD3D11__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetMirrorTextureD3D11");
        }
        inline app::IVRCompositor_GetMirrorTextureD3D11* create() {
            return il2cpp::create_object<app::IVRCompositor_GetMirrorTextureD3D11>(get_class());
        }
    } // namespace IVRCompositor_GetMirrorTextureD3D11
} // namespace app::classes::types
