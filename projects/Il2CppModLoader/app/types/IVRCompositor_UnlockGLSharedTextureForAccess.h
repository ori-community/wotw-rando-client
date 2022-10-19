#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_UnlockGLSharedTextureForAccess {
        inline app::IVRCompositor_UnlockGLSharedTextureForAccess__Class** type_info = (app::IVRCompositor_UnlockGLSharedTextureForAccess__Class**)(modloader::win::memory::resolve_rva(0x04762AC8));
        inline app::IVRCompositor_UnlockGLSharedTextureForAccess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_UnlockGLSharedTextureForAccess__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_UnlockGLSharedTextureForAccess");
        }
        inline app::IVRCompositor_UnlockGLSharedTextureForAccess* create() {
            return il2cpp::create_object<app::IVRCompositor_UnlockGLSharedTextureForAccess>(get_class());
        }
    } // namespace IVRCompositor_UnlockGLSharedTextureForAccess
} // namespace app::classes::types
