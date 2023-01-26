#pragma once
#include <Modloader/app/structs/MoonDoorSlot.h>
#include <Modloader/app/structs/MoonDoorSlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonDoorSlot {
        inline app::MoonDoorSlot__Class** type_info() {
            static app::MoonDoorSlot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonDoorSlot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonDoorSlot__Class* get_class() {
            return il2cpp::get_class<app::MoonDoorSlot__Class>(type_info(), "", "MoonDoorSlot");
        }
        inline app::MoonDoorSlot* create() {
            return il2cpp::create_object<app::MoonDoorSlot>(get_class());
        }
    } // namespace MoonDoorSlot
} // namespace app::classes::types
