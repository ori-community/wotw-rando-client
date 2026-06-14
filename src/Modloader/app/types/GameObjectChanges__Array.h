#pragma once
#include <Modloader/app/structs/GameObjectChanges__Array.h>
#include <Modloader/app/structs/GameObjectChanges__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameObjectChanges__Array {
        inline app::GameObjectChanges__Array__Class** type_info() {
            static app::GameObjectChanges__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameObjectChanges__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameObjectChanges__Array__Class* get_class() {
            return il2cpp::get_class<app::GameObjectChanges__Array__Class>(type_info(), "Moon.ReviewFramework", "GameObjectChanges[]");
        }
        inline app::GameObjectChanges__Array* create() {
            return il2cpp::create_object<app::GameObjectChanges__Array>(get_class());
        }
    } // namespace GameObjectChanges__Array
} // namespace app::classes::types
