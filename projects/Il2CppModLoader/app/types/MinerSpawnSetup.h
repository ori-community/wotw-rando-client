#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerSpawnSetup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MinerSpawnSetup__Class** type_info;
        inline app::MinerSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::MinerSpawnSetup__Class>(type_info, "", "MinerSpawnSetup");
        }
        inline app::MinerSpawnSetup* create() {
            return il2cpp::create_object<app::MinerSpawnSetup>(get_class());
        }
    } // namespace MinerSpawnSetup
} // namespace app::classes::types
