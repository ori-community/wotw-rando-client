#pragma once
#include <Modloader/app/structs/Debugger.h>
#include <Modloader/app/structs/Debugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Debugger {
        inline app::Debugger__Class** type_info() {
            static app::Debugger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Debugger__Class**)(modloader::win::memory::resolve_rva(0x047891B8));
            }
            return cache;
        }
        inline app::Debugger__Class* get_class() {
            return il2cpp::get_class<app::Debugger__Class>(type_info(), "System.Diagnostics", "Debugger");
        }
        inline app::Debugger* create() {
            return il2cpp::create_object<app::Debugger>(get_class());
        }
    } // namespace Debugger
} // namespace app::classes::types
