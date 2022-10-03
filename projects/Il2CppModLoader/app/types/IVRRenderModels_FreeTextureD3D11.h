#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_FreeTextureD3D11 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_FreeTextureD3D11__Class** type_info;
        inline app::IVRRenderModels_FreeTextureD3D11__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_FreeTextureD3D11__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_FreeTextureD3D11");
        }
        inline app::IVRRenderModels_FreeTextureD3D11* create() {
            return il2cpp::create_object<app::IVRRenderModels_FreeTextureD3D11>(get_class());
        }
    } // namespace IVRRenderModels_FreeTextureD3D11
} // namespace app::classes::types
