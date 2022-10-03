#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CheckpointRestrictZone_CheckpointRestrictType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CheckpointRestrictZone_CheckpointRestrictType__Enum__Class** type_info;
        inline app::CheckpointRestrictZone_CheckpointRestrictType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CheckpointRestrictZone_CheckpointRestrictType__Enum__Class>(type_info, "", "CheckpointRestrictZone", "CheckpointRestrictType");
        }
        inline app::CheckpointRestrictZone_CheckpointRestrictType__Enum* create() {
            return il2cpp::create_object<app::CheckpointRestrictZone_CheckpointRestrictType__Enum>(get_class());
        }
    } // namespace CheckpointRestrictZone_CheckpointRestrictType__Enum
} // namespace app::classes::types
