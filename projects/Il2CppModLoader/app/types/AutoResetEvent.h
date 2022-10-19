#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AutoResetEvent {
        inline app::AutoResetEvent__Class** type_info = (app::AutoResetEvent__Class**)(modloader::win::memory::resolve_rva(0x04742270));
        inline app::AutoResetEvent__Class* get_class() {
            return il2cpp::get_class<app::AutoResetEvent__Class>(type_info, "System.Threading", "AutoResetEvent");
        }
        inline app::AutoResetEvent* create() {
            return il2cpp::create_object<app::AutoResetEvent>(get_class());
        }
    } // namespace AutoResetEvent
} // namespace app::classes::types
