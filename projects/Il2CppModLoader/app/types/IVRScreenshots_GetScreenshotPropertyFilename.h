#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_GetScreenshotPropertyFilename {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRScreenshots_GetScreenshotPropertyFilename__Class** type_info;
        inline app::IVRScreenshots_GetScreenshotPropertyFilename__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_GetScreenshotPropertyFilename__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_GetScreenshotPropertyFilename");
        }
        inline app::IVRScreenshots_GetScreenshotPropertyFilename* create() {
            return il2cpp::create_object<app::IVRScreenshots_GetScreenshotPropertyFilename>(get_class());
        }
    } // namespace IVRScreenshots_GetScreenshotPropertyFilename
} // namespace app::classes::types
