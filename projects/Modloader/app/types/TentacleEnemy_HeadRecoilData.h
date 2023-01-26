#pragma once
#include <Modloader/app/structs/TentacleEnemy_HeadRecoilData.h>
#include <Modloader/app/structs/TentacleEnemy_HeadRecoilData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_HeadRecoilData {
        inline app::TentacleEnemy_HeadRecoilData__Class** type_info() {
            static app::TentacleEnemy_HeadRecoilData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleEnemy_HeadRecoilData__Class**)(modloader::win::memory::resolve_rva(0x04700AD0));
            }
            return cache;
        }
        inline app::TentacleEnemy_HeadRecoilData__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_HeadRecoilData__Class>(type_info(), "", "TentacleEnemy", "HeadRecoilData");
        }
        inline app::TentacleEnemy_HeadRecoilData* create() {
            return il2cpp::create_object<app::TentacleEnemy_HeadRecoilData>(get_class());
        }
    } // namespace TentacleEnemy_HeadRecoilData
} // namespace app::classes::types
