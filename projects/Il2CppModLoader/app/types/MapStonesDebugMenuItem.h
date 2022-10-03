#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapStonesDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MapStonesDebugMenuItem__Class** type_info;
        inline app::MapStonesDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::MapStonesDebugMenuItem__Class>(type_info, "", "MapStonesDebugMenuItem");
        }
        inline app::MapStonesDebugMenuItem* create() {
            return il2cpp::create_object<app::MapStonesDebugMenuItem>(get_class());
        }
    } // namespace MapStonesDebugMenuItem
} // namespace app::classes::types
