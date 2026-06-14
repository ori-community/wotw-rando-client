#pragma once
#include <Modloader/app/structs/TentacleSpawnBehaviour_ExecutionState__Enum.h>
#include <Modloader/app/structs/TentacleSpawnBehaviour_ExecutionState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleSpawnBehaviour_ExecutionState__Enum {
        inline app::TentacleSpawnBehaviour_ExecutionState__Enum__Class** type_info() {
            static app::TentacleSpawnBehaviour_ExecutionState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleSpawnBehaviour_ExecutionState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleSpawnBehaviour_ExecutionState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleSpawnBehaviour_ExecutionState__Enum__Class>(type_info(), "Moon", "TentacleSpawnBehaviour", "ExecutionState");
        }
        inline app::TentacleSpawnBehaviour_ExecutionState__Enum* create() {
            return il2cpp::create_object<app::TentacleSpawnBehaviour_ExecutionState__Enum>(get_class());
        }
    } // namespace TentacleSpawnBehaviour_ExecutionState__Enum
} // namespace app::classes::types
