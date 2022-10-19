#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Orbs_OrbDisplayText {
        inline app::Orbs_OrbDisplayText__Class** type_info = (app::Orbs_OrbDisplayText__Class**)(modloader::win::memory::resolve_rva(0x04723A18));
        inline app::Orbs_OrbDisplayText__Class* get_class() {
            return il2cpp::get_nested_class<app::Orbs_OrbDisplayText__Class>(type_info, "Game", "Orbs", "OrbDisplayText");
        }
        inline app::Orbs_OrbDisplayText* create() {
            return il2cpp::create_object<app::Orbs_OrbDisplayText>(get_class());
        }
    } // namespace Orbs_OrbDisplayText
} // namespace app::classes::types
