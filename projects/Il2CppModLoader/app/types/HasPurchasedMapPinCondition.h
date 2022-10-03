#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasPurchasedMapPinCondition {
        namespace {
            app::HasPurchasedMapPinCondition__Class* type_info_ref = nullptr;
        }
        app::HasPurchasedMapPinCondition__Class** type_info = &type_info_ref;
        inline app::HasPurchasedMapPinCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedMapPinCondition__Class>(type_info, "", "HasPurchasedMapPinCondition");
        }
        inline app::HasPurchasedMapPinCondition* create() {
            return il2cpp::create_object<app::HasPurchasedMapPinCondition>(get_class());
        }
    } // namespace HasPurchasedMapPinCondition
} // namespace app::classes::types
