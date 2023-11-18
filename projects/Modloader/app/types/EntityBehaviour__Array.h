#pragma once
#include <Modloader/app/structs/EntityBehaviour__Array.h>
#include <Modloader/app/structs/EntityBehaviour__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviour__Array {
        inline app::EntityBehaviour__Array__Class** type_info() {
            static app::EntityBehaviour__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityBehaviour__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviour__Array__Class>(type_info(), "Moon", "EntityBehaviour[]");
        }
        inline app::EntityBehaviour__Array* create() {
            return il2cpp::create_object<app::EntityBehaviour__Array>(get_class());
        }
    } // namespace EntityBehaviour__Array
} // namespace app::classes::types
