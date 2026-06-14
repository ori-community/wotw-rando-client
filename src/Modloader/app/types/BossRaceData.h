#pragma once
#include <Modloader/app/structs/BossRaceData.h>
#include <Modloader/app/structs/BossRaceData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BossRaceData {
        inline app::BossRaceData__Class** type_info() {
            static app::BossRaceData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BossRaceData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BossRaceData__Class* get_class() {
            return il2cpp::get_class<app::BossRaceData__Class>(type_info(), "", "BossRaceData");
        }
        inline app::BossRaceData* create() {
            return il2cpp::create_object<app::BossRaceData>(get_class());
        }
    } // namespace BossRaceData
} // namespace app::classes::types
