#pragma once
#include <Modloader/app/structs/IVRCompositor_GetVulkanDeviceExtensionsRequired.h>
#include <Modloader/app/structs/IVRCompositor_GetVulkanDeviceExtensionsRequired__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetVulkanDeviceExtensionsRequired {
        inline app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class** type_info() {
            static app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class**)(modloader::win::memory::resolve_rva(0x0473E8C8));
            }
            return cache;
        }
        inline app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetVulkanDeviceExtensionsRequired");
        }
        inline app::IVRCompositor_GetVulkanDeviceExtensionsRequired* create() {
            return il2cpp::create_object<app::IVRCompositor_GetVulkanDeviceExtensionsRequired>(get_class());
        }
    } // namespace IVRCompositor_GetVulkanDeviceExtensionsRequired
} // namespace app::classes::types
