#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugMenuWorldEventActionMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugMenuWorldEventActionMenuItem__Class** type_info;
        inline app::DebugMenuWorldEventActionMenuItem__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuWorldEventActionMenuItem__Class>(type_info, "", "DebugMenuWorldEventActionMenuItem");
        }
        inline app::DebugMenuWorldEventActionMenuItem* create() {
            return il2cpp::create_object<app::DebugMenuWorldEventActionMenuItem>(get_class());
        }
    } // namespace DebugMenuWorldEventActionMenuItem
} // namespace app::classes::types
