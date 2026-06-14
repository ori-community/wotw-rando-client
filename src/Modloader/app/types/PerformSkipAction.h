#pragma once
#include <Modloader/app/structs/PerformSkipAction.h>
#include <Modloader/app/structs/PerformSkipAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformSkipAction {
        inline app::PerformSkipAction__Class** type_info() {
            static app::PerformSkipAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PerformSkipAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PerformSkipAction__Class* get_class() {
            return il2cpp::get_class<app::PerformSkipAction__Class>(type_info(), "", "PerformSkipAction");
        }
        inline app::PerformSkipAction* create() {
            return il2cpp::create_object<app::PerformSkipAction>(get_class());
        }
    } // namespace PerformSkipAction
} // namespace app::classes::types
