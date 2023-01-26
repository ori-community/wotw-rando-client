#pragma once
#include <Modloader/app/structs/UpgradeTowerAction.h>
#include <Modloader/app/structs/UpgradeTowerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradeTowerAction {
        inline app::UpgradeTowerAction__Class** type_info() {
            static app::UpgradeTowerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradeTowerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradeTowerAction__Class* get_class() {
            return il2cpp::get_class<app::UpgradeTowerAction__Class>(type_info(), "", "UpgradeTowerAction");
        }
        inline app::UpgradeTowerAction* create() {
            return il2cpp::create_object<app::UpgradeTowerAction>(get_class());
        }
    } // namespace UpgradeTowerAction
} // namespace app::classes::types
