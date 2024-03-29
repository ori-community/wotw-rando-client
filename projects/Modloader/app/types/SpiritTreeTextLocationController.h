#pragma once
#include <Modloader/app/structs/SpiritTreeTextLocationController.h>
#include <Modloader/app/structs/SpiritTreeTextLocationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritTreeTextLocationController {
        inline app::SpiritTreeTextLocationController__Class** type_info() {
            static app::SpiritTreeTextLocationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritTreeTextLocationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritTreeTextLocationController__Class* get_class() {
            return il2cpp::get_class<app::SpiritTreeTextLocationController__Class>(type_info(), "", "SpiritTreeTextLocationController");
        }
        inline app::SpiritTreeTextLocationController* create() {
            return il2cpp::create_object<app::SpiritTreeTextLocationController>(get_class());
        }
    } // namespace SpiritTreeTextLocationController
} // namespace app::classes::types
