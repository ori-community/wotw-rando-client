#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotificationChecker__Array {
        namespace {
            app::NotificationChecker__Array__Class* type_info_ref = nullptr;
        }
        app::NotificationChecker__Array__Class** type_info = &type_info_ref;
        inline app::NotificationChecker__Array__Class* get_class() {
            return il2cpp::get_class<app::NotificationChecker__Array__Class>(type_info, "", "NotificationChecker[]");
        }
        inline app::NotificationChecker__Array* create() {
            return il2cpp::create_object<app::NotificationChecker__Array>(get_class());
        }
    } // namespace NotificationChecker__Array
} // namespace app::classes::types
