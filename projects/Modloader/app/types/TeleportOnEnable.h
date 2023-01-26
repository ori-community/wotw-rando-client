#pragma once
#include <Modloader/app/structs/TeleportOnEnable.h>
#include <Modloader/app/structs/TeleportOnEnable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TeleportOnEnable {
        inline app::TeleportOnEnable__Class** type_info() {
            static app::TeleportOnEnable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TeleportOnEnable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TeleportOnEnable__Class* get_class() {
            return il2cpp::get_class<app::TeleportOnEnable__Class>(type_info(), "", "TeleportOnEnable");
        }
        inline app::TeleportOnEnable* create() {
            return il2cpp::create_object<app::TeleportOnEnable>(get_class());
        }
    } // namespace TeleportOnEnable
} // namespace app::classes::types
