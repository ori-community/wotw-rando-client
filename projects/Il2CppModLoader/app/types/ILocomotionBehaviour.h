#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILocomotionBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILocomotionBehaviour__Class** type_info;
        inline app::ILocomotionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ILocomotionBehaviour__Class>(type_info, "", "ILocomotionBehaviour");
        }
        inline app::ILocomotionBehaviour* create() {
            return il2cpp::create_object<app::ILocomotionBehaviour>(get_class());
        }
    } // namespace ILocomotionBehaviour
} // namespace app::classes::types
