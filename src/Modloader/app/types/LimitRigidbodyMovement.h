#pragma once
#include <Modloader/app/structs/LimitRigidbodyMovement.h>
#include <Modloader/app/structs/LimitRigidbodyMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LimitRigidbodyMovement {
        inline app::LimitRigidbodyMovement__Class** type_info() {
            static app::LimitRigidbodyMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LimitRigidbodyMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LimitRigidbodyMovement__Class* get_class() {
            return il2cpp::get_class<app::LimitRigidbodyMovement__Class>(type_info(), "", "LimitRigidbodyMovement");
        }
        inline app::LimitRigidbodyMovement* create() {
            return il2cpp::create_object<app::LimitRigidbodyMovement>(get_class());
        }
    } // namespace LimitRigidbodyMovement
} // namespace app::classes::types
