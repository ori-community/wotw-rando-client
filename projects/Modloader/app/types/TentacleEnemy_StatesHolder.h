#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEnemy_StatesHolder {
        inline app::TentacleEnemy_StatesHolder__Class** type_info = (app::TentacleEnemy_StatesHolder__Class**)(modloader::win::memory::resolve_rva(0x04729230));
        inline app::TentacleEnemy_StatesHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_StatesHolder__Class>(type_info, "", "TentacleEnemy", "StatesHolder");
        }
        inline app::TentacleEnemy_StatesHolder* create() {
            return il2cpp::create_object<app::TentacleEnemy_StatesHolder>(get_class());
        }
    } // namespace TentacleEnemy_StatesHolder
} // namespace app::classes::types
