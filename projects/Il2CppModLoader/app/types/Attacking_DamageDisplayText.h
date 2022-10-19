#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Attacking_DamageDisplayText {
        inline app::Attacking_DamageDisplayText__Class** type_info = (app::Attacking_DamageDisplayText__Class**)(modloader::win::memory::resolve_rva(0x0478DC58));
        inline app::Attacking_DamageDisplayText__Class* get_class() {
            return il2cpp::get_nested_class<app::Attacking_DamageDisplayText__Class>(type_info, "Game", "Attacking", "DamageDisplayText");
        }
        inline app::Attacking_DamageDisplayText* create() {
            return il2cpp::create_object<app::Attacking_DamageDisplayText>(get_class());
        }
    } // namespace Attacking_DamageDisplayText
} // namespace app::classes::types
