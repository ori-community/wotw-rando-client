#pragma once
#include <Modloader/app/structs/BehaviourEvents.h>
#include <Modloader/app/structs/BehaviourEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourEvents {
        inline app::BehaviourEvents__Class** type_info() {
            static app::BehaviourEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BehaviourEvents__Class**)(modloader::win::memory::resolve_rva(0x04770658));
            }
            return cache;
        }
        inline app::BehaviourEvents__Class* get_class() {
            return il2cpp::get_class<app::BehaviourEvents__Class>(type_info(), "UberBehaviourTree", "BehaviourEvents");
        }
        inline app::BehaviourEvents* create() {
            return il2cpp::create_object<app::BehaviourEvents>(get_class());
        }
    } // namespace BehaviourEvents
} // namespace app::classes::types
