#pragma once
#include <Modloader/app/structs/LightningController.h>
#include <Modloader/app/structs/LightningController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightningController {
        inline app::LightningController__Class** type_info() {
            static app::LightningController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightningController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightningController__Class* get_class() {
            return il2cpp::get_class<app::LightningController__Class>(type_info(), "", "LightningController");
        }
        inline app::LightningController* create() {
            return il2cpp::create_object<app::LightningController>(get_class());
        }
    } // namespace LightningController
} // namespace app::classes::types
