#pragma once
#include <Modloader/app/structs/DesiredUberStateDoor.h>
#include <Modloader/app/structs/DesiredUberStateDoor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateDoor {
        inline app::DesiredUberStateDoor__Class** type_info() {
            static app::DesiredUberStateDoor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredUberStateDoor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredUberStateDoor__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateDoor__Class>(type_info(), "", "DesiredUberStateDoor");
        }
        inline app::DesiredUberStateDoor* create() {
            return il2cpp::create_object<app::DesiredUberStateDoor>(get_class());
        }
    } // namespace DesiredUberStateDoor
} // namespace app::classes::types
