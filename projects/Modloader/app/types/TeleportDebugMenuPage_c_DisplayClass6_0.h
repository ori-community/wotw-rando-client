#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TeleportDebugMenuPage_c_DisplayClass6_0__Class.h>
#include <Modloader/app/structs/TeleportDebugMenuPage_c_DisplayClass6_0.h>

namespace app::classes::types {
    namespace TeleportDebugMenuPage_c_DisplayClass6_0 {
        inline app::TeleportDebugMenuPage_c_DisplayClass6_0__Class** type_info = (app::TeleportDebugMenuPage_c_DisplayClass6_0__Class**)(modloader::win::memory::resolve_rva(0x04702870));
        inline app::TeleportDebugMenuPage_c_DisplayClass6_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TeleportDebugMenuPage_c_DisplayClass6_0__Class>(type_info, "", "TeleportDebugMenuPage", "<>c__DisplayClass6_0");
        }
        inline app::TeleportDebugMenuPage_c_DisplayClass6_0* create() {
            return il2cpp::create_object<app::TeleportDebugMenuPage_c_DisplayClass6_0>(get_class());
        }
    } // namespace TeleportDebugMenuPage_c_DisplayClass6_0
} // namespace app::classes::types
