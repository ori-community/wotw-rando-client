#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtraZoomDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExtraZoomDebugMenuItem__Class** type_info;
        inline app::ExtraZoomDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ExtraZoomDebugMenuItem__Class>(type_info, "", "ExtraZoomDebugMenuItem");
        }
        inline app::ExtraZoomDebugMenuItem* create() {
            return il2cpp::create_object<app::ExtraZoomDebugMenuItem>(get_class());
        }
    } // namespace ExtraZoomDebugMenuItem
} // namespace app::classes::types
