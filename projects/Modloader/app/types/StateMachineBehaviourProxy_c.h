#pragma once
#include <Modloader/app/structs/StateMachineBehaviourProxy_c.h>
#include <Modloader/app/structs/StateMachineBehaviourProxy_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviourProxy_c {
        inline app::StateMachineBehaviourProxy_c__Class** type_info() {
            static app::StateMachineBehaviourProxy_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateMachineBehaviourProxy_c__Class**)(modloader::win::memory::resolve_rva(0x04795D38));
            }
            return cache;
        }
        inline app::StateMachineBehaviourProxy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::StateMachineBehaviourProxy_c__Class>(type_info(), "", "StateMachineBehaviourProxy", "<>c");
        }
        inline app::StateMachineBehaviourProxy_c* create() {
            return il2cpp::create_object<app::StateMachineBehaviourProxy_c>(get_class());
        }
    } // namespace StateMachineBehaviourProxy_c
} // namespace app::classes::types
