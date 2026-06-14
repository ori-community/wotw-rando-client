#pragma once
#include <Modloader/app/structs/MoonCustomDoorWithSlots.h>
#include <Modloader/app/structs/MoonCustomDoorWithSlots__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonCustomDoorWithSlots {
        inline app::MoonCustomDoorWithSlots__Class** type_info() {
            static app::MoonCustomDoorWithSlots__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonCustomDoorWithSlots__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonCustomDoorWithSlots__Class* get_class() {
            return il2cpp::get_class<app::MoonCustomDoorWithSlots__Class>(type_info(), "", "MoonCustomDoorWithSlots");
        }
        inline app::MoonCustomDoorWithSlots* create() {
            return il2cpp::create_object<app::MoonCustomDoorWithSlots>(get_class());
        }
    } // namespace MoonCustomDoorWithSlots
} // namespace app::classes::types
