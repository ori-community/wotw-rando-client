#pragma once
#include <Modloader/app/structs/IVRCompositor_UnlockGLSharedTextureForAccess.h>
#include <Modloader/app/structs/IVRCompositor_UnlockGLSharedTextureForAccess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_UnlockGLSharedTextureForAccess {
        inline app::IVRCompositor_UnlockGLSharedTextureForAccess__Class** type_info() {
            static app::IVRCompositor_UnlockGLSharedTextureForAccess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_UnlockGLSharedTextureForAccess__Class**)(modloader::win::memory::resolve_rva(0x04762AC8));
            }
            return cache;
        }
        inline app::IVRCompositor_UnlockGLSharedTextureForAccess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_UnlockGLSharedTextureForAccess__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_UnlockGLSharedTextureForAccess");
        }
        inline app::IVRCompositor_UnlockGLSharedTextureForAccess* create() {
            return il2cpp::create_object<app::IVRCompositor_UnlockGLSharedTextureForAccess>(get_class());
        }
    } // namespace IVRCompositor_UnlockGLSharedTextureForAccess
} // namespace app::classes::types
