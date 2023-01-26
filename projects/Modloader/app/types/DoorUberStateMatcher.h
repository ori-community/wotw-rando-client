#pragma once
#include <Modloader/app/structs/DoorUberStateMatcher.h>
#include <Modloader/app/structs/DoorUberStateMatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoorUberStateMatcher {
        inline app::DoorUberStateMatcher__Class** type_info() {
            static app::DoorUberStateMatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoorUberStateMatcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoorUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::DoorUberStateMatcher__Class>(type_info(), "", "DoorUberStateMatcher");
        }
        inline app::DoorUberStateMatcher* create() {
            return il2cpp::create_object<app::DoorUberStateMatcher>(get_class());
        }
    } // namespace DoorUberStateMatcher
} // namespace app::classes::types
