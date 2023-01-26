#pragma once
#include <Modloader/app/structs/MoveToBehaviourNew.h>
#include <Modloader/app/structs/MoveToBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveToBehaviourNew {
        inline app::MoveToBehaviourNew__Class** type_info() {
            static app::MoveToBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveToBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveToBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::MoveToBehaviourNew__Class>(type_info(), "Moon", "MoveToBehaviourNew");
        }
        inline app::MoveToBehaviourNew* create() {
            return il2cpp::create_object<app::MoveToBehaviourNew>(get_class());
        }
    } // namespace MoveToBehaviourNew
} // namespace app::classes::types
