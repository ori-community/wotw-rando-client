#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodySuspendable {
        namespace {
            app::RigidbodySuspendable__Class* type_info_ref = nullptr;
        }
        app::RigidbodySuspendable__Class** type_info = &type_info_ref;
        inline app::RigidbodySuspendable__Class* get_class() {
            return il2cpp::get_class<app::RigidbodySuspendable__Class>(type_info, "", "RigidbodySuspendable");
        }
        inline app::RigidbodySuspendable* create() {
            return il2cpp::create_object<app::RigidbodySuspendable>(get_class());
        }
    } // namespace RigidbodySuspendable
} // namespace app::classes::types
