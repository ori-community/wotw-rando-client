#pragma once
#include <Modloader/app/structs/ControlListGridController.h>
#include <Modloader/app/structs/ControlListGridController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlListGridController {
        inline app::ControlListGridController__Class** type_info() {
            static app::ControlListGridController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControlListGridController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControlListGridController__Class* get_class() {
            return il2cpp::get_class<app::ControlListGridController__Class>(type_info(), "", "ControlListGridController");
        }
        inline app::ControlListGridController* create() {
            return il2cpp::create_object<app::ControlListGridController>(get_class());
        }
    } // namespace ControlListGridController
} // namespace app::classes::types
