#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyReactToDamage {
        namespace {
            app::RigidbodyReactToDamage__Class* type_info_ref = nullptr;
        }
        app::RigidbodyReactToDamage__Class** type_info = &type_info_ref;
        inline app::RigidbodyReactToDamage__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyReactToDamage__Class>(type_info, "", "RigidbodyReactToDamage");
        }
        inline app::RigidbodyReactToDamage* create() {
            return il2cpp::create_object<app::RigidbodyReactToDamage>(get_class());
        }
    } // namespace RigidbodyReactToDamage
} // namespace app::classes::types
