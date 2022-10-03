#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputBasedStringProvider {
        namespace {
            app::InputBasedStringProvider__Class* type_info_ref = nullptr;
        }
        app::InputBasedStringProvider__Class** type_info = &type_info_ref;
        inline app::InputBasedStringProvider__Class* get_class() {
            return il2cpp::get_class<app::InputBasedStringProvider__Class>(type_info, "", "InputBasedStringProvider");
        }
        inline app::InputBasedStringProvider* create() {
            return il2cpp::create_object<app::InputBasedStringProvider>(get_class());
        }
    } // namespace InputBasedStringProvider
} // namespace app::classes::types
