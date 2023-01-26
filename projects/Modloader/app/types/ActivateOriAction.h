#pragma once
#include <Modloader/app/structs/ActivateOriAction.h>
#include <Modloader/app/structs/ActivateOriAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateOriAction {
        inline app::ActivateOriAction__Class** type_info() {
            static app::ActivateOriAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateOriAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateOriAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateOriAction__Class>(type_info(), "", "ActivateOriAction");
        }
        inline app::ActivateOriAction* create() {
            return il2cpp::create_object<app::ActivateOriAction>(get_class());
        }
    } // namespace ActivateOriAction
} // namespace app::classes::types
