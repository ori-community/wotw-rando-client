#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowGetAbilityTextEntity {
        namespace {
            app::ShowGetAbilityTextEntity__Class* type_info_ref = nullptr;
        }
        app::ShowGetAbilityTextEntity__Class** type_info = &type_info_ref;
        inline app::ShowGetAbilityTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowGetAbilityTextEntity__Class>(type_info, "Moon.Timeline", "ShowGetAbilityTextEntity");
        }
        inline app::ShowGetAbilityTextEntity* create() {
            return il2cpp::create_object<app::ShowGetAbilityTextEntity>(get_class());
        }
    } // namespace ShowGetAbilityTextEntity
} // namespace app::classes::types
