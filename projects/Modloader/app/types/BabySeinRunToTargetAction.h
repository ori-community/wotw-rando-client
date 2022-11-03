#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BabySeinRunToTargetAction {
        namespace {
            inline app::BabySeinRunToTargetAction__Class* type_info_ref = nullptr;
        }
        inline app::BabySeinRunToTargetAction__Class** type_info = &type_info_ref;
        inline app::BabySeinRunToTargetAction__Class* get_class() {
            return il2cpp::get_class<app::BabySeinRunToTargetAction__Class>(type_info, "", "BabySeinRunToTargetAction");
        }
        inline app::BabySeinRunToTargetAction* create() {
            return il2cpp::create_object<app::BabySeinRunToTargetAction>(get_class());
        }
    } // namespace BabySeinRunToTargetAction
} // namespace app::classes::types
