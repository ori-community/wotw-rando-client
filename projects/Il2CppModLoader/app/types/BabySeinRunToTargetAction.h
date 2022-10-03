#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabySeinRunToTargetAction {
        namespace {
            app::BabySeinRunToTargetAction__Class* type_info_ref = nullptr;
        }
        app::BabySeinRunToTargetAction__Class** type_info = &type_info_ref;
        inline app::BabySeinRunToTargetAction__Class* get_class() {
            return il2cpp::get_class<app::BabySeinRunToTargetAction__Class>(type_info, "", "BabySeinRunToTargetAction");
        }
        inline app::BabySeinRunToTargetAction* create() {
            return il2cpp::create_object<app::BabySeinRunToTargetAction>(get_class());
        }
    } // namespace BabySeinRunToTargetAction
} // namespace app::classes::types
