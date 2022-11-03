#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityBehaviourNode__Array {
        namespace {
            inline app::EntityBehaviourNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::EntityBehaviourNode__Array__Class** type_info = &type_info_ref;
        inline app::EntityBehaviourNode__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourNode__Array__Class>(type_info, "Moon.BehaviourSystem", "EntityBehaviourNode[]");
        }
        inline app::EntityBehaviourNode__Array* create() {
            return il2cpp::create_object<app::EntityBehaviourNode__Array>(get_class());
        }
    } // namespace EntityBehaviourNode__Array
} // namespace app::classes::types
