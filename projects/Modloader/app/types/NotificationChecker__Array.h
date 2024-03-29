#pragma once
#include <Modloader/app/structs/NotificationChecker__Array.h>
#include <Modloader/app/structs/NotificationChecker__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotificationChecker__Array {
        inline app::NotificationChecker__Array__Class** type_info() {
            static app::NotificationChecker__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NotificationChecker__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NotificationChecker__Array__Class* get_class() {
            return il2cpp::get_class<app::NotificationChecker__Array__Class>(type_info(), "", "NotificationChecker[]");
        }
        inline app::NotificationChecker__Array* create() {
            return il2cpp::create_object<app::NotificationChecker__Array>(get_class());
        }
    } // namespace NotificationChecker__Array
} // namespace app::classes::types
