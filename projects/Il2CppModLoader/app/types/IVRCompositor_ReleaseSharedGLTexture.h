#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ReleaseSharedGLTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_ReleaseSharedGLTexture__Class** type_info;
        inline app::IVRCompositor_ReleaseSharedGLTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ReleaseSharedGLTexture__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ReleaseSharedGLTexture");
        }
        inline app::IVRCompositor_ReleaseSharedGLTexture* create() {
            return il2cpp::create_object<app::IVRCompositor_ReleaseSharedGLTexture>(get_class());
        }
    } // namespace IVRCompositor_ReleaseSharedGLTexture
} // namespace app::classes::types
