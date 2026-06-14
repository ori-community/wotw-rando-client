#pragma once
#include <Modloader/app/structs/DoorUberStatePair.h>
#include <Modloader/app/structs/DoorUberStatePair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoorUberStatePair {
        inline app::DoorUberStatePair__Class** type_info() {
            static app::DoorUberStatePair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoorUberStatePair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoorUberStatePair__Class* get_class() {
            return il2cpp::get_class<app::DoorUberStatePair__Class>(type_info(), "", "DoorUberStatePair");
        }
        inline app::DoorUberStatePair* create() {
            return il2cpp::create_object<app::DoorUberStatePair>(get_class());
        }
    } // namespace DoorUberStatePair
} // namespace app::classes::types
