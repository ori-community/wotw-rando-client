#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpgradeTowerAction {
        namespace {
            inline app::UpgradeTowerAction__Class* type_info_ref = nullptr;
        }
        inline app::UpgradeTowerAction__Class** type_info = &type_info_ref;
        inline app::UpgradeTowerAction__Class* get_class() {
            return il2cpp::get_class<app::UpgradeTowerAction__Class>(type_info, "", "UpgradeTowerAction");
        }
        inline app::UpgradeTowerAction* create() {
            return il2cpp::create_object<app::UpgradeTowerAction>(get_class());
        }
    } // namespace UpgradeTowerAction
} // namespace app::classes::types
