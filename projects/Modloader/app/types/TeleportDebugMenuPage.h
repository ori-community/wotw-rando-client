#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TeleportDebugMenuPage__Class.h>
#include <Modloader/app/structs/TeleportDebugMenuPage.h>

namespace app::classes::types {
    namespace TeleportDebugMenuPage {
        namespace {
            inline app::TeleportDebugMenuPage__Class* type_info_ref = nullptr;
        }
        inline app::TeleportDebugMenuPage__Class** type_info = &type_info_ref;
        inline app::TeleportDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::TeleportDebugMenuPage__Class>(type_info, "", "TeleportDebugMenuPage");
        }
        inline app::TeleportDebugMenuPage* create() {
            return il2cpp::create_object<app::TeleportDebugMenuPage>(get_class());
        }
    } // namespace TeleportDebugMenuPage
} // namespace app::classes::types
