#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityBehaviourStatus__Enum {
        namespace {
            inline app::EntityBehaviourStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EntityBehaviourStatus__Enum__Class** type_info = &type_info_ref;
        inline app::EntityBehaviourStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourStatus__Enum__Class>(type_info, "Moon", "EntityBehaviourStatus");
        }
        inline app::EntityBehaviourStatus__Enum* create() {
            return il2cpp::create_object<app::EntityBehaviourStatus__Enum>(get_class());
        }
    } // namespace EntityBehaviourStatus__Enum
} // namespace app::classes::types
