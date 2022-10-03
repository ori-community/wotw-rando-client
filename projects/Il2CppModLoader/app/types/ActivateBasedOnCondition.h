#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateBasedOnCondition {
        namespace {
            app::ActivateBasedOnCondition__Class* type_info_ref = nullptr;
        }
        app::ActivateBasedOnCondition__Class** type_info = &type_info_ref;
        inline app::ActivateBasedOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ActivateBasedOnCondition__Class>(type_info, "", "ActivateBasedOnCondition");
        }
        inline app::ActivateBasedOnCondition* create() {
            return il2cpp::create_object<app::ActivateBasedOnCondition>(get_class());
        }
    } // namespace ActivateBasedOnCondition
} // namespace app::classes::types
