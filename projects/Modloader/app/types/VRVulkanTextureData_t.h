#pragma once
#include <Modloader/app/structs/VRVulkanTextureData_t.h>
#include <Modloader/app/structs/VRVulkanTextureData_t__Boxed.h>
#include <Modloader/app/structs/VRVulkanTextureData_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRVulkanTextureData_t {
        inline app::VRVulkanTextureData_t__Class** type_info() {
            static app::VRVulkanTextureData_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VRVulkanTextureData_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VRVulkanTextureData_t__Class* get_class() {
            return il2cpp::get_class<app::VRVulkanTextureData_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "VRVulkanTextureData_t");
        }
        inline app::VRVulkanTextureData_t* create() {
            return il2cpp::create_object<app::VRVulkanTextureData_t>(get_class());
        }
        inline app::VRVulkanTextureData_t__Boxed* box(app::VRVulkanTextureData_t value) {
            return il2cpp::box_value<app::VRVulkanTextureData_t__Boxed>(get_class(), value);
        }
    } // namespace VRVulkanTextureData_t
} // namespace app::classes::types
