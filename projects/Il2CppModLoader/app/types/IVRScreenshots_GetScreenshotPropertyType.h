#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_GetScreenshotPropertyType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRScreenshots_GetScreenshotPropertyType__Class** type_info;
        inline app::IVRScreenshots_GetScreenshotPropertyType__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_GetScreenshotPropertyType__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_GetScreenshotPropertyType");
        }
        inline app::IVRScreenshots_GetScreenshotPropertyType* create() {
            return il2cpp::create_object<app::IVRScreenshots_GetScreenshotPropertyType>(get_class());
        }
    } // namespace IVRScreenshots_GetScreenshotPropertyType
} // namespace app::classes::types
