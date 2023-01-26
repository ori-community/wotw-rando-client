#pragma once
#include <Modloader/app/structs/StateMachineBehaviourProxy_IReceiver.h>
#include <Modloader/app/structs/StateMachineBehaviourProxy_IReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviourProxy_IReceiver {
        inline app::StateMachineBehaviourProxy_IReceiver__Class** type_info() {
            static app::StateMachineBehaviourProxy_IReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateMachineBehaviourProxy_IReceiver__Class**)(modloader::win::memory::resolve_rva(0x04708E80));
            }
            return cache;
        }
        inline app::StateMachineBehaviourProxy_IReceiver__Class* get_class() {
            return il2cpp::get_nested_class<app::StateMachineBehaviourProxy_IReceiver__Class>(type_info(), "", "StateMachineBehaviourProxy", "IReceiver");
        }
    } // namespace StateMachineBehaviourProxy_IReceiver
} // namespace app::classes::types
