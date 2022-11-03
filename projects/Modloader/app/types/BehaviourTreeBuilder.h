#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourTreeBuilder {
        inline app::BehaviourTreeBuilder__Class** type_info = (app::BehaviourTreeBuilder__Class**)(modloader::win::memory::resolve_rva(0x0477E9C0));
        inline app::BehaviourTreeBuilder__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeBuilder__Class>(type_info, "UberBehaviourTree", "BehaviourTreeBuilder");
        }
        inline app::BehaviourTreeBuilder* create() {
            return il2cpp::create_object<app::BehaviourTreeBuilder>(get_class());
        }
    } // namespace BehaviourTreeBuilder
} // namespace app::classes::types
