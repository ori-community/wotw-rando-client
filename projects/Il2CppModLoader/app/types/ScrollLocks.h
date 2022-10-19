#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScrollLocks {
        inline app::ScrollLocks__Class** type_info = (app::ScrollLocks__Class**)(modloader::win::memory::resolve_rva(0x04762CD8));
        inline app::ScrollLocks__Class* get_class() {
            return il2cpp::get_class<app::ScrollLocks__Class>(type_info, "Game", "ScrollLocks");
        }
        inline app::ScrollLocks* create() {
            return il2cpp::create_object<app::ScrollLocks>(get_class());
        }
    } // namespace ScrollLocks
} // namespace app::classes::types
