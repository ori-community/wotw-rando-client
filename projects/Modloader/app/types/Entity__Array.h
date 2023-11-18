#pragma once
#include <Modloader/app/structs/Entity__Array.h>
#include <Modloader/app/structs/Entity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Entity__Array {
        inline app::Entity__Array__Class** type_info() {
            static app::Entity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Entity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Entity__Array__Class* get_class() {
            return il2cpp::get_class<app::Entity__Array__Class>(type_info(), "Moon", "Entity[]");
        }
        inline app::Entity__Array* create() {
            return il2cpp::create_object<app::Entity__Array>(get_class());
        }
    } // namespace Entity__Array
} // namespace app::classes::types
