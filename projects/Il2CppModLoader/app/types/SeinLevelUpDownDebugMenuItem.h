#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLevelUpDownDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinLevelUpDownDebugMenuItem__Class** type_info;
        inline app::SeinLevelUpDownDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SeinLevelUpDownDebugMenuItem__Class>(type_info, "", "SeinLevelUpDownDebugMenuItem");
        }
        inline app::SeinLevelUpDownDebugMenuItem* create() {
            return il2cpp::create_object<app::SeinLevelUpDownDebugMenuItem>(get_class());
        }
    } // namespace SeinLevelUpDownDebugMenuItem
} // namespace app::classes::types
