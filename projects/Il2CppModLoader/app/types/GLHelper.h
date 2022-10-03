#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GLHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GLHelper__Class** type_info;
        inline app::GLHelper__Class* get_class() {
            return il2cpp::get_class<app::GLHelper__Class>(type_info, "Moon.Telemetry.Performance.visualization", "GLHelper");
        }
        inline app::GLHelper* create() {
            return il2cpp::create_object<app::GLHelper>(get_class());
        }
    } // namespace GLHelper
} // namespace app::classes::types
