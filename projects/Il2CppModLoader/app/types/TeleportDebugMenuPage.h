#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TeleportDebugMenuPage {
        namespace {
            app::TeleportDebugMenuPage__Class* type_info_ref = nullptr;
        }
        app::TeleportDebugMenuPage__Class** type_info = &type_info_ref;
        inline app::TeleportDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::TeleportDebugMenuPage__Class>(type_info, "", "TeleportDebugMenuPage");
        }
        inline app::TeleportDebugMenuPage* create() {
            return il2cpp::create_object<app::TeleportDebugMenuPage>(get_class());
        }
    } // namespace TeleportDebugMenuPage
} // namespace app::classes::types
