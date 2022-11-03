#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BehaviourNode__Array {
        namespace {
            inline app::BehaviourNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::BehaviourNode__Array__Class** type_info = &type_info_ref;
        inline app::BehaviourNode__Array__Class* get_class() {
            return il2cpp::get_class<app::BehaviourNode__Array__Class>(type_info, "Moon.BehaviourSystem", "BehaviourNode[]");
        }
        inline app::BehaviourNode__Array* create() {
            return il2cpp::create_object<app::BehaviourNode__Array>(get_class());
        }
    } // namespace BehaviourNode__Array
} // namespace app::classes::types
