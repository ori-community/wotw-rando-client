#pragma once
#include <Modloader/app/structs/DeactivateDamageDealerAction.h>
#include <Modloader/app/structs/DeactivateDamageDealerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeactivateDamageDealerAction {
        inline app::DeactivateDamageDealerAction__Class** type_info() {
            static app::DeactivateDamageDealerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeactivateDamageDealerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeactivateDamageDealerAction__Class* get_class() {
            return il2cpp::get_class<app::DeactivateDamageDealerAction__Class>(type_info(), "", "DeactivateDamageDealerAction");
        }
        inline app::DeactivateDamageDealerAction* create() {
            return il2cpp::create_object<app::DeactivateDamageDealerAction>(get_class());
        }
    } // namespace DeactivateDamageDealerAction
} // namespace app::classes::types
