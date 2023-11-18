#pragma once
#include <Modloader/app/structs/PondController.h>
#include <Modloader/app/structs/PondController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PondController {
        inline app::PondController__Class** type_info() {
            static app::PondController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PondController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PondController__Class* get_class() {
            return il2cpp::get_class<app::PondController__Class>(type_info(), "", "PondController");
        }
        inline app::PondController* create() {
            return il2cpp::create_object<app::PondController>(get_class());
        }
    } // namespace PondController
} // namespace app::classes::types
