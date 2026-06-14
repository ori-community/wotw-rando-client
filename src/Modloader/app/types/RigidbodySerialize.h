#pragma once
#include <Modloader/app/structs/RigidbodySerialize.h>
#include <Modloader/app/structs/RigidbodySerialize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodySerialize {
        inline app::RigidbodySerialize__Class** type_info() {
            static app::RigidbodySerialize__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodySerialize__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodySerialize__Class* get_class() {
            return il2cpp::get_class<app::RigidbodySerialize__Class>(type_info(), "", "RigidbodySerialize");
        }
        inline app::RigidbodySerialize* create() {
            return il2cpp::create_object<app::RigidbodySerialize>(get_class());
        }
    } // namespace RigidbodySerialize
} // namespace app::classes::types
