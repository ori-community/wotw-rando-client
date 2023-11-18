#pragma once
#include <Modloader/app/structs/OriFlyBackToPlayerAction.h>
#include <Modloader/app/structs/OriFlyBackToPlayerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriFlyBackToPlayerAction {
        inline app::OriFlyBackToPlayerAction__Class** type_info() {
            static app::OriFlyBackToPlayerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriFlyBackToPlayerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriFlyBackToPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::OriFlyBackToPlayerAction__Class>(type_info(), "", "OriFlyBackToPlayerAction");
        }
        inline app::OriFlyBackToPlayerAction* create() {
            return il2cpp::create_object<app::OriFlyBackToPlayerAction>(get_class());
        }
    } // namespace OriFlyBackToPlayerAction
} // namespace app::classes::types
