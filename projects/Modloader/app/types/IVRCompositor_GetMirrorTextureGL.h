#pragma once
#include <Modloader/app/structs/IVRCompositor_GetMirrorTextureGL.h>
#include <Modloader/app/structs/IVRCompositor_GetMirrorTextureGL__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetMirrorTextureGL {
        inline app::IVRCompositor_GetMirrorTextureGL__Class** type_info() {
            static app::IVRCompositor_GetMirrorTextureGL__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetMirrorTextureGL__Class**)(modloader::win::memory::resolve_rva(0x047912A8));
            }
            return cache;
        }
        inline app::IVRCompositor_GetMirrorTextureGL__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetMirrorTextureGL__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetMirrorTextureGL");
        }
        inline app::IVRCompositor_GetMirrorTextureGL* create() {
            return il2cpp::create_object<app::IVRCompositor_GetMirrorTextureGL>(get_class());
        }
    } // namespace IVRCompositor_GetMirrorTextureGL
} // namespace app::classes::types
