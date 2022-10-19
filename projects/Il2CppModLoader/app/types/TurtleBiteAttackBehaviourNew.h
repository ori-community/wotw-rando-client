#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleBiteAttackBehaviourNew {
        namespace {
            inline app::TurtleBiteAttackBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::TurtleBiteAttackBehaviourNew__Class** type_info = &type_info_ref;
        inline app::TurtleBiteAttackBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleBiteAttackBehaviourNew__Class>(type_info, "Moon", "TurtleBiteAttackBehaviourNew");
        }
        inline app::TurtleBiteAttackBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleBiteAttackBehaviourNew>(get_class());
        }
    } // namespace TurtleBiteAttackBehaviourNew
} // namespace app::classes::types
