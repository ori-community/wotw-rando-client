#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviourStatus__Enum {
        namespace {
            app::EntityBehaviourStatus__Enum__Class* type_info_ref = nullptr;
        }
        app::EntityBehaviourStatus__Enum__Class** type_info = &type_info_ref;
        inline app::EntityBehaviourStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourStatus__Enum__Class>(type_info, "Moon", "EntityBehaviourStatus");
        }
        inline app::EntityBehaviourStatus__Enum* create() {
            return il2cpp::create_object<app::EntityBehaviourStatus__Enum>(get_class());
        }
    } // namespace EntityBehaviourStatus__Enum
} // namespace app::classes::types
