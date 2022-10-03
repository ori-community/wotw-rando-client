#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSystem {
        namespace {
            app::CameraSystem__Class* type_info_ref = nullptr;
        }
        app::CameraSystem__Class** type_info = &type_info_ref;
        inline app::CameraSystem__Class* get_class() {
            return il2cpp::get_class<app::CameraSystem__Class>(type_info, "", "CameraSystem");
        }
        inline app::CameraSystem* create() {
            return il2cpp::create_object<app::CameraSystem>(get_class());
        }
    } // namespace CameraSystem
} // namespace app::classes::types
