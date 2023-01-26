#pragma once
#include <Modloader/app/structs/PauseMenuInventoryElements.h>
#include <Modloader/app/structs/PauseMenuInventoryElements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PauseMenuInventoryElements {
        inline app::PauseMenuInventoryElements__Class** type_info() {
            static app::PauseMenuInventoryElements__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PauseMenuInventoryElements__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PauseMenuInventoryElements__Class* get_class() {
            return il2cpp::get_class<app::PauseMenuInventoryElements__Class>(type_info(), "", "PauseMenuInventoryElements");
        }
        inline app::PauseMenuInventoryElements* create() {
            return il2cpp::create_object<app::PauseMenuInventoryElements>(get_class());
        }
    } // namespace PauseMenuInventoryElements
} // namespace app::classes::types
