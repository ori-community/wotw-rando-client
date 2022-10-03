#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormStickOutBehaviourNew {
        namespace {
            app::SandWormStickOutBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::SandWormStickOutBehaviourNew__Class** type_info = &type_info_ref;
        inline app::SandWormStickOutBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormStickOutBehaviourNew__Class>(type_info, "Moon", "SandWormStickOutBehaviourNew");
        }
        inline app::SandWormStickOutBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormStickOutBehaviourNew>(get_class());
        }
    } // namespace SandWormStickOutBehaviourNew
} // namespace app::classes::types
