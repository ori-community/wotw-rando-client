#pragma once
#include <Modloader/app/structs/IVRRenderModels_FreeTexture.h>
#include <Modloader/app/structs/IVRRenderModels_FreeTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_FreeTexture {
        inline app::IVRRenderModels_FreeTexture__Class** type_info() {
            static app::IVRRenderModels_FreeTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRRenderModels_FreeTexture__Class**)(modloader::win::memory::resolve_rva(0x04743FB0));
            }
            return cache;
        }
        inline app::IVRRenderModels_FreeTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_FreeTexture__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_FreeTexture");
        }
        inline app::IVRRenderModels_FreeTexture* create() {
            return il2cpp::create_object<app::IVRRenderModels_FreeTexture>(get_class());
        }
    } // namespace IVRRenderModels_FreeTexture
} // namespace app::classes::types
