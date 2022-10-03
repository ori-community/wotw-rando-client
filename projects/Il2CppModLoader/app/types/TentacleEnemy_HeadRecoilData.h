#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_HeadRecoilData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEnemy_HeadRecoilData__Class** type_info;
        inline app::TentacleEnemy_HeadRecoilData__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_HeadRecoilData__Class>(type_info, "", "TentacleEnemy", "HeadRecoilData");
        }
        inline app::TentacleEnemy_HeadRecoilData* create() {
            return il2cpp::create_object<app::TentacleEnemy_HeadRecoilData>(get_class());
        }
    } // namespace TentacleEnemy_HeadRecoilData
} // namespace app::classes::types
