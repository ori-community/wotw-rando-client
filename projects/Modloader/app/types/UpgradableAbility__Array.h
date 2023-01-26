#pragma once
#include <Modloader/app/structs/UpgradableAbility__Array.h>
#include <Modloader/app/structs/UpgradableAbility__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradableAbility__Array {
        inline app::UpgradableAbility__Array__Class** type_info() {
            static app::UpgradableAbility__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradableAbility__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradableAbility__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradableAbility__Array__Class>(type_info(), "", "UpgradableAbility[]");
        }
        inline app::UpgradableAbility__Array* create() {
            return il2cpp::create_object<app::UpgradableAbility__Array>(get_class());
        }
    } // namespace UpgradableAbility__Array
} // namespace app::classes::types
