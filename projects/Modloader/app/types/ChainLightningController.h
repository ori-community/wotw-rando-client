#pragma once
#include <Modloader/app/structs/ChainLightningController.h>
#include <Modloader/app/structs/ChainLightningController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChainLightningController {
        inline app::ChainLightningController__Class** type_info() {
            static app::ChainLightningController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChainLightningController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChainLightningController__Class* get_class() {
            return il2cpp::get_class<app::ChainLightningController__Class>(type_info(), "", "ChainLightningController");
        }
        inline app::ChainLightningController* create() {
            return il2cpp::create_object<app::ChainLightningController>(get_class());
        }
    } // namespace ChainLightningController
} // namespace app::classes::types
