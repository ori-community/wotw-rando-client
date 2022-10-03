#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PiranhaAttackBehaviour {
        namespace {
            app::PiranhaAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::PiranhaAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaAttackBehaviour__Class>(type_info, "", "PiranhaAttackBehaviour");
        }
        inline app::PiranhaAttackBehaviour* create() {
            return il2cpp::create_object<app::PiranhaAttackBehaviour>(get_class());
        }
    } // namespace PiranhaAttackBehaviour
} // namespace app::classes::types
