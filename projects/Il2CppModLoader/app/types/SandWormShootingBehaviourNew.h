#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormShootingBehaviourNew {
        namespace {
            app::SandWormShootingBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::SandWormShootingBehaviourNew__Class** type_info = &type_info_ref;
        inline app::SandWormShootingBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormShootingBehaviourNew__Class>(type_info, "Moon", "SandWormShootingBehaviourNew");
        }
        inline app::SandWormShootingBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormShootingBehaviourNew>(get_class());
        }
    } // namespace SandWormShootingBehaviourNew
} // namespace app::classes::types
