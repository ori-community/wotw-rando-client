#pragma once
#include <Modloader/app/structs/LegacyDoorSlot.h>
#include <Modloader/app/structs/LegacyDoorSlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyDoorSlot {
        inline app::LegacyDoorSlot__Class** type_info() {
            static app::LegacyDoorSlot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyDoorSlot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyDoorSlot__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoorSlot__Class>(type_info(), "", "LegacyDoorSlot");
        }
        inline app::LegacyDoorSlot* create() {
            return il2cpp::create_object<app::LegacyDoorSlot>(get_class());
        }
    } // namespace LegacyDoorSlot
} // namespace app::classes::types
