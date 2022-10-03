#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormDashBehaviourNew {
        namespace {
            app::SandWormDashBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::SandWormDashBehaviourNew__Class** type_info = &type_info_ref;
        inline app::SandWormDashBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormDashBehaviourNew__Class>(type_info, "Moon", "SandWormDashBehaviourNew");
        }
        inline app::SandWormDashBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormDashBehaviourNew>(get_class());
        }
    } // namespace SandWormDashBehaviourNew
} // namespace app::classes::types
