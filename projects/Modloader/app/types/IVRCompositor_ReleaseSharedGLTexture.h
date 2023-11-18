#pragma once
#include <Modloader/app/structs/IVRCompositor_ReleaseSharedGLTexture.h>
#include <Modloader/app/structs/IVRCompositor_ReleaseSharedGLTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ReleaseSharedGLTexture {
        inline app::IVRCompositor_ReleaseSharedGLTexture__Class** type_info() {
            static app::IVRCompositor_ReleaseSharedGLTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_ReleaseSharedGLTexture__Class**)(modloader::win::memory::resolve_rva(0x04771480));
            }
            return cache;
        }
        inline app::IVRCompositor_ReleaseSharedGLTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ReleaseSharedGLTexture__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ReleaseSharedGLTexture");
        }
        inline app::IVRCompositor_ReleaseSharedGLTexture* create() {
            return il2cpp::create_object<app::IVRCompositor_ReleaseSharedGLTexture>(get_class());
        }
    } // namespace IVRCompositor_ReleaseSharedGLTexture
} // namespace app::classes::types
