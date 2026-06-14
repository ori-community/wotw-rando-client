#pragma once
#include <Modloader/app/structs/RigidbodyReactToDamage.h>
#include <Modloader/app/structs/RigidbodyReactToDamage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyReactToDamage {
        inline app::RigidbodyReactToDamage__Class** type_info() {
            static app::RigidbodyReactToDamage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyReactToDamage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyReactToDamage__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyReactToDamage__Class>(type_info(), "", "RigidbodyReactToDamage");
        }
        inline app::RigidbodyReactToDamage* create() {
            return il2cpp::create_object<app::RigidbodyReactToDamage>(get_class());
        }
    } // namespace RigidbodyReactToDamage
} // namespace app::classes::types
