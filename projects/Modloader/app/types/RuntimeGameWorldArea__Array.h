#pragma once
#include <Modloader/app/structs/RuntimeGameWorldArea__Array.h>
#include <Modloader/app/structs/RuntimeGameWorldArea__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeGameWorldArea__Array {
        inline app::RuntimeGameWorldArea__Array__Class** type_info() {
            static app::RuntimeGameWorldArea__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeGameWorldArea__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeGameWorldArea__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGameWorldArea__Array__Class>(type_info(), "", "RuntimeGameWorldArea[]");
        }
        inline app::RuntimeGameWorldArea__Array* create() {
            return il2cpp::create_object<app::RuntimeGameWorldArea__Array>(get_class());
        }
    } // namespace RuntimeGameWorldArea__Array
} // namespace app::classes::types
