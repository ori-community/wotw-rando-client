#pragma once
#include <Modloader/app/structs/IDialogTransition__Array.h>
#include <Modloader/app/structs/IDialogTransition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogTransition__Array {
        inline app::IDialogTransition__Array__Class** type_info() {
            static app::IDialogTransition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDialogTransition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDialogTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogTransition__Array__Class>(type_info(), "", "IDialogTransition[]");
        }
        inline app::IDialogTransition__Array* create() {
            return il2cpp::create_object<app::IDialogTransition__Array>(get_class());
        }
    } // namespace IDialogTransition__Array
} // namespace app::classes::types
