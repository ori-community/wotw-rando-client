#pragma once
#include <Modloader/app/structs/TriggerZone.h>
#include <Modloader/app/structs/TriggerZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerZone {
        inline app::TriggerZone__Class** type_info() {
            static app::TriggerZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerZone__Class* get_class() {
            return il2cpp::get_class<app::TriggerZone__Class>(type_info(), "Moon", "TriggerZone");
        }
        inline app::TriggerZone* create() {
            return il2cpp::create_object<app::TriggerZone>(get_class());
        }
    } // namespace TriggerZone
} // namespace app::classes::types
