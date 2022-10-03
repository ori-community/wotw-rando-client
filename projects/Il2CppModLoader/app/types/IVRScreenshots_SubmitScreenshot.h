#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_SubmitScreenshot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRScreenshots_SubmitScreenshot__Class** type_info;
        inline app::IVRScreenshots_SubmitScreenshot__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_SubmitScreenshot__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_SubmitScreenshot");
        }
        inline app::IVRScreenshots_SubmitScreenshot* create() {
            return il2cpp::create_object<app::IVRScreenshots_SubmitScreenshot>(get_class());
        }
    } // namespace IVRScreenshots_SubmitScreenshot
} // namespace app::classes::types
