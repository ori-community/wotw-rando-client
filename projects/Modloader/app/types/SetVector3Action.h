#pragma once
#include <Modloader/app/structs/SetVector3Action.h>
#include <Modloader/app/structs/SetVector3Action__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetVector3Action {
        inline app::SetVector3Action__Class** type_info() {
            static app::SetVector3Action__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetVector3Action__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetVector3Action__Class* get_class() {
            return il2cpp::get_class<app::SetVector3Action__Class>(type_info(), "Moon.BehaviourSystem", "SetVector3Action");
        }
        inline app::SetVector3Action* create() {
            return il2cpp::create_object<app::SetVector3Action>(get_class());
        }
    } // namespace SetVector3Action
} // namespace app::classes::types
