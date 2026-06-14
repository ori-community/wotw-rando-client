#pragma once
#include <Modloader/app/structs/LinearDialogTransition.h>
#include <Modloader/app/structs/LinearDialogTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinearDialogTransition {
        inline app::LinearDialogTransition__Class** type_info() {
            static app::LinearDialogTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LinearDialogTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LinearDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::LinearDialogTransition__Class>(type_info(), "", "LinearDialogTransition");
        }
        inline app::LinearDialogTransition* create() {
            return il2cpp::create_object<app::LinearDialogTransition>(get_class());
        }
    } // namespace LinearDialogTransition
} // namespace app::classes::types
