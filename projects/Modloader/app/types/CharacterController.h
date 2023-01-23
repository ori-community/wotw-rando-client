#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterController__Class.h>
#include <Modloader/app/structs/CharacterController.h>

namespace app::classes::types {
    namespace CharacterController {
        namespace {
            inline app::CharacterController__Class* type_info_ref = nullptr;
        }
        inline app::CharacterController__Class** type_info = &type_info_ref;
        inline app::CharacterController__Class* get_class() {
            return il2cpp::get_class<app::CharacterController__Class>(type_info, "UnityEngine", "CharacterController");
        }
        inline app::CharacterController* create() {
            return il2cpp::create_object<app::CharacterController>(get_class());
        }
    } // namespace CharacterController
} // namespace app::classes::types
