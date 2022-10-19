#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapStonesDebugMenuItem {
        inline app::MapStonesDebugMenuItem__Class** type_info = (app::MapStonesDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04774540));
        inline app::MapStonesDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::MapStonesDebugMenuItem__Class>(type_info, "", "MapStonesDebugMenuItem");
        }
        inline app::MapStonesDebugMenuItem* create() {
            return il2cpp::create_object<app::MapStonesDebugMenuItem>(get_class());
        }
    } // namespace MapStonesDebugMenuItem
} // namespace app::classes::types
