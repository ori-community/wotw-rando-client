#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CheckpointFunctionality_CheckpointPositionMode__Enum {
        namespace {
            app::CheckpointFunctionality_CheckpointPositionMode__Enum__Class* type_info_ref = nullptr;
        }
        app::CheckpointFunctionality_CheckpointPositionMode__Enum__Class** type_info = &type_info_ref;
        inline app::CheckpointFunctionality_CheckpointPositionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CheckpointFunctionality_CheckpointPositionMode__Enum__Class>(type_info, "", "CheckpointFunctionality", "CheckpointPositionMode");
        }
        inline app::CheckpointFunctionality_CheckpointPositionMode__Enum* create() {
            return il2cpp::create_object<app::CheckpointFunctionality_CheckpointPositionMode__Enum>(get_class());
        }
    } // namespace CheckpointFunctionality_CheckpointPositionMode__Enum
} // namespace app::classes::types
