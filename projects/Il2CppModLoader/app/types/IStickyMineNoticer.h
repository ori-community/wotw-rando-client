#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStickyMineNoticer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IStickyMineNoticer__Class** type_info;
        inline app::IStickyMineNoticer__Class* get_class() {
            return il2cpp::get_class<app::IStickyMineNoticer__Class>(type_info, "", "IStickyMineNoticer");
        }
    } // namespace IStickyMineNoticer
} // namespace app::classes::types
