#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionAnimation {
        namespace {
            app::LocomotionAnimation__Class* type_info_ref = nullptr;
        }
        app::LocomotionAnimation__Class** type_info = &type_info_ref;
        inline app::LocomotionAnimation__Class* get_class() {
            return il2cpp::get_class<app::LocomotionAnimation__Class>(type_info, "Moon", "LocomotionAnimation");
        }
        inline app::LocomotionAnimation* create() {
            return il2cpp::create_object<app::LocomotionAnimation>(get_class());
        }
        inline app::LocomotionAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::LocomotionAnimation__Array>(get_class(), size);
        }
    } // namespace LocomotionAnimation
} // namespace app::classes::types
