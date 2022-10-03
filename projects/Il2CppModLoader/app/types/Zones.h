#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Zones {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Zones__Class** type_info;
        inline app::Zones__Class* get_class() {
            return il2cpp::get_class<app::Zones__Class>(type_info, "Game", "Zones");
        }
        inline app::Zones* create() {
            return il2cpp::create_object<app::Zones>(get_class());
        }
    } // namespace Zones
} // namespace app::classes::types
