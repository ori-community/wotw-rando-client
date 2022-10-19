#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SearchDebugMenuItem {
        inline app::SearchDebugMenuItem__Class** type_info = (app::SearchDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047210E8));
        inline app::SearchDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SearchDebugMenuItem__Class>(type_info, "", "SearchDebugMenuItem");
        }
        inline app::SearchDebugMenuItem* create() {
            return il2cpp::create_object<app::SearchDebugMenuItem>(get_class());
        }
    } // namespace SearchDebugMenuItem
} // namespace app::classes::types
