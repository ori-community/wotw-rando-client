#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectChanges {
        namespace {
            app::GameObjectChanges__Class* type_info_ref = nullptr;
        }
        app::GameObjectChanges__Class** type_info = &type_info_ref;
        inline app::GameObjectChanges__Class* get_class() {
            return il2cpp::get_class<app::GameObjectChanges__Class>(type_info, "Moon.ReviewFramework", "GameObjectChanges");
        }
        inline app::GameObjectChanges* create() {
            return il2cpp::create_object<app::GameObjectChanges>(get_class());
        }
        inline app::GameObjectChanges__Array* create_array(int size) {
            return il2cpp::array_new<app::GameObjectChanges__Array>(get_class(), size);
        }
    } // namespace GameObjectChanges
} // namespace app::classes::types
