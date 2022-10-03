#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDialogTransition__Array {
        namespace {
            app::IDialogTransition__Array__Class* type_info_ref = nullptr;
        }
        app::IDialogTransition__Array__Class** type_info = &type_info_ref;
        inline app::IDialogTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogTransition__Array__Class>(type_info, "", "IDialogTransition[]");
        }
        inline app::IDialogTransition__Array* create() {
            return il2cpp::create_object<app::IDialogTransition__Array>(get_class());
        }
    } // namespace IDialogTransition__Array
} // namespace app::classes::types
