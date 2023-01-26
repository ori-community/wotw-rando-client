#pragma once
#include <Modloader/app/structs/KuController.h>
#include <Modloader/app/structs/KuController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuController {
        inline app::KuController__Class** type_info() {
            static app::KuController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuController__Class* get_class() {
            return il2cpp::get_class<app::KuController__Class>(type_info(), "", "KuController");
        }
        inline app::KuController* create() {
            return il2cpp::create_object<app::KuController>(get_class());
        }
    } // namespace KuController
} // namespace app::classes::types
