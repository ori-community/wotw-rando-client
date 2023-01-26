#pragma once
#include <Modloader/app/structs/RollingMovement.h>
#include <Modloader/app/structs/RollingMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RollingMovement {
        inline app::RollingMovement__Class** type_info() {
            static app::RollingMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RollingMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RollingMovement__Class* get_class() {
            return il2cpp::get_class<app::RollingMovement__Class>(type_info(), "", "RollingMovement");
        }
        inline app::RollingMovement* create() {
            return il2cpp::create_object<app::RollingMovement>(get_class());
        }
    } // namespace RollingMovement
} // namespace app::classes::types
