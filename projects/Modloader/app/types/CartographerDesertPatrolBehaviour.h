#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour__Class.h>
#include <Modloader/app/structs/CartographerDesertPatrolBehaviour.h>

namespace app::classes::types {
    namespace CartographerDesertPatrolBehaviour {
        namespace {
            inline app::CartographerDesertPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::CartographerDesertPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::CartographerDesertPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CartographerDesertPatrolBehaviour__Class>(type_info, "Moon", "CartographerDesertPatrolBehaviour");
        }
        inline app::CartographerDesertPatrolBehaviour* create() {
            return il2cpp::create_object<app::CartographerDesertPatrolBehaviour>(get_class());
        }
    } // namespace CartographerDesertPatrolBehaviour
} // namespace app::classes::types
