#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_LockGLSharedTextureForAccess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_LockGLSharedTextureForAccess__Class** type_info;
        inline app::IVRCompositor_LockGLSharedTextureForAccess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_LockGLSharedTextureForAccess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_LockGLSharedTextureForAccess");
        }
        inline app::IVRCompositor_LockGLSharedTextureForAccess* create() {
            return il2cpp::create_object<app::IVRCompositor_LockGLSharedTextureForAccess>(get_class());
        }
    } // namespace IVRCompositor_LockGLSharedTextureForAccess
} // namespace app::classes::types
