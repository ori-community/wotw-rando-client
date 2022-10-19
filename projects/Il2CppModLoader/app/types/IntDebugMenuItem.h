#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntDebugMenuItem {
        inline app::IntDebugMenuItem__Class** type_info = (app::IntDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04790CA0));
        inline app::IntDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::IntDebugMenuItem__Class>(type_info, "", "IntDebugMenuItem");
        }
        inline app::IntDebugMenuItem* create() {
            return il2cpp::create_object<app::IntDebugMenuItem>(get_class());
        }
    } // namespace IntDebugMenuItem
} // namespace app::classes::types
