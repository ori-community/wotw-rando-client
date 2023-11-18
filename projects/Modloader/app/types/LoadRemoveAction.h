#pragma once
#include <Modloader/app/structs/LoadRemoveAction.h>
#include <Modloader/app/structs/LoadRemoveAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadRemoveAction {
        inline app::LoadRemoveAction__Class** type_info() {
            static app::LoadRemoveAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadRemoveAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadRemoveAction__Class* get_class() {
            return il2cpp::get_class<app::LoadRemoveAction__Class>(type_info(), "", "LoadRemoveAction");
        }
        inline app::LoadRemoveAction* create() {
            return il2cpp::create_object<app::LoadRemoveAction>(get_class());
        }
    } // namespace LoadRemoveAction
} // namespace app::classes::types
