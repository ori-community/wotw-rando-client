#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum {
        namespace {
            inline app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class** type_info = &type_info_ref;
        inline app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class>(type_info, "Moon", "CartographerDesertPatrolBehaviour+IdleStop", "StopType");
        }
        inline app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum* create() {
            return il2cpp::create_object<app::CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum>(get_class());
        }
    } // namespace CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum
} // namespace app::classes::types
