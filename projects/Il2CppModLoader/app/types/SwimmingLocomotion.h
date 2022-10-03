#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwimmingLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwimmingLocomotion__Class** type_info;
        inline app::SwimmingLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SwimmingLocomotion__Class>(type_info, "", "SwimmingLocomotion");
        }
        inline app::SwimmingLocomotion* create() {
            return il2cpp::create_object<app::SwimmingLocomotion>(get_class());
        }
    } // namespace SwimmingLocomotion
} // namespace app::classes::types
