#pragma once
#include <Modloader/app/structs/LegacyPointAmbienceZone.h>
#include <Modloader/app/structs/LegacyPointAmbienceZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyPointAmbienceZone {
        inline app::LegacyPointAmbienceZone__Class** type_info() {
            static app::LegacyPointAmbienceZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyPointAmbienceZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyPointAmbienceZone__Class* get_class() {
            return il2cpp::get_class<app::LegacyPointAmbienceZone__Class>(type_info(), "", "LegacyPointAmbienceZone");
        }
        inline app::LegacyPointAmbienceZone* create() {
            return il2cpp::create_object<app::LegacyPointAmbienceZone>(get_class());
        }
    } // namespace LegacyPointAmbienceZone
} // namespace app::classes::types
