#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EVRScreenshotType__Enum__Array {
        namespace {
            app::EVRScreenshotType__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::EVRScreenshotType__Enum__Array__Class** type_info = &type_info_ref;
        inline app::EVRScreenshotType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::EVRScreenshotType__Enum__Array__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRScreenshotType[]");
        }
        inline app::EVRScreenshotType__Enum__Array* create() {
            return il2cpp::create_object<app::EVRScreenshotType__Enum__Array>(get_class());
        }
    } // namespace EVRScreenshotType__Enum__Array
} // namespace app::classes::types
