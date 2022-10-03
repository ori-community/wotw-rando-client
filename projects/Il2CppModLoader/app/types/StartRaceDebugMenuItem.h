#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartRaceDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StartRaceDebugMenuItem__Class** type_info;
        inline app::StartRaceDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::StartRaceDebugMenuItem__Class>(type_info, "", "StartRaceDebugMenuItem");
        }
        inline app::StartRaceDebugMenuItem* create() {
            return il2cpp::create_object<app::StartRaceDebugMenuItem>(get_class());
        }
    } // namespace StartRaceDebugMenuItem
} // namespace app::classes::types
