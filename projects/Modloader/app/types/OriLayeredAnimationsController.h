#pragma once
#include <Modloader/app/structs/OriLayeredAnimationsController.h>
#include <Modloader/app/structs/OriLayeredAnimationsController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriLayeredAnimationsController {
        inline app::OriLayeredAnimationsController__Class** type_info() {
            static app::OriLayeredAnimationsController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriLayeredAnimationsController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriLayeredAnimationsController__Class* get_class() {
            return il2cpp::get_class<app::OriLayeredAnimationsController__Class>(type_info(), "", "OriLayeredAnimationsController");
        }
        inline app::OriLayeredAnimationsController* create() {
            return il2cpp::create_object<app::OriLayeredAnimationsController>(get_class());
        }
    } // namespace OriLayeredAnimationsController
} // namespace app::classes::types
