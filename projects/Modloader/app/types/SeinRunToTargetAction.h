#pragma once
#include <Modloader/app/structs/SeinRunToTargetAction.h>
#include <Modloader/app/structs/SeinRunToTargetAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRunToTargetAction {
        inline app::SeinRunToTargetAction__Class** type_info() {
            static app::SeinRunToTargetAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinRunToTargetAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinRunToTargetAction__Class* get_class() {
            return il2cpp::get_class<app::SeinRunToTargetAction__Class>(type_info(), "", "SeinRunToTargetAction");
        }
        inline app::SeinRunToTargetAction* create() {
            return il2cpp::create_object<app::SeinRunToTargetAction>(get_class());
        }
    } // namespace SeinRunToTargetAction
} // namespace app::classes::types
