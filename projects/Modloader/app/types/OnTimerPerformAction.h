#pragma once
#include <Modloader/app/structs/OnTimerPerformAction.h>
#include <Modloader/app/structs/OnTimerPerformAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnTimerPerformAction {
        inline app::OnTimerPerformAction__Class** type_info() {
            static app::OnTimerPerformAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnTimerPerformAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnTimerPerformAction__Class* get_class() {
            return il2cpp::get_class<app::OnTimerPerformAction__Class>(type_info(), "", "OnTimerPerformAction");
        }
        inline app::OnTimerPerformAction* create() {
            return il2cpp::create_object<app::OnTimerPerformAction>(get_class());
        }
    } // namespace OnTimerPerformAction
} // namespace app::classes::types
