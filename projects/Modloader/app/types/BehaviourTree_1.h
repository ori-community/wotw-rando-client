#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourTree_1 {
        inline app::BehaviourTree_1__Class** type_info = (app::BehaviourTree_1__Class**)(modloader::win::memory::resolve_rva(0x047193B0));
        inline app::BehaviourTree_1__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTree_1__Class>(type_info, "UberBehaviourTree", "BehaviourTree");
        }
        inline app::BehaviourTree_1* create() {
            return il2cpp::create_object<app::BehaviourTree_1>(get_class());
        }
    } // namespace BehaviourTree_1
} // namespace app::classes::types
