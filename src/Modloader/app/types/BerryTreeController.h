#pragma once
#include <Modloader/app/structs/BerryTreeController.h>
#include <Modloader/app/structs/BerryTreeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BerryTreeController {
        inline app::BerryTreeController__Class** type_info() {
            static app::BerryTreeController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BerryTreeController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BerryTreeController__Class* get_class() {
            return il2cpp::get_class<app::BerryTreeController__Class>(type_info(), "", "BerryTreeController");
        }
        inline app::BerryTreeController* create() {
            return il2cpp::create_object<app::BerryTreeController>(get_class());
        }
    } // namespace BerryTreeController
} // namespace app::classes::types
