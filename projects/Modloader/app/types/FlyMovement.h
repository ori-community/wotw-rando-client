#pragma once
#include <Modloader/app/structs/FlyMovement.h>
#include <Modloader/app/structs/FlyMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlyMovement {
        inline app::FlyMovement__Class** type_info() {
            static app::FlyMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlyMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlyMovement__Class* get_class() {
            return il2cpp::get_class<app::FlyMovement__Class>(type_info(), "", "FlyMovement");
        }
        inline app::FlyMovement* create() {
            return il2cpp::create_object<app::FlyMovement>(get_class());
        }
    } // namespace FlyMovement
} // namespace app::classes::types
