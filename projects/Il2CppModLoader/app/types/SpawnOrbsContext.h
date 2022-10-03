#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpawnOrbsContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpawnOrbsContext__Class** type_info;
        inline app::SpawnOrbsContext__Class* get_class() {
            return il2cpp::get_class<app::SpawnOrbsContext__Class>(type_info, "", "SpawnOrbsContext");
        }
        inline app::SpawnOrbsContext* create() {
            return il2cpp::create_object<app::SpawnOrbsContext>(get_class());
        }
    } // namespace SpawnOrbsContext
} // namespace app::classes::types
