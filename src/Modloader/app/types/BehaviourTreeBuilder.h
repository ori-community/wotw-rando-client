#pragma once
#include <Modloader/app/structs/BehaviourTreeBuilder.h>
#include <Modloader/app/structs/BehaviourTreeBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourTreeBuilder {
        inline app::BehaviourTreeBuilder__Class** type_info() {
            static app::BehaviourTreeBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BehaviourTreeBuilder__Class**)(modloader::win::memory::resolve_rva(0x0477E9C0));
            }
            return cache;
        }
        inline app::BehaviourTreeBuilder__Class* get_class() {
            return il2cpp::get_class<app::BehaviourTreeBuilder__Class>(type_info(), "UberBehaviourTree", "BehaviourTreeBuilder");
        }
        inline app::BehaviourTreeBuilder* create() {
            return il2cpp::create_object<app::BehaviourTreeBuilder>(get_class());
        }
    } // namespace BehaviourTreeBuilder
} // namespace app::classes::types
