#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraPlugin {
        namespace {
            app::CameraPlugin__Class* type_info_ref = nullptr;
        }
        app::CameraPlugin__Class** type_info = &type_info_ref;
        inline app::CameraPlugin__Class* get_class() {
            return il2cpp::get_class<app::CameraPlugin__Class>(type_info, "", "CameraPlugin");
        }
        inline app::CameraPlugin* create() {
            return il2cpp::create_object<app::CameraPlugin>(get_class());
        }
    } // namespace CameraPlugin
} // namespace app::classes::types
