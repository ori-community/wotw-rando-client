#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatPeerStickyMineStuck {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BatPeerStickyMineStuck__Class** type_info;
        inline app::BatPeerStickyMineStuck__Class* get_class() {
            return il2cpp::get_class<app::BatPeerStickyMineStuck__Class>(type_info, "UberBehaviourTree.Events", "BatPeerStickyMineStuck");
        }
        inline app::BatPeerStickyMineStuck* create() {
            return il2cpp::create_object<app::BatPeerStickyMineStuck>(get_class());
        }
    } // namespace BatPeerStickyMineStuck
} // namespace app::classes::types
