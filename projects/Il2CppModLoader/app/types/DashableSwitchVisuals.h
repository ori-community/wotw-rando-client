#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashableSwitchVisuals {
        inline app::DashableSwitchVisuals__Class** type_info = (app::DashableSwitchVisuals__Class**)(modloader::win::memory::resolve_rva(0x04745EC0));
        inline app::DashableSwitchVisuals__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchVisuals__Class>(type_info, "", "DashableSwitchVisuals");
        }
        inline app::DashableSwitchVisuals* create() {
            return il2cpp::create_object<app::DashableSwitchVisuals>(get_class());
        }
    } // namespace DashableSwitchVisuals
} // namespace app::classes::types
