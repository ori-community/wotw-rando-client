#pragma once
#include <Modloader/app/structs/IVRCompositor_GetMirrorTextureD3D11.h>
#include <Modloader/app/structs/IVRCompositor_GetMirrorTextureD3D11__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetMirrorTextureD3D11 {
        inline app::IVRCompositor_GetMirrorTextureD3D11__Class** type_info() {
            static app::IVRCompositor_GetMirrorTextureD3D11__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetMirrorTextureD3D11__Class**)(modloader::win::memory::resolve_rva(0x0471FEC0));
            }
            return cache;
        }
        inline app::IVRCompositor_GetMirrorTextureD3D11__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetMirrorTextureD3D11__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetMirrorTextureD3D11");
        }
        inline app::IVRCompositor_GetMirrorTextureD3D11* create() {
            return il2cpp::create_object<app::IVRCompositor_GetMirrorTextureD3D11>(get_class());
        }
    } // namespace IVRCompositor_GetMirrorTextureD3D11
} // namespace app::classes::types
