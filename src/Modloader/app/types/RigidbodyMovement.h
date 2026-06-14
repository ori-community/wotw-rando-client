#pragma once
#include <Modloader/app/structs/RigidbodyMovement.h>
#include <Modloader/app/structs/RigidbodyMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyMovement {
        inline app::RigidbodyMovement__Class** type_info() {
            static app::RigidbodyMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyMovement__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyMovement__Class>(type_info(), "", "RigidbodyMovement");
        }
        inline app::RigidbodyMovement* create() {
            return il2cpp::create_object<app::RigidbodyMovement>(get_class());
        }
    } // namespace RigidbodyMovement
} // namespace app::classes::types
