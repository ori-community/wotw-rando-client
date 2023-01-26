#pragma once
#include <Modloader/app/structs/UpgradableMultiplier.h>
#include <Modloader/app/structs/UpgradableMultiplier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradableMultiplier {
        inline app::UpgradableMultiplier__Class** type_info() {
            static app::UpgradableMultiplier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradableMultiplier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradableMultiplier__Class* get_class() {
            return il2cpp::get_class<app::UpgradableMultiplier__Class>(type_info(), "", "UpgradableMultiplier");
        }
        inline app::UpgradableMultiplier* create() {
            return il2cpp::create_object<app::UpgradableMultiplier>(get_class());
        }
    } // namespace UpgradableMultiplier
} // namespace app::classes::types
