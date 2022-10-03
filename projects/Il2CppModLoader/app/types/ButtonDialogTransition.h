#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ButtonDialogTransition {
        namespace {
            app::ButtonDialogTransition__Class* type_info_ref = nullptr;
        }
        app::ButtonDialogTransition__Class** type_info = &type_info_ref;
        inline app::ButtonDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::ButtonDialogTransition__Class>(type_info, "", "ButtonDialogTransition");
        }
        inline app::ButtonDialogTransition* create() {
            return il2cpp::create_object<app::ButtonDialogTransition>(get_class());
        }
    } // namespace ButtonDialogTransition
} // namespace app::classes::types
