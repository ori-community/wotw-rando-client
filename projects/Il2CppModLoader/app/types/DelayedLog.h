#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DelayedLog {
        inline app::DelayedLog__Class** type_info = (app::DelayedLog__Class**)(modloader::win::memory::resolve_rva(0x0470FB68));
        inline app::DelayedLog__Class* get_class() {
            return il2cpp::get_class<app::DelayedLog__Class>(type_info, "", "DelayedLog");
        }
        inline app::DelayedLog* create() {
            return il2cpp::create_object<app::DelayedLog>(get_class());
        }
    } // namespace DelayedLog
} // namespace app::classes::types
