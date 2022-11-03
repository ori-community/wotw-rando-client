#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_GetVulkanInstanceExtensionsRequired {
        inline app::IVRCompositor_GetVulkanInstanceExtensionsRequired__Class** type_info = (app::IVRCompositor_GetVulkanInstanceExtensionsRequired__Class**)(modloader::win::memory::resolve_rva(0x04739BC8));
        inline app::IVRCompositor_GetVulkanInstanceExtensionsRequired__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetVulkanInstanceExtensionsRequired__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetVulkanInstanceExtensionsRequired");
        }
        inline app::IVRCompositor_GetVulkanInstanceExtensionsRequired* create() {
            return il2cpp::create_object<app::IVRCompositor_GetVulkanInstanceExtensionsRequired>(get_class());
        }
    } // namespace IVRCompositor_GetVulkanInstanceExtensionsRequired
} // namespace app::classes::types
