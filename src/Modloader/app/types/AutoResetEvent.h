#pragma once
#include <Modloader/app/structs/AutoResetEvent.h>
#include <Modloader/app/structs/AutoResetEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoResetEvent {
        inline app::AutoResetEvent__Class** type_info() {
            static app::AutoResetEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AutoResetEvent__Class**)(modloader::win::memory::resolve_rva(0x04742270));
            }
            return cache;
        }
        inline app::AutoResetEvent__Class* get_class() {
            return il2cpp::get_class<app::AutoResetEvent__Class>(type_info(), "System.Threading", "AutoResetEvent");
        }
        inline app::AutoResetEvent* create() {
            return il2cpp::create_object<app::AutoResetEvent>(get_class());
        }
    } // namespace AutoResetEvent
} // namespace app::classes::types
