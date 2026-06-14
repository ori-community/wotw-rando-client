#pragma once
#include <Modloader/app/structs/SandWormGoToEdgeBehaviourNew.h>
#include <Modloader/app/structs/SandWormGoToEdgeBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormGoToEdgeBehaviourNew {
        inline app::SandWormGoToEdgeBehaviourNew__Class** type_info() {
            static app::SandWormGoToEdgeBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormGoToEdgeBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormGoToEdgeBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormGoToEdgeBehaviourNew__Class>(type_info(), "Moon", "SandWormGoToEdgeBehaviourNew");
        }
        inline app::SandWormGoToEdgeBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormGoToEdgeBehaviourNew>(get_class());
        }
    } // namespace SandWormGoToEdgeBehaviourNew
} // namespace app::classes::types
