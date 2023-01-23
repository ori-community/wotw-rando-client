#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRCompositor_GetMirrorTextureD3D11__Class.h>
#include <Modloader/app/structs/IVRCompositor_GetMirrorTextureD3D11.h>

namespace app::classes::types {
    namespace IVRCompositor_GetMirrorTextureD3D11 {
        inline app::IVRCompositor_GetMirrorTextureD3D11__Class** type_info = (app::IVRCompositor_GetMirrorTextureD3D11__Class**)(modloader::win::memory::resolve_rva(0x0471FEC0));
        inline app::IVRCompositor_GetMirrorTextureD3D11__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetMirrorTextureD3D11__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetMirrorTextureD3D11");
        }
        inline app::IVRCompositor_GetMirrorTextureD3D11* create() {
            return il2cpp::create_object<app::IVRCompositor_GetMirrorTextureD3D11>(get_class());
        }
    } // namespace IVRCompositor_GetMirrorTextureD3D11
} // namespace app::classes::types
