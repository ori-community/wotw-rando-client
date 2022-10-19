#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VRCharacterController {
        namespace {
            inline app::VRCharacterController__Class* type_info_ref = nullptr;
        }
        inline app::VRCharacterController__Class** type_info = &type_info_ref;
        inline app::VRCharacterController__Class* get_class() {
            return il2cpp::get_class<app::VRCharacterController__Class>(type_info, "RootMotion.Demos", "VRCharacterController");
        }
        inline app::VRCharacterController* create() {
            return il2cpp::create_object<app::VRCharacterController>(get_class());
        }
    } // namespace VRCharacterController
} // namespace app::classes::types
