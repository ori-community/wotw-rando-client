#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_CanRenderScene {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_CanRenderScene__Class** type_info;
        inline app::IVRCompositor_CanRenderScene__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CanRenderScene__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CanRenderScene");
        }
        inline app::IVRCompositor_CanRenderScene* create() {
            return il2cpp::create_object<app::IVRCompositor_CanRenderScene>(get_class());
        }
    } // namespace IVRCompositor_CanRenderScene
} // namespace app::classes::types
