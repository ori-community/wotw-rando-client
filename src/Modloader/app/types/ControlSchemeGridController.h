#pragma once
#include <Modloader/app/structs/ControlSchemeGridController.h>
#include <Modloader/app/structs/ControlSchemeGridController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlSchemeGridController {
        inline app::ControlSchemeGridController__Class** type_info() {
            static app::ControlSchemeGridController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControlSchemeGridController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControlSchemeGridController__Class* get_class() {
            return il2cpp::get_class<app::ControlSchemeGridController__Class>(type_info(), "", "ControlSchemeGridController");
        }
        inline app::ControlSchemeGridController* create() {
            return il2cpp::create_object<app::ControlSchemeGridController>(get_class());
        }
    } // namespace ControlSchemeGridController
} // namespace app::classes::types
