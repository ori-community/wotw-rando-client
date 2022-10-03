#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraTargetSettings__Array {
        namespace {
            app::CameraTargetSettings__Array__Class* type_info_ref = nullptr;
        }
        app::CameraTargetSettings__Array__Class** type_info = &type_info_ref;
        inline app::CameraTargetSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraTargetSettings__Array__Class>(type_info, "Moon", "CameraTargetSettings[]");
        }
        inline app::CameraTargetSettings__Array* create() {
            return il2cpp::create_object<app::CameraTargetSettings__Array>(get_class());
        }
    } // namespace CameraTargetSettings__Array
} // namespace app::classes::types
