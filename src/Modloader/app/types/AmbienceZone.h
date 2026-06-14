#pragma once
#include <Modloader/app/structs/AmbienceZone.h>
#include <Modloader/app/structs/AmbienceZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmbienceZone {
        inline app::AmbienceZone__Class** type_info() {
            static app::AmbienceZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmbienceZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmbienceZone__Class* get_class() {
            return il2cpp::get_class<app::AmbienceZone__Class>(type_info(), "", "AmbienceZone");
        }
        inline app::AmbienceZone* create() {
            return il2cpp::create_object<app::AmbienceZone>(get_class());
        }
    } // namespace AmbienceZone
} // namespace app::classes::types
