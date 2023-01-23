#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HUDManager_c__Class.h>
#include <Modloader/app/structs/HUDManager_c.h>

namespace app::classes::types {
    namespace HUDManager_c {
        inline app::HUDManager_c__Class** type_info = (app::HUDManager_c__Class**)(modloader::win::memory::resolve_rva(0x04711528));
        inline app::HUDManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HUDManager_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "HUDManager", "<>c");
        }
        inline app::HUDManager_c* create() {
            return il2cpp::create_object<app::HUDManager_c>(get_class());
        }
    } // namespace HUDManager_c
} // namespace app::classes::types
