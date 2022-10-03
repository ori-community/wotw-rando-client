#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatPeerDeath {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BatPeerDeath__Class** type_info;
        inline app::BatPeerDeath__Class* get_class() {
            return il2cpp::get_class<app::BatPeerDeath__Class>(type_info, "UberBehaviourTree.Events", "BatPeerDeath");
        }
        inline app::BatPeerDeath* create() {
            return il2cpp::create_object<app::BatPeerDeath>(get_class());
        }
    } // namespace BatPeerDeath
} // namespace app::classes::types
