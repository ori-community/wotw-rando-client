#pragma once
#include <Modloader/app/structs/BehaviourStates.h>
#include <Modloader/app/structs/BehaviourStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourStates {
        inline app::BehaviourStates__Class** type_info() {
            static app::BehaviourStates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BehaviourStates__Class**)(modloader::win::memory::resolve_rva(0x04717360));
            }
            return cache;
        }
        inline app::BehaviourStates__Class* get_class() {
            return il2cpp::get_class<app::BehaviourStates__Class>(type_info(), "UberBehaviourTree", "BehaviourStates");
        }
        inline app::BehaviourStates* create() {
            return il2cpp::create_object<app::BehaviourStates>(get_class());
        }
    } // namespace BehaviourStates
} // namespace app::classes::types
