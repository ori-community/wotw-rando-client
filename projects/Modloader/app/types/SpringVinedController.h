#pragma once
#include <Modloader/app/structs/SpringVinedController.h>
#include <Modloader/app/structs/SpringVinedController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpringVinedController {
        inline app::SpringVinedController__Class** type_info() {
            static app::SpringVinedController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpringVinedController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpringVinedController__Class* get_class() {
            return il2cpp::get_class<app::SpringVinedController__Class>(type_info(), "", "SpringVinedController");
        }
        inline app::SpringVinedController* create() {
            return il2cpp::create_object<app::SpringVinedController>(get_class());
        }
    } // namespace SpringVinedController
} // namespace app::classes::types
