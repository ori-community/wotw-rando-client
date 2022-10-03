#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballSpawnSetup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GasballSpawnSetup__Class** type_info;
        inline app::GasballSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::GasballSpawnSetup__Class>(type_info, "", "GasballSpawnSetup");
        }
        inline app::GasballSpawnSetup* create() {
            return il2cpp::create_object<app::GasballSpawnSetup>(get_class());
        }
    } // namespace GasballSpawnSetup
} // namespace app::classes::types
