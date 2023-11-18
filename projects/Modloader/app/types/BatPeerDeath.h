#pragma once
#include <Modloader/app/structs/BatPeerDeath.h>
#include <Modloader/app/structs/BatPeerDeath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatPeerDeath {
        inline app::BatPeerDeath__Class** type_info() {
            static app::BatPeerDeath__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BatPeerDeath__Class**)(modloader::win::memory::resolve_rva(0x0474D1A8));
            }
            return cache;
        }
        inline app::BatPeerDeath__Class* get_class() {
            return il2cpp::get_class<app::BatPeerDeath__Class>(type_info(), "UberBehaviourTree.Events", "BatPeerDeath");
        }
        inline app::BatPeerDeath* create() {
            return il2cpp::create_object<app::BatPeerDeath>(get_class());
        }
    } // namespace BatPeerDeath
} // namespace app::classes::types
