#pragma once
#include <Modloader/app/structs/GameObjectChanges.h>
#include <Modloader/app/structs/GameObjectChanges__Array.h>
#include <Modloader/app/structs/GameObjectChanges__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameObjectChanges {
        inline app::GameObjectChanges__Class** type_info() {
            static app::GameObjectChanges__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameObjectChanges__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameObjectChanges__Class* get_class() {
            return il2cpp::get_class<app::GameObjectChanges__Class>(type_info(), "Moon.ReviewFramework", "GameObjectChanges");
        }
        inline app::GameObjectChanges* create() {
            return il2cpp::create_object<app::GameObjectChanges>(get_class());
        }
        inline app::GameObjectChanges__Array* create_array(int size) {
            return il2cpp::array_new<app::GameObjectChanges__Array>(get_class(), size);
        }
        inline app::GameObjectChanges__Array* create_array(const std::vector<app::GameObjectChanges*>& items) {
            return il2cpp::array_new<app::GameObjectChanges__Array>(get_class(), items);
        }
    } // namespace GameObjectChanges
} // namespace app::classes::types
