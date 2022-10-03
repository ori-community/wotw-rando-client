#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocomotionUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocomotionUtils__Class** type_info;
        inline app::LocomotionUtils__Class* get_class() {
            return il2cpp::get_class<app::LocomotionUtils__Class>(type_info, "", "LocomotionUtils");
        }
        inline app::LocomotionUtils* create() {
            return il2cpp::create_object<app::LocomotionUtils>(get_class());
        }
    } // namespace LocomotionUtils
} // namespace app::classes::types
