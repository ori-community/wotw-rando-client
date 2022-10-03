#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSkeetoDiveAttackBehaviour__Array {
        namespace {
            app::KamikazeSkeetoDiveAttackBehaviour__Array__Class* type_info_ref = nullptr;
        }
        app::KamikazeSkeetoDiveAttackBehaviour__Array__Class** type_info = &type_info_ref;
        inline app::KamikazeSkeetoDiveAttackBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSkeetoDiveAttackBehaviour__Array__Class>(type_info, "", "KamikazeSkeetoDiveAttackBehaviour[]");
        }
        inline app::KamikazeSkeetoDiveAttackBehaviour__Array* create() {
            return il2cpp::create_object<app::KamikazeSkeetoDiveAttackBehaviour__Array>(get_class());
        }
    } // namespace KamikazeSkeetoDiveAttackBehaviour__Array
} // namespace app::classes::types
