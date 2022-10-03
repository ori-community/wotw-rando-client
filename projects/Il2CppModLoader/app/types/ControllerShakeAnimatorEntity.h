#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControllerShakeAnimatorEntity {
        namespace {
            app::ControllerShakeAnimatorEntity__Class* type_info_ref = nullptr;
        }
        app::ControllerShakeAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::ControllerShakeAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ControllerShakeAnimatorEntity__Class>(type_info, "Moon.Timeline", "ControllerShakeAnimatorEntity");
        }
        inline app::ControllerShakeAnimatorEntity* create() {
            return il2cpp::create_object<app::ControllerShakeAnimatorEntity>(get_class());
        }
    } // namespace ControllerShakeAnimatorEntity
} // namespace app::classes::types
