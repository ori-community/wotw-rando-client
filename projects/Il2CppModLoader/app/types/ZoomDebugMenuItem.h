#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ZoomDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ZoomDebugMenuItem__Class** type_info;
        inline app::ZoomDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ZoomDebugMenuItem__Class>(type_info, "", "ZoomDebugMenuItem");
        }
        inline app::ZoomDebugMenuItem* create() {
            return il2cpp::create_object<app::ZoomDebugMenuItem>(get_class());
        }
    } // namespace ZoomDebugMenuItem
} // namespace app::classes::types
