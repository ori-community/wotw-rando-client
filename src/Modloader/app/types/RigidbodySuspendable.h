#pragma once
#include <Modloader/app/structs/RigidbodySuspendable.h>
#include <Modloader/app/structs/RigidbodySuspendable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodySuspendable {
        inline app::RigidbodySuspendable__Class** type_info() {
            static app::RigidbodySuspendable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodySuspendable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodySuspendable__Class* get_class() {
            return il2cpp::get_class<app::RigidbodySuspendable__Class>(type_info(), "", "RigidbodySuspendable");
        }
        inline app::RigidbodySuspendable* create() {
            return il2cpp::create_object<app::RigidbodySuspendable>(get_class());
        }
    } // namespace RigidbodySuspendable
} // namespace app::classes::types
