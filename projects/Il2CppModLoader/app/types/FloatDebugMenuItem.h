#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatDebugMenuItem {
        inline app::FloatDebugMenuItem__Class** type_info = (app::FloatDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047564D0));
        inline app::FloatDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::FloatDebugMenuItem__Class>(type_info, "", "FloatDebugMenuItem");
        }
        inline app::FloatDebugMenuItem* create() {
            return il2cpp::create_object<app::FloatDebugMenuItem>(get_class());
        }
    } // namespace FloatDebugMenuItem
} // namespace app::classes::types
