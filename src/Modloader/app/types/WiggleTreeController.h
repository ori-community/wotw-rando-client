#pragma once
#include <Modloader/app/structs/WiggleTreeController.h>
#include <Modloader/app/structs/WiggleTreeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WiggleTreeController {
        inline app::WiggleTreeController__Class** type_info() {
            static app::WiggleTreeController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WiggleTreeController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WiggleTreeController__Class* get_class() {
            return il2cpp::get_class<app::WiggleTreeController__Class>(type_info(), "", "WiggleTreeController");
        }
        inline app::WiggleTreeController* create() {
            return il2cpp::create_object<app::WiggleTreeController>(get_class());
        }
    } // namespace WiggleTreeController
} // namespace app::classes::types
