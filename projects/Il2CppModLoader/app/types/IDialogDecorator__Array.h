#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDialogDecorator__Array {
        namespace {
            app::IDialogDecorator__Array__Class* type_info_ref = nullptr;
        }
        app::IDialogDecorator__Array__Class** type_info = &type_info_ref;
        inline app::IDialogDecorator__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogDecorator__Array__Class>(type_info, "", "IDialogDecorator[]");
        }
        inline app::IDialogDecorator__Array* create() {
            return il2cpp::create_object<app::IDialogDecorator__Array>(get_class());
        }
    } // namespace IDialogDecorator__Array
} // namespace app::classes::types
