#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionFilter {
        namespace {
            app::CollisionFilter__Class* type_info_ref = nullptr;
        }
        app::CollisionFilter__Class** type_info = &type_info_ref;
        inline app::CollisionFilter__Class* get_class() {
            return il2cpp::get_class<app::CollisionFilter__Class>(type_info, "", "CollisionFilter");
        }
        inline app::CollisionFilter* create() {
            return il2cpp::create_object<app::CollisionFilter>(get_class());
        }
    } // namespace CollisionFilter
} // namespace app::classes::types
