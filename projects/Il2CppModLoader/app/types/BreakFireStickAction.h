#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BreakFireStickAction {
        namespace {
            app::BreakFireStickAction__Class* type_info_ref = nullptr;
        }
        app::BreakFireStickAction__Class** type_info = &type_info_ref;
        inline app::BreakFireStickAction__Class* get_class() {
            return il2cpp::get_class<app::BreakFireStickAction__Class>(type_info, "", "BreakFireStickAction");
        }
        inline app::BreakFireStickAction* create() {
            return il2cpp::create_object<app::BreakFireStickAction>(get_class());
        }
    } // namespace BreakFireStickAction
} // namespace app::classes::types
