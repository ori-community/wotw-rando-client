#pragma once
#include <Modloader/app/structs/EscapeRaceData.h>
#include <Modloader/app/structs/EscapeRaceData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EscapeRaceData {
        inline app::EscapeRaceData__Class** type_info() {
            static app::EscapeRaceData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EscapeRaceData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EscapeRaceData__Class* get_class() {
            return il2cpp::get_class<app::EscapeRaceData__Class>(type_info(), "Moon.Race", "EscapeRaceData");
        }
        inline app::EscapeRaceData* create() {
            return il2cpp::create_object<app::EscapeRaceData>(get_class());
        }
    } // namespace EscapeRaceData
} // namespace app::classes::types
