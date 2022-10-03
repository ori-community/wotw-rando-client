#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeactivateDamageDealerAction {
        namespace {
            app::DeactivateDamageDealerAction__Class* type_info_ref = nullptr;
        }
        app::DeactivateDamageDealerAction__Class** type_info = &type_info_ref;
        inline app::DeactivateDamageDealerAction__Class* get_class() {
            return il2cpp::get_class<app::DeactivateDamageDealerAction__Class>(type_info, "", "DeactivateDamageDealerAction");
        }
        inline app::DeactivateDamageDealerAction* create() {
            return il2cpp::create_object<app::DeactivateDamageDealerAction>(get_class());
        }
    } // namespace DeactivateDamageDealerAction
} // namespace app::classes::types
