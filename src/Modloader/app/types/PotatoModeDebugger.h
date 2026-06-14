#pragma once
#include <Modloader/app/structs/PotatoModeDebugger.h>
#include <Modloader/app/structs/PotatoModeDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PotatoModeDebugger {
        inline app::PotatoModeDebugger__Class** type_info() {
            static app::PotatoModeDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PotatoModeDebugger__Class**)(modloader::win::memory::resolve_rva(0x04783BE0));
            }
            return cache;
        }
        inline app::PotatoModeDebugger__Class* get_class() {
            return il2cpp::get_class<app::PotatoModeDebugger__Class>(type_info(), "", "PotatoModeDebugger");
        }
        inline app::PotatoModeDebugger* create() {
            return il2cpp::create_object<app::PotatoModeDebugger>(get_class());
        }
    } // namespace PotatoModeDebugger
} // namespace app::classes::types
