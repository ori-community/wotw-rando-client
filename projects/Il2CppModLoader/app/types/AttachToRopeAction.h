#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachToRopeAction {
        namespace {
            app::AttachToRopeAction__Class* type_info_ref = nullptr;
        }
        app::AttachToRopeAction__Class** type_info = &type_info_ref;
        inline app::AttachToRopeAction__Class* get_class() {
            return il2cpp::get_class<app::AttachToRopeAction__Class>(type_info, "", "AttachToRopeAction");
        }
        inline app::AttachToRopeAction* create() {
            return il2cpp::create_object<app::AttachToRopeAction>(get_class());
        }
    } // namespace AttachToRopeAction
} // namespace app::classes::types
