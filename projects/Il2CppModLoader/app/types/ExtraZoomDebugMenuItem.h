#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExtraZoomDebugMenuItem {
        inline app::ExtraZoomDebugMenuItem__Class** type_info = (app::ExtraZoomDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04788AA8));
        inline app::ExtraZoomDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ExtraZoomDebugMenuItem__Class>(type_info, "", "ExtraZoomDebugMenuItem");
        }
        inline app::ExtraZoomDebugMenuItem* create() {
            return il2cpp::create_object<app::ExtraZoomDebugMenuItem>(get_class());
        }
    } // namespace ExtraZoomDebugMenuItem
} // namespace app::classes::types
