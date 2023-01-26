#pragma once
#include <Modloader/app/structs/HelperGhostController.h>
#include <Modloader/app/structs/HelperGhostController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HelperGhostController {
        inline app::HelperGhostController__Class** type_info() {
            static app::HelperGhostController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HelperGhostController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HelperGhostController__Class* get_class() {
            return il2cpp::get_class<app::HelperGhostController__Class>(type_info(), "", "HelperGhostController");
        }
        inline app::HelperGhostController* create() {
            return il2cpp::create_object<app::HelperGhostController>(get_class());
        }
    } // namespace HelperGhostController
} // namespace app::classes::types
