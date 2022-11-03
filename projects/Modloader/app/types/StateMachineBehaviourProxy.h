#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateMachineBehaviourProxy {
        namespace {
            inline app::StateMachineBehaviourProxy__Class* type_info_ref = nullptr;
        }
        inline app::StateMachineBehaviourProxy__Class** type_info = &type_info_ref;
        inline app::StateMachineBehaviourProxy__Class* get_class() {
            return il2cpp::get_class<app::StateMachineBehaviourProxy__Class>(type_info, "", "StateMachineBehaviourProxy");
        }
        inline app::StateMachineBehaviourProxy* create() {
            return il2cpp::create_object<app::StateMachineBehaviourProxy>(get_class());
        }
    } // namespace StateMachineBehaviourProxy
} // namespace app::classes::types
