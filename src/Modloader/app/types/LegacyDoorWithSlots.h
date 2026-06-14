#pragma once
#include <Modloader/app/structs/LegacyDoorWithSlots.h>
#include <Modloader/app/structs/LegacyDoorWithSlots__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyDoorWithSlots {
        inline app::LegacyDoorWithSlots__Class** type_info() {
            static app::LegacyDoorWithSlots__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyDoorWithSlots__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyDoorWithSlots__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoorWithSlots__Class>(type_info(), "", "LegacyDoorWithSlots");
        }
        inline app::LegacyDoorWithSlots* create() {
            return il2cpp::create_object<app::LegacyDoorWithSlots>(get_class());
        }
    } // namespace LegacyDoorWithSlots
} // namespace app::classes::types
