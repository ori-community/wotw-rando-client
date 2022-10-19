#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBehaviourEvent__Array {
        namespace {
            inline app::IBehaviourEvent__Array__Class* type_info_ref = nullptr;
        }
        inline app::IBehaviourEvent__Array__Class** type_info = &type_info_ref;
        inline app::IBehaviourEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourEvent__Array__Class>(type_info, "UberBehaviourTree", "IBehaviourEvent[]");
        }
        inline app::IBehaviourEvent__Array* create() {
            return il2cpp::create_object<app::IBehaviourEvent__Array>(get_class());
        }
    } // namespace IBehaviourEvent__Array
} // namespace app::classes::types
