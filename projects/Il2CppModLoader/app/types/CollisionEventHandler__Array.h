#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionEventHandler__Array {
        namespace {
            app::CollisionEventHandler__Array__Class* type_info_ref = nullptr;
        }
        app::CollisionEventHandler__Array__Class** type_info = &type_info_ref;
        inline app::CollisionEventHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::CollisionEventHandler__Array__Class>(type_info, "Moon", "CollisionEventHandler[]");
        }
        inline app::CollisionEventHandler__Array* create() {
            return il2cpp::create_object<app::CollisionEventHandler__Array>(get_class());
        }
    } // namespace CollisionEventHandler__Array
} // namespace app::classes::types
