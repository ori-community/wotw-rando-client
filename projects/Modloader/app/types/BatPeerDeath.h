#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BatPeerDeath {
        inline app::BatPeerDeath__Class** type_info = (app::BatPeerDeath__Class**)(modloader::win::memory::resolve_rva(0x0474D1A8));
        inline app::BatPeerDeath__Class* get_class() {
            return il2cpp::get_class<app::BatPeerDeath__Class>(type_info, "UberBehaviourTree.Events", "BatPeerDeath");
        }
        inline app::BatPeerDeath* create() {
            return il2cpp::create_object<app::BatPeerDeath>(get_class());
        }
    } // namespace BatPeerDeath
} // namespace app::classes::types
