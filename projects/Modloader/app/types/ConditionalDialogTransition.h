#pragma once
#include <Modloader/app/structs/ConditionalDialogTransition.h>
#include <Modloader/app/structs/ConditionalDialogTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalDialogTransition {
        inline app::ConditionalDialogTransition__Class** type_info() {
            static app::ConditionalDialogTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionalDialogTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionalDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::ConditionalDialogTransition__Class>(type_info(), "", "ConditionalDialogTransition");
        }
        inline app::ConditionalDialogTransition* create() {
            return il2cpp::create_object<app::ConditionalDialogTransition>(get_class());
        }
    } // namespace ConditionalDialogTransition
} // namespace app::classes::types
