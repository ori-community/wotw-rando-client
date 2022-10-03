#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugLogger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugLogger__Class** type_info;
        inline app::DebugLogger__Class* get_class() {
            return il2cpp::get_class<app::DebugLogger__Class>(type_info, "PlayFab.Logger", "DebugLogger");
        }
        inline app::DebugLogger* create() {
            return il2cpp::create_object<app::DebugLogger>(get_class());
        }
    } // namespace DebugLogger
} // namespace app::classes::types
