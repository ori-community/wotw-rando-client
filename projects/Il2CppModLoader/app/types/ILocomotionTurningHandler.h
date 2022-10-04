#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILocomotionTurningHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILocomotionTurningHandler__Class** type_info;
        inline app::ILocomotionTurningHandler__Class* get_class() {
            return il2cpp::get_class<app::ILocomotionTurningHandler__Class>(type_info, "", "ILocomotionTurningHandler");
        }
        inline app::ILocomotionTurningHandler* create() {
            return il2cpp::create_object<app::ILocomotionTurningHandler>(get_class());
        }
    } // namespace ILocomotionTurningHandler
} // namespace app::classes::types
