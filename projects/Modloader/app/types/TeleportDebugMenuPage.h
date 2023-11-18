#pragma once
#include <Modloader/app/structs/TeleportDebugMenuPage.h>
#include <Modloader/app/structs/TeleportDebugMenuPage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TeleportDebugMenuPage {
        inline app::TeleportDebugMenuPage__Class** type_info() {
            static app::TeleportDebugMenuPage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TeleportDebugMenuPage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TeleportDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::TeleportDebugMenuPage__Class>(type_info(), "", "TeleportDebugMenuPage");
        }
        inline app::TeleportDebugMenuPage* create() {
            return il2cpp::create_object<app::TeleportDebugMenuPage>(get_class());
        }
    } // namespace TeleportDebugMenuPage
} // namespace app::classes::types
