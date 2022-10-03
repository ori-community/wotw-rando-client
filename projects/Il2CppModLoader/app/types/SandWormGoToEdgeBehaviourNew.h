#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormGoToEdgeBehaviourNew {
        namespace {
            app::SandWormGoToEdgeBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::SandWormGoToEdgeBehaviourNew__Class** type_info = &type_info_ref;
        inline app::SandWormGoToEdgeBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormGoToEdgeBehaviourNew__Class>(type_info, "Moon", "SandWormGoToEdgeBehaviourNew");
        }
        inline app::SandWormGoToEdgeBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormGoToEdgeBehaviourNew>(get_class());
        }
    } // namespace SandWormGoToEdgeBehaviourNew
} // namespace app::classes::types
