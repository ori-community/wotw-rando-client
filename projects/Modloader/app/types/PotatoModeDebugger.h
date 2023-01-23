#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PotatoModeDebugger__Class.h>
#include <Modloader/app/structs/PotatoModeDebugger.h>

namespace app::classes::types {
    namespace PotatoModeDebugger {
        inline app::PotatoModeDebugger__Class** type_info = (app::PotatoModeDebugger__Class**)(modloader::win::memory::resolve_rva(0x04783BE0));
        inline app::PotatoModeDebugger__Class* get_class() {
            return il2cpp::get_class<app::PotatoModeDebugger__Class>(type_info, "", "PotatoModeDebugger");
        }
        inline app::PotatoModeDebugger* create() {
            return il2cpp::create_object<app::PotatoModeDebugger>(get_class());
        }
    } // namespace PotatoModeDebugger
} // namespace app::classes::types
