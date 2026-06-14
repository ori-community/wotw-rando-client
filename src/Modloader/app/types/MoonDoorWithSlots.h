#pragma once
#include <Modloader/app/structs/MoonDoorWithSlots.h>
#include <Modloader/app/structs/MoonDoorWithSlots__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonDoorWithSlots {
        inline app::MoonDoorWithSlots__Class** type_info() {
            static app::MoonDoorWithSlots__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonDoorWithSlots__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonDoorWithSlots__Class* get_class() {
            return il2cpp::get_class<app::MoonDoorWithSlots__Class>(type_info(), "", "MoonDoorWithSlots");
        }
        inline app::MoonDoorWithSlots* create() {
            return il2cpp::create_object<app::MoonDoorWithSlots>(get_class());
        }
    } // namespace MoonDoorWithSlots
} // namespace app::classes::types
