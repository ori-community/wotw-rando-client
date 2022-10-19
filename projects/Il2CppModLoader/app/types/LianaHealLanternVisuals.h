#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LianaHealLanternVisuals {
        inline app::LianaHealLanternVisuals__Class** type_info = (app::LianaHealLanternVisuals__Class**)(modloader::win::memory::resolve_rva(0x0477C270));
        inline app::LianaHealLanternVisuals__Class* get_class() {
            return il2cpp::get_class<app::LianaHealLanternVisuals__Class>(type_info, "", "LianaHealLanternVisuals");
        }
        inline app::LianaHealLanternVisuals* create() {
            return il2cpp::create_object<app::LianaHealLanternVisuals>(get_class());
        }
    } // namespace LianaHealLanternVisuals
} // namespace app::classes::types
