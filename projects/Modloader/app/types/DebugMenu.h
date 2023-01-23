#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugMenu__Class.h>
#include <Modloader/app/structs/DebugMenu.h>

namespace app::classes::types {
    namespace DebugMenu {
        inline app::DebugMenu__Class** type_info = (app::DebugMenu__Class**)(modloader::win::memory::resolve_rva(0x04712308));
        inline app::DebugMenu__Class* get_class() {
            return il2cpp::get_class<app::DebugMenu__Class>(type_info, "", "DebugMenu");
        }
        inline app::DebugMenu* create() {
            return il2cpp::create_object<app::DebugMenu>(get_class());
        }
    } // namespace DebugMenu
} // namespace app::classes::types
