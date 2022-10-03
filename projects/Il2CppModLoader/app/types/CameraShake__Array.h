#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraShake__Array {
        namespace {
            app::CameraShake__Array__Class* type_info_ref = nullptr;
        }
        app::CameraShake__Array__Class** type_info = &type_info_ref;
        inline app::CameraShake__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraShake__Array__Class>(type_info, "", "CameraShake[]");
        }
        inline app::CameraShake__Array* create() {
            return il2cpp::create_object<app::CameraShake__Array>(get_class());
        }
    } // namespace CameraShake__Array
} // namespace app::classes::types
