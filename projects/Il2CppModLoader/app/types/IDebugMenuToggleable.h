#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuToggleable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDebugMenuToggleable__Class** type_info;
        inline app::IDebugMenuToggleable__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuToggleable__Class>(type_info, "", "IDebugMenuToggleable");
        }
    } // namespace IDebugMenuToggleable
} // namespace app::classes::types
