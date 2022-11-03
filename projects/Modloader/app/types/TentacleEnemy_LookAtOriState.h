#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEnemy_LookAtOriState {
        inline app::TentacleEnemy_LookAtOriState__Class** type_info = (app::TentacleEnemy_LookAtOriState__Class**)(modloader::win::memory::resolve_rva(0x0477B018));
        inline app::TentacleEnemy_LookAtOriState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_LookAtOriState__Class>(type_info, "", "TentacleEnemy", "LookAtOriState");
        }
        inline app::TentacleEnemy_LookAtOriState* create() {
            return il2cpp::create_object<app::TentacleEnemy_LookAtOriState>(get_class());
        }
    } // namespace TentacleEnemy_LookAtOriState
} // namespace app::classes::types
