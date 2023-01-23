#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandstormController__Class.h>
#include <Modloader/app/structs/SandstormController.h>

namespace app::classes::types {
    namespace SandstormController {
        namespace {
            inline app::SandstormController__Class* type_info_ref = nullptr;
        }
        inline app::SandstormController__Class** type_info = &type_info_ref;
        inline app::SandstormController__Class* get_class() {
            return il2cpp::get_class<app::SandstormController__Class>(type_info, "", "SandstormController");
        }
        inline app::SandstormController* create() {
            return il2cpp::create_object<app::SandstormController>(get_class());
        }
    } // namespace SandstormController
} // namespace app::classes::types
