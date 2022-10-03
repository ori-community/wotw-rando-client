#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Enable3DLighting {
        namespace {
            app::Enable3DLighting__Class* type_info_ref = nullptr;
        }
        app::Enable3DLighting__Class** type_info = &type_info_ref;
        inline app::Enable3DLighting__Class* get_class() {
            return il2cpp::get_class<app::Enable3DLighting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "Enable3DLighting");
        }
        inline app::Enable3DLighting* create() {
            return il2cpp::create_object<app::Enable3DLighting>(get_class());
        }
    } // namespace Enable3DLighting
} // namespace app::classes::types
