#pragma once
#include <Modloader/app/structs/RestoreHealthAction.h>
#include <Modloader/app/structs/RestoreHealthAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestoreHealthAction {
        inline app::RestoreHealthAction__Class** type_info() {
            static app::RestoreHealthAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RestoreHealthAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RestoreHealthAction__Class* get_class() {
            return il2cpp::get_class<app::RestoreHealthAction__Class>(type_info(), "", "RestoreHealthAction");
        }
        inline app::RestoreHealthAction* create() {
            return il2cpp::create_object<app::RestoreHealthAction>(get_class());
        }
    } // namespace RestoreHealthAction
} // namespace app::classes::types
