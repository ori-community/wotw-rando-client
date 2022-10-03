#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceRestoreCheckpointState_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceRestoreCheckpointState_c__Class** type_info;
        inline app::RaceRestoreCheckpointState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceRestoreCheckpointState_c__Class>(type_info, "", "RaceRestoreCheckpointState", "<>c");
        }
        inline app::RaceRestoreCheckpointState_c* create() {
            return il2cpp::create_object<app::RaceRestoreCheckpointState_c>(get_class());
        }
    } // namespace RaceRestoreCheckpointState_c
} // namespace app::classes::types
