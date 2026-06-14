#pragma once
#include <Modloader/app/structs/SandstormController.h>
#include <Modloader/app/structs/SandstormController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandstormController {
        inline app::SandstormController__Class** type_info() {
            static app::SandstormController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandstormController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandstormController__Class* get_class() {
            return il2cpp::get_class<app::SandstormController__Class>(type_info(), "", "SandstormController");
        }
        inline app::SandstormController* create() {
            return il2cpp::create_object<app::SandstormController>(get_class());
        }
    } // namespace SandstormController
} // namespace app::classes::types
