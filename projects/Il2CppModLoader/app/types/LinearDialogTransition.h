#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinearDialogTransition {
        namespace {
            app::LinearDialogTransition__Class* type_info_ref = nullptr;
        }
        app::LinearDialogTransition__Class** type_info = &type_info_ref;
        inline app::LinearDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::LinearDialogTransition__Class>(type_info, "", "LinearDialogTransition");
        }
        inline app::LinearDialogTransition* create() {
            return il2cpp::create_object<app::LinearDialogTransition>(get_class());
        }
    } // namespace LinearDialogTransition
} // namespace app::classes::types
