#pragma once
#include <Modloader/app/structs/AttachToRopeAction.h>
#include <Modloader/app/structs/AttachToRopeAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachToRopeAction {
        inline app::AttachToRopeAction__Class** type_info() {
            static app::AttachToRopeAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachToRopeAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachToRopeAction__Class* get_class() {
            return il2cpp::get_class<app::AttachToRopeAction__Class>(type_info(), "", "AttachToRopeAction");
        }
        inline app::AttachToRopeAction* create() {
            return il2cpp::create_object<app::AttachToRopeAction>(get_class());
        }
    } // namespace AttachToRopeAction
} // namespace app::classes::types
