#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleSpawnBehaviour_ExecutionState__Enum__Class.h>
#include <Modloader/app/structs/TentacleSpawnBehaviour_ExecutionState__Enum.h>

namespace app::classes::types {
    namespace TentacleSpawnBehaviour_ExecutionState__Enum {
        namespace {
            inline app::TentacleSpawnBehaviour_ExecutionState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TentacleSpawnBehaviour_ExecutionState__Enum__Class** type_info = &type_info_ref;
        inline app::TentacleSpawnBehaviour_ExecutionState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleSpawnBehaviour_ExecutionState__Enum__Class>(type_info, "Moon", "TentacleSpawnBehaviour", "ExecutionState");
        }
        inline app::TentacleSpawnBehaviour_ExecutionState__Enum* create() {
            return il2cpp::create_object<app::TentacleSpawnBehaviour_ExecutionState__Enum>(get_class());
        }
    } // namespace TentacleSpawnBehaviour_ExecutionState__Enum
} // namespace app::classes::types
