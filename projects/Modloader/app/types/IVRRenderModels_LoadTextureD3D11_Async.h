#pragma once
#include <Modloader/app/structs/IVRRenderModels_LoadTextureD3D11_Async.h>
#include <Modloader/app/structs/IVRRenderModels_LoadTextureD3D11_Async__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_LoadTextureD3D11_Async {
        inline app::IVRRenderModels_LoadTextureD3D11_Async__Class** type_info() {
            static app::IVRRenderModels_LoadTextureD3D11_Async__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_LoadTextureD3D11_Async__Class**)(modloader::win::memory::resolve_rva(0x04741250));
            }
            return cache;
        }
        inline app::IVRRenderModels_LoadTextureD3D11_Async__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_LoadTextureD3D11_Async__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_LoadTextureD3D11_Async");
        }
        inline app::IVRRenderModels_LoadTextureD3D11_Async* create() {
            return il2cpp::create_object<app::IVRRenderModels_LoadTextureD3D11_Async>(get_class());
        }
    } // namespace IVRRenderModels_LoadTextureD3D11_Async
} // namespace app::classes::types
