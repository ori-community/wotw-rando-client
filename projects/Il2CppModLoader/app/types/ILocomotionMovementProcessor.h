#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILocomotionMovementProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILocomotionMovementProcessor__Class** type_info;
        inline app::ILocomotionMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::ILocomotionMovementProcessor__Class>(type_info, "", "ILocomotionMovementProcessor");
        }
    } // namespace ILocomotionMovementProcessor
} // namespace app::classes::types
