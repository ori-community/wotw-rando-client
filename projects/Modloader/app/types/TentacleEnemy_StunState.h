#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleEnemy_StunState__Class.h>
#include <Modloader/app/structs/TentacleEnemy_StunState.h>

namespace app::classes::types {
    namespace TentacleEnemy_StunState {
        inline app::TentacleEnemy_StunState__Class** type_info = (app::TentacleEnemy_StunState__Class**)(modloader::win::memory::resolve_rva(0x04702D88));
        inline app::TentacleEnemy_StunState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_StunState__Class>(type_info, "", "TentacleEnemy", "StunState");
        }
        inline app::TentacleEnemy_StunState* create() {
            return il2cpp::create_object<app::TentacleEnemy_StunState>(get_class());
        }
    } // namespace TentacleEnemy_StunState
} // namespace app::classes::types
