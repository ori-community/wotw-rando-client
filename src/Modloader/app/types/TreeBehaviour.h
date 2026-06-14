#pragma once
#include <Modloader/app/structs/TreeBehaviour.h>
#include <Modloader/app/structs/TreeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TreeBehaviour {
        inline app::TreeBehaviour__Class** type_info() {
            static app::TreeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TreeBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TreeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TreeBehaviour__Class>(type_info(), "Moon.BehaviourSystem", "TreeBehaviour");
        }
        inline app::TreeBehaviour* create() {
            return il2cpp::create_object<app::TreeBehaviour>(get_class());
        }
    } // namespace TreeBehaviour
} // namespace app::classes::types
