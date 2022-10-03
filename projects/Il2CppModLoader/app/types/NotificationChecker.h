#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotificationChecker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotificationChecker__Class** type_info;
        inline app::NotificationChecker__Class* get_class() {
            return il2cpp::get_class<app::NotificationChecker__Class>(type_info, "", "NotificationChecker");
        }
        inline app::NotificationChecker* create() {
            return il2cpp::create_object<app::NotificationChecker>(get_class());
        }
        inline app::NotificationChecker__Array* create_array(int size) {
            return il2cpp::array_new<app::NotificationChecker__Array>(get_class(), size);
        }
    } // namespace NotificationChecker
} // namespace app::classes::types
