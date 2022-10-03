#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartographerDesertPatrolBehaviour_IdleStop {
        namespace {
            app::CartographerDesertPatrolBehaviour_IdleStop__Class* type_info_ref = nullptr;
        }
        app::CartographerDesertPatrolBehaviour_IdleStop__Class** type_info = &type_info_ref;
        inline app::CartographerDesertPatrolBehaviour_IdleStop__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerDesertPatrolBehaviour_IdleStop__Class>(type_info, "Moon", "CartographerDesertPatrolBehaviour", "IdleStop");
        }
        inline app::CartographerDesertPatrolBehaviour_IdleStop* create() {
            return il2cpp::create_object<app::CartographerDesertPatrolBehaviour_IdleStop>(get_class());
        }
    } // namespace CartographerDesertPatrolBehaviour_IdleStop
} // namespace app::classes::types
