#pragma once
#include <Modloader/app/structs/SetNightBerryRespawnPosition.h>
#include <Modloader/app/structs/SetNightBerryRespawnPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetNightBerryRespawnPosition {
        inline app::SetNightBerryRespawnPosition__Class** type_info() {
            static app::SetNightBerryRespawnPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetNightBerryRespawnPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetNightBerryRespawnPosition__Class* get_class() {
            return il2cpp::get_class<app::SetNightBerryRespawnPosition__Class>(type_info(), "", "SetNightBerryRespawnPosition");
        }
        inline app::SetNightBerryRespawnPosition* create() {
            return il2cpp::create_object<app::SetNightBerryRespawnPosition>(get_class());
        }
    } // namespace SetNightBerryRespawnPosition
} // namespace app::classes::types
