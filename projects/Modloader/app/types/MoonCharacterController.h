#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonCharacterController__Class.h>
#include <Modloader/app/structs/MoonCharacterController.h>

namespace app::classes::types {
    namespace MoonCharacterController {
        namespace {
            inline app::MoonCharacterController__Class* type_info_ref = nullptr;
        }
        inline app::MoonCharacterController__Class** type_info = &type_info_ref;
        inline app::MoonCharacterController__Class* get_class() {
            return il2cpp::get_class<app::MoonCharacterController__Class>(type_info, "", "MoonCharacterController");
        }
        inline app::MoonCharacterController* create() {
            return il2cpp::create_object<app::MoonCharacterController>(get_class());
        }
    } // namespace MoonCharacterController
} // namespace app::classes::types
