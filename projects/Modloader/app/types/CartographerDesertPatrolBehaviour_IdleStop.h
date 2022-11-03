#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartographerDesertPatrolBehaviour_IdleStop {
        namespace {
            inline app::CartographerDesertPatrolBehaviour_IdleStop__Class* type_info_ref = nullptr;
        }
        inline app::CartographerDesertPatrolBehaviour_IdleStop__Class** type_info = &type_info_ref;
        inline app::CartographerDesertPatrolBehaviour_IdleStop__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerDesertPatrolBehaviour_IdleStop__Class>(type_info, "Moon", "CartographerDesertPatrolBehaviour", "IdleStop");
        }
        inline app::CartographerDesertPatrolBehaviour_IdleStop* create() {
            return il2cpp::create_object<app::CartographerDesertPatrolBehaviour_IdleStop>(get_class());
        }
    } // namespace CartographerDesertPatrolBehaviour_IdleStop
} // namespace app::classes::types
