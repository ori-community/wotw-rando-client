#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbilitySetAsset {
        namespace {
            app::AbilitySetAsset__Class* type_info_ref = nullptr;
        }
        app::AbilitySetAsset__Class** type_info = &type_info_ref;
        inline app::AbilitySetAsset__Class* get_class() {
            return il2cpp::get_class<app::AbilitySetAsset__Class>(type_info, "", "AbilitySetAsset");
        }
        inline app::AbilitySetAsset* create() {
            return il2cpp::create_object<app::AbilitySetAsset>(get_class());
        }
    } // namespace AbilitySetAsset
} // namespace app::classes::types
