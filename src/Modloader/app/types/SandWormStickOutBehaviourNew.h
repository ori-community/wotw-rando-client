#pragma once
#include <Modloader/app/structs/SandWormStickOutBehaviourNew.h>
#include <Modloader/app/structs/SandWormStickOutBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormStickOutBehaviourNew {
        inline app::SandWormStickOutBehaviourNew__Class** type_info() {
            static app::SandWormStickOutBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormStickOutBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormStickOutBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormStickOutBehaviourNew__Class>(type_info(), "Moon", "SandWormStickOutBehaviourNew");
        }
        inline app::SandWormStickOutBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormStickOutBehaviourNew>(get_class());
        }
    } // namespace SandWormStickOutBehaviourNew
} // namespace app::classes::types
