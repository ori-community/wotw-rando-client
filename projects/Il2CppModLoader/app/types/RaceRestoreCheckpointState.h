#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceRestoreCheckpointState {
        inline app::RaceRestoreCheckpointState__Class** type_info = (app::RaceRestoreCheckpointState__Class**)(modloader::win::memory::resolve_rva(0x04722A50));
        inline app::RaceRestoreCheckpointState__Class* get_class() {
            return il2cpp::get_class<app::RaceRestoreCheckpointState__Class>(type_info, "", "RaceRestoreCheckpointState");
        }
        inline app::RaceRestoreCheckpointState* create() {
            return il2cpp::create_object<app::RaceRestoreCheckpointState>(get_class());
        }
    } // namespace RaceRestoreCheckpointState
} // namespace app::classes::types
