#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityTask__Array {
        namespace {
            app::EntityTask__Array__Class* type_info_ref = nullptr;
        }
        app::EntityTask__Array__Class** type_info = &type_info_ref;
        inline app::EntityTask__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityTask__Array__Class>(type_info, "Moon.BehaviourSystem", "EntityTask[]");
        }
        inline app::EntityTask__Array* create() {
            return il2cpp::create_object<app::EntityTask__Array>(get_class());
        }
    } // namespace EntityTask__Array
} // namespace app::classes::types
