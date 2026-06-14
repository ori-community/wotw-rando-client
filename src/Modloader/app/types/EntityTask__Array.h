#pragma once
#include <Modloader/app/structs/EntityTask__Array.h>
#include <Modloader/app/structs/EntityTask__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityTask__Array {
        inline app::EntityTask__Array__Class** type_info() {
            static app::EntityTask__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityTask__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityTask__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityTask__Array__Class>(type_info(), "Moon.BehaviourSystem", "EntityTask[]");
        }
        inline app::EntityTask__Array* create() {
            return il2cpp::create_object<app::EntityTask__Array>(get_class());
        }
    } // namespace EntityTask__Array
} // namespace app::classes::types
