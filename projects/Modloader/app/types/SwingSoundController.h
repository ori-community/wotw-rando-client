#pragma once
#include <Modloader/app/structs/SwingSoundController.h>
#include <Modloader/app/structs/SwingSoundController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwingSoundController {
        inline app::SwingSoundController__Class** type_info() {
            static app::SwingSoundController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwingSoundController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwingSoundController__Class* get_class() {
            return il2cpp::get_class<app::SwingSoundController__Class>(type_info(), "", "SwingSoundController");
        }
        inline app::SwingSoundController* create() {
            return il2cpp::create_object<app::SwingSoundController>(get_class());
        }
    } // namespace SwingSoundController
} // namespace app::classes::types
