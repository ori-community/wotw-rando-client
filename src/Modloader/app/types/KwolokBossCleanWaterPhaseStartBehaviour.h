#pragma once
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCleanWaterPhaseStartBehaviour {
        inline app::KwolokBossCleanWaterPhaseStartBehaviour__Class** type_info() {
            static app::KwolokBossCleanWaterPhaseStartBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossCleanWaterPhaseStartBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossCleanWaterPhaseStartBehaviour__Class>(type_info(), "", "KwolokBossCleanWaterPhaseStartBehaviour");
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossCleanWaterPhaseStartBehaviour>(get_class());
        }
    } // namespace KwolokBossCleanWaterPhaseStartBehaviour
} // namespace app::classes::types
