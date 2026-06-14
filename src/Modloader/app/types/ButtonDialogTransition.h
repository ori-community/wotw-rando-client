#pragma once
#include <Modloader/app/structs/ButtonDialogTransition.h>
#include <Modloader/app/structs/ButtonDialogTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ButtonDialogTransition {
        inline app::ButtonDialogTransition__Class** type_info() {
            static app::ButtonDialogTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ButtonDialogTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ButtonDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::ButtonDialogTransition__Class>(type_info(), "", "ButtonDialogTransition");
        }
        inline app::ButtonDialogTransition* create() {
            return il2cpp::create_object<app::ButtonDialogTransition>(get_class());
        }
    } // namespace ButtonDialogTransition
} // namespace app::classes::types
