#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VRCharacterController__Class.h>
#include <Modloader/app/structs/VRCharacterController.h>

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
