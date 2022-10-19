#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DoWorkEventHandler {
        inline app::DoWorkEventHandler__Class** type_info = (app::DoWorkEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0471FBD8));
        inline app::DoWorkEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DoWorkEventHandler__Class>(type_info, "System.ComponentModel", "DoWorkEventHandler");
        }
        inline app::DoWorkEventHandler* create() {
            return il2cpp::create_object<app::DoWorkEventHandler>(get_class());
        }
    } // namespace DoWorkEventHandler
} // namespace app::classes::types
