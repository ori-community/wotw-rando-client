#pragma once
#include <Modloader/app/structs/BossRaceHandler.h>
#include <Modloader/app/structs/BossRaceHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BossRaceHandler {
        inline app::BossRaceHandler__Class** type_info() {
            static app::BossRaceHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BossRaceHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BossRaceHandler__Class* get_class() {
            return il2cpp::get_class<app::BossRaceHandler__Class>(type_info(), "", "BossRaceHandler");
        }
        inline app::BossRaceHandler* create() {
            return il2cpp::create_object<app::BossRaceHandler>(get_class());
        }
    } // namespace BossRaceHandler
} // namespace app::classes::types
