#pragma once
#include <Modloader/app/structs/VRCharacterController.h>
#include <Modloader/app/structs/VRCharacterController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRCharacterController {
        inline app::VRCharacterController__Class** type_info() {
            static app::VRCharacterController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VRCharacterController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VRCharacterController__Class* get_class() {
            return il2cpp::get_class<app::VRCharacterController__Class>(type_info(), "RootMotion.Demos", "VRCharacterController");
        }
        inline app::VRCharacterController* create() {
            return il2cpp::create_object<app::VRCharacterController>(get_class());
        }
    } // namespace VRCharacterController
} // namespace app::classes::types
