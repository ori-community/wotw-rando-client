#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRRenderModels_FreeTextureD3D11__Class.h>
#include <Modloader/app/structs/IVRRenderModels_FreeTextureD3D11.h>

namespace app::classes::types {
    namespace IVRRenderModels_FreeTextureD3D11 {
        inline app::IVRRenderModels_FreeTextureD3D11__Class** type_info = (app::IVRRenderModels_FreeTextureD3D11__Class**)(modloader::win::memory::resolve_rva(0x0472D648));
        inline app::IVRRenderModels_FreeTextureD3D11__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_FreeTextureD3D11__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_FreeTextureD3D11");
        }
        inline app::IVRRenderModels_FreeTextureD3D11* create() {
            return il2cpp::create_object<app::IVRRenderModels_FreeTextureD3D11>(get_class());
        }
    } // namespace IVRRenderModels_FreeTextureD3D11
} // namespace app::classes::types
