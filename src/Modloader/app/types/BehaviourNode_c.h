#pragma once
#include <Modloader/app/structs/BehaviourNode_c.h>
#include <Modloader/app/structs/BehaviourNode_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourNode_c {
        inline app::BehaviourNode_c__Class** type_info() {
            static app::BehaviourNode_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BehaviourNode_c__Class**)(modloader::win::memory::resolve_rva(0x04718C98));
            }
            return cache;
        }
        inline app::BehaviourNode_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourNode_c__Class>(type_info(), "Moon.BehaviourSystem", "BehaviourNode", "<>c");
        }
        inline app::BehaviourNode_c* create() {
            return il2cpp::create_object<app::BehaviourNode_c>(get_class());
        }
    } // namespace BehaviourNode_c
} // namespace app::classes::types
