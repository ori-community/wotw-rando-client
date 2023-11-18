#pragma once
#include <Modloader/app/structs/MistController.h>
#include <Modloader/app/structs/MistController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistController {
        inline app::MistController__Class** type_info() {
            static app::MistController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistController__Class* get_class() {
            return il2cpp::get_class<app::MistController__Class>(type_info(), "", "MistController");
        }
        inline app::MistController* create() {
            return il2cpp::create_object<app::MistController>(get_class());
        }
    } // namespace MistController
} // namespace app::classes::types
