#pragma once
#include <Modloader/app/structs/IVRCompositor_LockGLSharedTextureForAccess.h>
#include <Modloader/app/structs/IVRCompositor_LockGLSharedTextureForAccess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_LockGLSharedTextureForAccess {
        inline app::IVRCompositor_LockGLSharedTextureForAccess__Class** type_info() {
            static app::IVRCompositor_LockGLSharedTextureForAccess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_LockGLSharedTextureForAccess__Class**)(modloader::win::memory::resolve_rva(0x0473B810));
            }
            return cache;
        }
        inline app::IVRCompositor_LockGLSharedTextureForAccess__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_LockGLSharedTextureForAccess__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_LockGLSharedTextureForAccess");
        }
        inline app::IVRCompositor_LockGLSharedTextureForAccess* create() {
            return il2cpp::create_object<app::IVRCompositor_LockGLSharedTextureForAccess>(get_class());
        }
    } // namespace IVRCompositor_LockGLSharedTextureForAccess
} // namespace app::classes::types
