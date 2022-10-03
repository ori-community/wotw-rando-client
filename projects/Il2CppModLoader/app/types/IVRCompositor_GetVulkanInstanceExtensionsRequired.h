#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetVulkanInstanceExtensionsRequired {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetVulkanInstanceExtensionsRequired__Class** type_info;
        inline app::IVRCompositor_GetVulkanInstanceExtensionsRequired__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetVulkanInstanceExtensionsRequired__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetVulkanInstanceExtensionsRequired");
        }
        inline app::IVRCompositor_GetVulkanInstanceExtensionsRequired* create() {
            return il2cpp::create_object<app::IVRCompositor_GetVulkanInstanceExtensionsRequired>(get_class());
        }
    } // namespace IVRCompositor_GetVulkanInstanceExtensionsRequired
} // namespace app::classes::types
