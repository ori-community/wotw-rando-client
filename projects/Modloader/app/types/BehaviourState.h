#pragma once
#include <Modloader/app/structs/BehaviourState.h>
#include <Modloader/app/structs/BehaviourState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourState {
        inline app::BehaviourState__Class** type_info() {
            static app::BehaviourState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BehaviourState__Class**)(modloader::win::memory::resolve_rva(0x0471C5E8));
            }
            return cache;
        }
        inline app::BehaviourState__Class* get_class() {
            return il2cpp::get_class<app::BehaviourState__Class>(type_info(), "UberBehaviourTree", "BehaviourState");
        }
        inline app::BehaviourState* create() {
            return il2cpp::create_object<app::BehaviourState>(get_class());
        }
    } // namespace BehaviourState
} // namespace app::classes::types
