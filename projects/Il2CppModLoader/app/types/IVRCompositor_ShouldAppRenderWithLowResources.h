#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ShouldAppRenderWithLowResources {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_ShouldAppRenderWithLowResources__Class** type_info;
        inline app::IVRCompositor_ShouldAppRenderWithLowResources__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ShouldAppRenderWithLowResources__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ShouldAppRenderWithLowResources");
        }
        inline app::IVRCompositor_ShouldAppRenderWithLowResources* create() {
            return il2cpp::create_object<app::IVRCompositor_ShouldAppRenderWithLowResources>(get_class());
        }
    } // namespace IVRCompositor_ShouldAppRenderWithLowResources
} // namespace app::classes::types
