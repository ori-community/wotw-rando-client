#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateMachineBehaviourProxy_IReceiver {
        inline app::StateMachineBehaviourProxy_IReceiver__Class** type_info = (app::StateMachineBehaviourProxy_IReceiver__Class**)(modloader::win::memory::resolve_rva(0x04708E80));
        inline app::StateMachineBehaviourProxy_IReceiver__Class* get_class() {
            return il2cpp::get_nested_class<app::StateMachineBehaviourProxy_IReceiver__Class>(type_info, "", "StateMachineBehaviourProxy", "IReceiver");
        }
    } // namespace StateMachineBehaviourProxy_IReceiver
} // namespace app::classes::types
