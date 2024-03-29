#pragma once
#include <Modloader/app/structs/BehaviourEventIdGenerator.h>
#include <Modloader/app/structs/BehaviourEventIdGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourEventIdGenerator {
        inline app::BehaviourEventIdGenerator__Class** type_info() {
            static app::BehaviourEventIdGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BehaviourEventIdGenerator__Class**)(modloader::win::memory::resolve_rva(0x047548F0));
            }
            return cache;
        }
        inline app::BehaviourEventIdGenerator__Class* get_class() {
            return il2cpp::get_class<app::BehaviourEventIdGenerator__Class>(type_info(), "UberBehaviourTree", "BehaviourEventIdGenerator");
        }
        inline app::BehaviourEventIdGenerator* create() {
            return il2cpp::create_object<app::BehaviourEventIdGenerator>(get_class());
        }
    } // namespace BehaviourEventIdGenerator
} // namespace app::classes::types
