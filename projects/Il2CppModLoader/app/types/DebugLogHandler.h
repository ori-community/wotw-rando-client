#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugLogHandler {
        inline app::DebugLogHandler__Class** type_info = (app::DebugLogHandler__Class**)(modloader::win::memory::resolve_rva(0x04735700));
        inline app::DebugLogHandler__Class* get_class() {
            return il2cpp::get_class<app::DebugLogHandler__Class>(type_info, "UnityEngine", "DebugLogHandler");
        }
        inline app::DebugLogHandler* create() {
            return il2cpp::create_object<app::DebugLogHandler>(get_class());
        }
    } // namespace DebugLogHandler
} // namespace app::classes::types
