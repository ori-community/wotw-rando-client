#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectChanges__Array {
        namespace {
            app::GameObjectChanges__Array__Class* type_info_ref = nullptr;
        }
        app::GameObjectChanges__Array__Class** type_info = &type_info_ref;
        inline app::GameObjectChanges__Array__Class* get_class() {
            return il2cpp::get_class<app::GameObjectChanges__Array__Class>(type_info, "Moon.ReviewFramework", "GameObjectChanges[]");
        }
        inline app::GameObjectChanges__Array* create() {
            return il2cpp::create_object<app::GameObjectChanges__Array>(get_class());
        }
    } // namespace GameObjectChanges__Array
} // namespace app::classes::types
