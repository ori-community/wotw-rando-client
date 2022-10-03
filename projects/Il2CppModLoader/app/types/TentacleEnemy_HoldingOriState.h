#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_HoldingOriState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEnemy_HoldingOriState__Class** type_info;
        inline app::TentacleEnemy_HoldingOriState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_HoldingOriState__Class>(type_info, "", "TentacleEnemy", "HoldingOriState");
        }
        inline app::TentacleEnemy_HoldingOriState* create() {
            return il2cpp::create_object<app::TentacleEnemy_HoldingOriState>(get_class());
        }
    } // namespace TentacleEnemy_HoldingOriState
} // namespace app::classes::types
