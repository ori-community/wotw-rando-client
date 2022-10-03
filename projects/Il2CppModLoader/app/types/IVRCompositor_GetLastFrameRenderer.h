#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetLastFrameRenderer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetLastFrameRenderer__Class** type_info;
        inline app::IVRCompositor_GetLastFrameRenderer__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetLastFrameRenderer__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetLastFrameRenderer");
        }
        inline app::IVRCompositor_GetLastFrameRenderer* create() {
            return il2cpp::create_object<app::IVRCompositor_GetLastFrameRenderer>(get_class());
        }
    } // namespace IVRCompositor_GetLastFrameRenderer
} // namespace app::classes::types
