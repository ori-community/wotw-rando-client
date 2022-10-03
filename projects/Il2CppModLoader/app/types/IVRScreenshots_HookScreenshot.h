#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRScreenshots_HookScreenshot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRScreenshots_HookScreenshot__Class** type_info;
        inline app::IVRScreenshots_HookScreenshot__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRScreenshots_HookScreenshot__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRScreenshots", "_HookScreenshot");
        }
        inline app::IVRScreenshots_HookScreenshot* create() {
            return il2cpp::create_object<app::IVRScreenshots_HookScreenshot>(get_class());
        }
    } // namespace IVRScreenshots_HookScreenshot
} // namespace app::classes::types
