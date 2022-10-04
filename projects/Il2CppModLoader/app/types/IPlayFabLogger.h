#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlayFabLogger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPlayFabLogger__Class** type_info;
        inline app::IPlayFabLogger__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabLogger__Class>(type_info, "PlayFab.Public", "IPlayFabLogger");
        }
    } // namespace IPlayFabLogger
} // namespace app::classes::types
