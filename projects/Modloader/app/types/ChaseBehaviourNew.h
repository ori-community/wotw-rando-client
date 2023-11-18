#pragma once
#include <Modloader/app/structs/ChaseBehaviourNew.h>
#include <Modloader/app/structs/ChaseBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChaseBehaviourNew {
        inline app::ChaseBehaviourNew__Class** type_info() {
            static app::ChaseBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChaseBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChaseBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::ChaseBehaviourNew__Class>(type_info(), "Moon", "ChaseBehaviourNew");
        }
        inline app::ChaseBehaviourNew* create() {
            return il2cpp::create_object<app::ChaseBehaviourNew>(get_class());
        }
    } // namespace ChaseBehaviourNew
} // namespace app::classes::types
