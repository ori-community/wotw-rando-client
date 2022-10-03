#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnTimerPerformAction {
        namespace {
            app::OnTimerPerformAction__Class* type_info_ref = nullptr;
        }
        app::OnTimerPerformAction__Class** type_info = &type_info_ref;
        inline app::OnTimerPerformAction__Class* get_class() {
            return il2cpp::get_class<app::OnTimerPerformAction__Class>(type_info, "", "OnTimerPerformAction");
        }
        inline app::OnTimerPerformAction* create() {
            return il2cpp::create_object<app::OnTimerPerformAction>(get_class());
        }
    } // namespace OnTimerPerformAction
} // namespace app::classes::types
