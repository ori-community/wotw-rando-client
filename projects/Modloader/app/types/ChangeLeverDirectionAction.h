#pragma once
#include <Modloader/app/structs/ChangeLeverDirectionAction.h>
#include <Modloader/app/structs/ChangeLeverDirectionAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeLeverDirectionAction {
        inline app::ChangeLeverDirectionAction__Class** type_info() {
            static app::ChangeLeverDirectionAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeLeverDirectionAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeLeverDirectionAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeLeverDirectionAction__Class>(type_info(), "", "ChangeLeverDirectionAction");
        }
        inline app::ChangeLeverDirectionAction* create() {
            return il2cpp::create_object<app::ChangeLeverDirectionAction>(get_class());
        }
    } // namespace ChangeLeverDirectionAction
} // namespace app::classes::types
