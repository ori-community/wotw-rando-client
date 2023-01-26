#pragma once
#include <Modloader/app/structs/CheckpointFunctionality_CheckpointPositionMode__Enum.h>
#include <Modloader/app/structs/CheckpointFunctionality_CheckpointPositionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheckpointFunctionality_CheckpointPositionMode__Enum {
        inline app::CheckpointFunctionality_CheckpointPositionMode__Enum__Class** type_info() {
            static app::CheckpointFunctionality_CheckpointPositionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CheckpointFunctionality_CheckpointPositionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CheckpointFunctionality_CheckpointPositionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CheckpointFunctionality_CheckpointPositionMode__Enum__Class>(type_info(), "", "CheckpointFunctionality", "CheckpointPositionMode");
        }
        inline app::CheckpointFunctionality_CheckpointPositionMode__Enum* create() {
            return il2cpp::create_object<app::CheckpointFunctionality_CheckpointPositionMode__Enum>(get_class());
        }
    } // namespace CheckpointFunctionality_CheckpointPositionMode__Enum
} // namespace app::classes::types
