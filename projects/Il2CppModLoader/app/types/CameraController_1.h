#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraController_1 {
        namespace {
            app::CameraController_1__Class* type_info_ref = nullptr;
        }
        app::CameraController_1__Class** type_info = &type_info_ref;
        inline app::CameraController_1__Class* get_class() {
            return il2cpp::get_class<app::CameraController_1__Class>(type_info, "", "CameraController");
        }
        inline app::CameraController_1* create() {
            return il2cpp::create_object<app::CameraController_1>(get_class());
        }
        inline app::CameraController_1__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraController_1__Array>(get_class(), size);
        }
        inline app::CameraController_1__Array* create_array(const std::vector<app::CameraController_1*>& items) {
            return il2cpp::array_new<app::CameraController_1__Array>(get_class(), items);
        }
    } // namespace CameraController_1
} // namespace app::classes::types
