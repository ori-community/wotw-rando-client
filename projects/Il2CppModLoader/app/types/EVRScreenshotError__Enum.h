#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRScreenshotError__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EVRScreenshotError__Enum__Class** type_info;
        inline app::EVRScreenshotError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRScreenshotError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRScreenshotError");
        }
        inline app::EVRScreenshotError__Enum* create() {
            return il2cpp::create_object<app::EVRScreenshotError__Enum>(get_class());
        }
    } // namespace EVRScreenshotError__Enum
} // namespace app::classes::types
