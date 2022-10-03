#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BossRaceData {
        namespace {
            app::BossRaceData__Class* type_info_ref = nullptr;
        }
        app::BossRaceData__Class** type_info = &type_info_ref;
        inline app::BossRaceData__Class* get_class() {
            return il2cpp::get_class<app::BossRaceData__Class>(type_info, "", "BossRaceData");
        }
        inline app::BossRaceData* create() {
            return il2cpp::create_object<app::BossRaceData>(get_class());
        }
    } // namespace BossRaceData
} // namespace app::classes::types
