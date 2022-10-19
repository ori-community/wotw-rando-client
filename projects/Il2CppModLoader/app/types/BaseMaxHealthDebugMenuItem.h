#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseMaxHealthDebugMenuItem {
        inline app::BaseMaxHealthDebugMenuItem__Class** type_info = (app::BaseMaxHealthDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0477CB00));
        inline app::BaseMaxHealthDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BaseMaxHealthDebugMenuItem__Class>(type_info, "", "BaseMaxHealthDebugMenuItem");
        }
        inline app::BaseMaxHealthDebugMenuItem* create() {
            return il2cpp::create_object<app::BaseMaxHealthDebugMenuItem>(get_class());
        }
    } // namespace BaseMaxHealthDebugMenuItem
} // namespace app::classes::types
