#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLevelUpDownDebugMenuItem {
        inline app::SeinLevelUpDownDebugMenuItem__Class** type_info = (app::SeinLevelUpDownDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047657B0));
        inline app::SeinLevelUpDownDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SeinLevelUpDownDebugMenuItem__Class>(type_info, "", "SeinLevelUpDownDebugMenuItem");
        }
        inline app::SeinLevelUpDownDebugMenuItem* create() {
            return il2cpp::create_object<app::SeinLevelUpDownDebugMenuItem>(get_class());
        }
    } // namespace SeinLevelUpDownDebugMenuItem
} // namespace app::classes::types
