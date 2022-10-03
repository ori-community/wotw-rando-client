#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasPurchasedBuilderProjectCondition {
        namespace {
            app::HasPurchasedBuilderProjectCondition__Class* type_info_ref = nullptr;
        }
        app::HasPurchasedBuilderProjectCondition__Class** type_info = &type_info_ref;
        inline app::HasPurchasedBuilderProjectCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedBuilderProjectCondition__Class>(type_info, "", "HasPurchasedBuilderProjectCondition");
        }
        inline app::HasPurchasedBuilderProjectCondition* create() {
            return il2cpp::create_object<app::HasPurchasedBuilderProjectCondition>(get_class());
        }
    } // namespace HasPurchasedBuilderProjectCondition
} // namespace app::classes::types
