#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwarmMinigunAttackBehaviour {
        namespace {
            app::SwarmMinigunAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::SwarmMinigunAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::SwarmMinigunAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmMinigunAttackBehaviour__Class>(type_info, "", "SwarmMinigunAttackBehaviour");
        }
        inline app::SwarmMinigunAttackBehaviour* create() {
            return il2cpp::create_object<app::SwarmMinigunAttackBehaviour>(get_class());
        }
    } // namespace SwarmMinigunAttackBehaviour
} // namespace app::classes::types
