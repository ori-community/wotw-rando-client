#pragma once
#include <Modloader/app/structs/AbilitySetAsset.h>
#include <Modloader/app/structs/AbilitySetAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbilitySetAsset {
        inline app::AbilitySetAsset__Class** type_info() {
            static app::AbilitySetAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AbilitySetAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AbilitySetAsset__Class* get_class() {
            return il2cpp::get_class<app::AbilitySetAsset__Class>(type_info(), "", "AbilitySetAsset");
        }
        inline app::AbilitySetAsset* create() {
            return il2cpp::create_object<app::AbilitySetAsset>(get_class());
        }
    } // namespace AbilitySetAsset
} // namespace app::classes::types
