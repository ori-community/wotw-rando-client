#pragma once
#include <Modloader/app/structs/SlugController.h>
#include <Modloader/app/structs/SlugController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugController {
        inline app::SlugController__Class** type_info() {
            static app::SlugController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugController__Class* get_class() {
            return il2cpp::get_class<app::SlugController__Class>(type_info(), "", "SlugController");
        }
        inline app::SlugController* create() {
            return il2cpp::create_object<app::SlugController>(get_class());
        }
    } // namespace SlugController
} // namespace app::classes::types
