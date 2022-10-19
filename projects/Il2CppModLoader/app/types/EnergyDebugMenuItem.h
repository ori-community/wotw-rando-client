#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnergyDebugMenuItem {
        inline app::EnergyDebugMenuItem__Class** type_info = (app::EnergyDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04747F20));
        inline app::EnergyDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::EnergyDebugMenuItem__Class>(type_info, "", "EnergyDebugMenuItem");
        }
        inline app::EnergyDebugMenuItem* create() {
            return il2cpp::create_object<app::EnergyDebugMenuItem>(get_class());
        }
    } // namespace EnergyDebugMenuItem
} // namespace app::classes::types
