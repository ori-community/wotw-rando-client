#pragma once
#include <Modloader/app/structs/ENotificationPosition__Enum.h>
#include <Modloader/app/structs/ENotificationPosition__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ENotificationPosition__Enum {
        inline app::ENotificationPosition__Enum__Class** type_info() {
            static app::ENotificationPosition__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ENotificationPosition__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ENotificationPosition__Enum__Class* get_class() {
            return il2cpp::get_class<app::ENotificationPosition__Enum__Class>(type_info(), "Steamworks", "ENotificationPosition");
        }
        inline app::ENotificationPosition__Enum* create() {
            return il2cpp::create_object<app::ENotificationPosition__Enum>(get_class());
        }
    } // namespace ENotificationPosition__Enum
} // namespace app::classes::types
