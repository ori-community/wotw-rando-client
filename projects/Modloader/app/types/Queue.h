#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Queue {
        inline app::Queue__Class** type_info = (app::Queue__Class**)(modloader::win::memory::resolve_rva(0x04787718));
        inline app::Queue__Class* get_class() {
            return il2cpp::get_class<app::Queue__Class>(type_info, "System.Collections", "Queue");
        }
        inline app::Queue* create() {
            return il2cpp::create_object<app::Queue>(get_class());
        }
    } // namespace Queue
} // namespace app::classes::types
