#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsymLocomotionIdleBehaviour {
        namespace {
            inline app::AsymLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::AsymLocomotionIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::AsymLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AsymLocomotionIdleBehaviour__Class>(type_info, "", "AsymLocomotionIdleBehaviour");
        }
        inline app::AsymLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::AsymLocomotionIdleBehaviour>(get_class());
        }
    } // namespace AsymLocomotionIdleBehaviour
} // namespace app::classes::types
