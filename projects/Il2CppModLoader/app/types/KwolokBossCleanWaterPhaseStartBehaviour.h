#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCleanWaterPhaseStartBehaviour {
        namespace {
            app::KwolokBossCleanWaterPhaseStartBehaviour__Class* type_info_ref = nullptr;
        }
        app::KwolokBossCleanWaterPhaseStartBehaviour__Class** type_info = &type_info_ref;
        inline app::KwolokBossCleanWaterPhaseStartBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossCleanWaterPhaseStartBehaviour__Class>(type_info, "", "KwolokBossCleanWaterPhaseStartBehaviour");
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossCleanWaterPhaseStartBehaviour>(get_class());
        }
    } // namespace KwolokBossCleanWaterPhaseStartBehaviour
} // namespace app::classes::types
