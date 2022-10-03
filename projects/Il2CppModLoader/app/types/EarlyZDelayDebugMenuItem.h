#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyZDelayDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EarlyZDelayDebugMenuItem__Class** type_info;
        inline app::EarlyZDelayDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::EarlyZDelayDebugMenuItem__Class>(type_info, "Moon.Rendering", "EarlyZDelayDebugMenuItem");
        }
        inline app::EarlyZDelayDebugMenuItem* create() {
            return il2cpp::create_object<app::EarlyZDelayDebugMenuItem>(get_class());
        }
    } // namespace EarlyZDelayDebugMenuItem
} // namespace app::classes::types
