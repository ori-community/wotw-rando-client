#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BatPeerStickyMineStuck {
        inline app::BatPeerStickyMineStuck__Class** type_info = (app::BatPeerStickyMineStuck__Class**)(modloader::win::memory::resolve_rva(0x0473D1B0));
        inline app::BatPeerStickyMineStuck__Class* get_class() {
            return il2cpp::get_class<app::BatPeerStickyMineStuck__Class>(type_info, "UberBehaviourTree.Events", "BatPeerStickyMineStuck");
        }
        inline app::BatPeerStickyMineStuck* create() {
            return il2cpp::create_object<app::BatPeerStickyMineStuck>(get_class());
        }
    } // namespace BatPeerStickyMineStuck
} // namespace app::classes::types
