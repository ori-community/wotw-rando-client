#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionEventHandler_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CollisionEventHandler_c__Class** type_info;
        inline app::CollisionEventHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CollisionEventHandler_c__Class>(type_info, "Moon", "CollisionEventHandler", "<>c");
        }
        inline app::CollisionEventHandler_c* create() {
            return il2cpp::create_object<app::CollisionEventHandler_c>(get_class());
        }
    } // namespace CollisionEventHandler_c
} // namespace app::classes::types
