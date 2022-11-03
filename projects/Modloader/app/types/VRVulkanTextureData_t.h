#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VRVulkanTextureData_t {
        namespace {
            inline app::VRVulkanTextureData_t__Class* type_info_ref = nullptr;
        }
        inline app::VRVulkanTextureData_t__Class** type_info = &type_info_ref;
        inline app::VRVulkanTextureData_t__Class* get_class() {
            return il2cpp::get_class<app::VRVulkanTextureData_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VRVulkanTextureData_t");
        }
        inline app::VRVulkanTextureData_t* create() {
            return il2cpp::create_object<app::VRVulkanTextureData_t>(get_class());
        }
        inline app::VRVulkanTextureData_t__Boxed* box(app::VRVulkanTextureData_t value) {
            return il2cpp::box_value<app::VRVulkanTextureData_t__Boxed>(get_class(), value);
        }
    } // namespace VRVulkanTextureData_t
} // namespace app::classes::types
