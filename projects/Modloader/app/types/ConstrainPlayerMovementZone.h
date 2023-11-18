#pragma once
#include <Modloader/app/structs/ConstrainPlayerMovementZone.h>
#include <Modloader/app/structs/ConstrainPlayerMovementZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstrainPlayerMovementZone {
        inline app::ConstrainPlayerMovementZone__Class** type_info() {
            static app::ConstrainPlayerMovementZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstrainPlayerMovementZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstrainPlayerMovementZone__Class* get_class() {
            return il2cpp::get_class<app::ConstrainPlayerMovementZone__Class>(type_info(), "", "ConstrainPlayerMovementZone");
        }
        inline app::ConstrainPlayerMovementZone* create() {
            return il2cpp::create_object<app::ConstrainPlayerMovementZone>(get_class());
        }
    } // namespace ConstrainPlayerMovementZone
} // namespace app::classes::types
