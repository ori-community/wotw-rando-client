#pragma once
#include <Modloader/app/structs/GameWorldArea__Array.h>
#include <Modloader/app/structs/GameWorldArea__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameWorldArea__Array {
        inline app::GameWorldArea__Array__Class** type_info() {
            static app::GameWorldArea__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameWorldArea__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameWorldArea__Array__Class* get_class() {
            return il2cpp::get_class<app::GameWorldArea__Array__Class>(type_info(), "", "GameWorldArea[]");
        }
        inline app::GameWorldArea__Array* create() {
            return il2cpp::create_object<app::GameWorldArea__Array>(get_class());
        }
    } // namespace GameWorldArea__Array
} // namespace app::classes::types
