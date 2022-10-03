#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatSwarm {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BatSwarm__Class** type_info;
        inline app::BatSwarm__Class* get_class() {
            return il2cpp::get_class<app::BatSwarm__Class>(type_info, "", "BatSwarm");
        }
        inline app::BatSwarm* create() {
            return il2cpp::create_object<app::BatSwarm>(get_class());
        }
    } // namespace BatSwarm
} // namespace app::classes::types
