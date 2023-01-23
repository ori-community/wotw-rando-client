#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyPointAmbienceZone__Class.h>
#include <Modloader/app/structs/LegacyPointAmbienceZone.h>

namespace app::classes::types {
    namespace LegacyPointAmbienceZone {
        namespace {
            inline app::LegacyPointAmbienceZone__Class* type_info_ref = nullptr;
        }
        inline app::LegacyPointAmbienceZone__Class** type_info = &type_info_ref;
        inline app::LegacyPointAmbienceZone__Class* get_class() {
            return il2cpp::get_class<app::LegacyPointAmbienceZone__Class>(type_info, "", "LegacyPointAmbienceZone");
        }
        inline app::LegacyPointAmbienceZone* create() {
            return il2cpp::create_object<app::LegacyPointAmbienceZone>(get_class());
        }
    } // namespace LegacyPointAmbienceZone
} // namespace app::classes::types
