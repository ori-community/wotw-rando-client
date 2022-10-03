#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartographerDesertPatrolBehaviour {
        namespace {
            app::CartographerDesertPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        app::CartographerDesertPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::CartographerDesertPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CartographerDesertPatrolBehaviour__Class>(type_info, "Moon", "CartographerDesertPatrolBehaviour");
        }
        inline app::CartographerDesertPatrolBehaviour* create() {
            return il2cpp::create_object<app::CartographerDesertPatrolBehaviour>(get_class());
        }
    } // namespace CartographerDesertPatrolBehaviour
} // namespace app::classes::types
