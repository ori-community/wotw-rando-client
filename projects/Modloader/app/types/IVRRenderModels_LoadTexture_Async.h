#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRRenderModels_LoadTexture_Async__Class.h>
#include <Modloader/app/structs/IVRRenderModels_LoadTexture_Async.h>

namespace app::classes::types {
    namespace IVRRenderModels_LoadTexture_Async {
        inline app::IVRRenderModels_LoadTexture_Async__Class** type_info = (app::IVRRenderModels_LoadTexture_Async__Class**)(modloader::win::memory::resolve_rva(0x04751168));
        inline app::IVRRenderModels_LoadTexture_Async__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_LoadTexture_Async__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_LoadTexture_Async");
        }
        inline app::IVRRenderModels_LoadTexture_Async* create() {
            return il2cpp::create_object<app::IVRRenderModels_LoadTexture_Async>(get_class());
        }
    } // namespace IVRRenderModels_LoadTexture_Async
} // namespace app::classes::types
