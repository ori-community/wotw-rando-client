#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourStates {
        inline app::BehaviourStates__Class** type_info = (app::BehaviourStates__Class**)(modloader::win::memory::resolve_rva(0x04717360));
        inline app::BehaviourStates__Class* get_class() {
            return il2cpp::get_class<app::BehaviourStates__Class>(type_info, "UberBehaviourTree", "BehaviourStates");
        }
        inline app::BehaviourStates* create() {
            return il2cpp::create_object<app::BehaviourStates>(get_class());
        }
    } // namespace BehaviourStates
} // namespace app::classes::types
