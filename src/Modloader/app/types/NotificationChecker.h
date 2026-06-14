#pragma once
#include <Modloader/app/structs/NotificationChecker.h>
#include <Modloader/app/structs/NotificationChecker__Array.h>
#include <Modloader/app/structs/NotificationChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotificationChecker {
        inline app::NotificationChecker__Class** type_info() {
            static app::NotificationChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotificationChecker__Class**)(modloader::win::memory::resolve_rva(0x04773E90));
            }
            return cache;
        }
        inline app::NotificationChecker__Class* get_class() {
            return il2cpp::get_class<app::NotificationChecker__Class>(type_info(), "", "NotificationChecker");
        }
        inline app::NotificationChecker* create() {
            return il2cpp::create_object<app::NotificationChecker>(get_class());
        }
        inline app::NotificationChecker__Array* create_array(int size) {
            return il2cpp::array_new<app::NotificationChecker__Array>(get_class(), size);
        }
        inline app::NotificationChecker__Array* create_array(const std::vector<app::NotificationChecker*>& items) {
            return il2cpp::array_new<app::NotificationChecker__Array>(get_class(), items);
        }
    } // namespace NotificationChecker
} // namespace app::classes::types
